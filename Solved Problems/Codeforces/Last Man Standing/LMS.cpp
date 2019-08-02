
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef pair<ull,ull> ii;
typedef vector<ii> vii;

int main(){
	
	int N;
    
    cin >> N;

	vii sol;
	stack<ull> st;
	queue<ull> q;

	for ( int n = 0 ; n < N ; ++n ){
		int entry;
        cin >> entry;
        st.push(entry);
        q.push(N - n);
	}
	
	while( st.empty() == false ){
        for ( int k = 0 ; k < st.top() ; ++k ){
            if ( q.empty() == true ){
                break;
            }
            sol.push_back( ii ( st.size() , q.front() ) );
            q.pop();
        }
        st.pop();
    }
    
    if ( q.size() >= 1 ){
        cout << "YES" << endl;
        for ( vii::iterator it = sol.begin() ; it != sol.end() ; ++it ){
            cout << it->first << " " << it->second << endl;
        }
    }
    else cout << "NO" << endl;
	
}
