#include <iostream>

using namespace std;

int main(){

    int N;

    while( cin >> N && N != 0 ){
        cout << N*(N+1)*(2*N + 1)/6 <<endl;
    }
    return 0;
}
