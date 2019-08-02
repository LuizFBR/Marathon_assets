#include <bits/stdc++.h>

using namespace std;

typedef pair<char,int> ci;

int main(){

    int T;

    cin >> T;

    string a,b;

    for ( int t = 0 ; t < T ; ++t ){
        unordered_map<char,int> umap;
        cin >> a >> b;

        for ( int i = 0 ; i < b.size() ; ++i ){
            pair<unordered_map<char,int>::iterator, bool> test;
            test = umap.insert( ci( b[i], 1 ));

            if ( test.second == false ){
                test.first->second++;
            }
        }
        int count = 0;

        for ( int i = 0 ; i < a.size() ; ++i ){
            if ( umap[a[i]] > 0 ){
                umap[a[i]]--;
                count++;
            }
            else break;
        }

        cout << count << endl;
    }
}
