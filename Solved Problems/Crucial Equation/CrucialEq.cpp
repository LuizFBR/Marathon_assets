#include <iostream>
#include <vector>

using namespace std;

int gcd(int m,int n){

 if(n==0)

  return m;

 else

  return gcd(n,m%n);

}


int main()
{
    int a,b,c,T,C = 1;

    cin >> T;

    for ( int t = 0 ; t < T ; ++t ){
        cin >> a >> b >> c;

        int sol = gcd(a,b);

        if ( c % sol == 0 ) cout << "Case " << C++ << ": Yes" << endl;
        else cout << "Case " << C++ << ": No" << endl;
    }
    return 0;
}
