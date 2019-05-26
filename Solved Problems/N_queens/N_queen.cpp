#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define P 8 // Number of queens in PXP chess board

//D1[a] - > a = 4 - lin + col - 1
//D2[a] - > a = lin + col;

bool *D1;
bool *D2;
bool *col_q;

bool N_queens( int lin, int N )
{
    if ( N == 0 )return true;

    for ( int col = 0 ; col < P ; ++col )
    {
        printf("lin:%d col:%d\n", lin, col);
        if( col_q[col] == false && D1[P - lin + col - 1] == false && D2[lin + col] == false )
        {
            D1[P - lin + col - 1] = true;
            D2[lin + col] = true;
            col_q[col] = true;
            printf("%d %s\n", N,"?");
            if ( N_queens( lin + 1, N - 1) ) return true;
            else
            {
                D1[P - lin + col - 1] = false;
                D2[lin + col] = false;
                col_q[col] = false;
            }
        }
    }
    return false;
}

int main()
{
    if ( P != 0 )
    {
        D1 = (bool*) malloc(sizeof(bool)*(2*P-1));
        D2 = (bool*) malloc(sizeof(bool)*(2*P-1));
        col_q = (bool*) malloc(sizeof(bool)*P);

        memset(col_q, false, P);
        memset(D1, false, 2*P - 1);
        memset(D2, false, 2*P - 1);
    }
    if(N_queens(0,P) == true) cout << "YES" << endl;
}
