#include <bits/stdc++.h>

using namespace std;

typedef pair<int,long int> ap;

int main()
{
    int N,M;

    cin >> N >> M;

    vector<long int> verticeNormal(N + 1);
    vector<vector<ap>> arestaList(N + 1);

    long int minimal = LONG_MAX;
    int minAresta;

    for ( int n = 1 ; n <= N ; ++n ){
        cin >> verticeNormal[n];
        if (verticeNormal[n] < minimal ){
            minAresta = n;
        }
    }

    for ( int m = 1 ; m <= M ; ++m ){

        int aresta1,aresta2;
        long int peso;
        cin >> aresta1 >> aresta2 >> peso;

        arestaList[aresta1].push_back( ap(aresta2,peso) );
        arestaList[aresta2].push_back( ap(aresta1,peso) );
    }

    int min_num = 0;

    for ( int i = 1 ; i <= N ; ++i ){
        if ( i != minAresta ){
            if ( arestaList[i].empty() == false ){
                long int melhor_oferta = INT_MAX;
                for ( ap& it : arestaList[i] ){
                    melhor_oferta = min(it.second, melhor_oferta);
                }
                min_num += (verticeNormal[minAresta] + verticeNormal[i] > melhor_oferta) ? melhor_oferta : verticeNormal[minAresta] + verticeNormal[i];
            }
            else{
                min_num += verticeNormal[i] + verticeNormal[minAresta];
            }
        }
    }

    cout << min_num << endl;
}
