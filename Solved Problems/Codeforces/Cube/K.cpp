#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    
    long int surface;
    
    cin >>T;
    
    for ( int t = 0 ; t < T ; ++t ){
        cin >> surface;
        
        cout << sqrt(surface/6) << endl;
    }
    
    return 0;
}
