#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) // Euclid's Greatest Common Divisor
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}


int main()
{

    int a,b,c,T;

    for ( int t = 0 ; t < T ; ++t ){
        cin >> a >> b >> c;

        if ( c % gcd(a,b) == 0)cout << "YES" <<endl;
        else cout << "NO" << endl;
    }

    return 0;
}
