#define UNVISITED −1
#define VISITED 1

typedef pair <int , int > ii ; 
typedef vector <ii> vii ; 
typedef vector <int > vi ; 

vi dfs_num; // this variable has to be global , we cannot put it in recursion
vector<vii> AdjList ;

void dfs ( int u ) {                                // DFS for normal usage : as graph traversal algorithm
    printf ( " %d " , u );                         // this vertex is visited
    dfs_num [ u ] = VISITED;                       // important step : we mark this vertex as visited
    for ( int j = 0 ; j < ( int ) Adj List [ u ].size() ; ++j ) {
        ii v = AdjList[u][j];                     // v is a( neighbor , weight ) pair
        if ( dfs_num [v.first] == UNVISITED )     //important check to avoid cycle
            dfs ( v.first ) ; // recursively visits unvisited neighbors v of vertex u
    } 
}
