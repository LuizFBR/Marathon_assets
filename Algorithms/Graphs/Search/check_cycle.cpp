#include <vector>

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
