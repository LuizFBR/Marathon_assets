#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

bool check_cycle( vector<vi> &list, vector<bool> &visited, int momNode, int node ){ // prevNode initializes as 0

    bool sol = false;
    visited[node] = true;

    for ( int& it : list[node] ){
        if ( visited[it] == true && it != momNode ){
            sol = true; // there is a cycle!
        }
        else if ( visited[it] == false && it != momNode){
            sol = check_cycle(list,visited,node,it);
        }
    }
    return sol;
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vi> adjList(N + 1);
    vector<bool> visited(N + 1, false);

    for ( int m = 0 ; m < M ; ++m ){
        int vertex1,vertex2;

        cin >> vertex1 >> vertex2;

        adjList[vertex1].push_back(vertex2);
        adjList[vertex2].push_back(vertex1);
    }

    bool isTree = false;

    if ( check_cycle(adjList,visited,0,1) == false ){
        isTree = true;
    }

    if ( isTree )
    {
        for ( int idx = 1 ; idx <= N ; ++idx ){
            if ( visited[idx] == false ){
                isTree = false;
            }
        }
    }

    if ( isTree ) cout << "YES" << endl;
    else cout << "NO" << endl;

}
