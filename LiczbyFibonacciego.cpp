#include<bits/stdc++.h>
# define MM 1000000007
using namespace std;
long long M[2][2];
long long X[2][2];


void pomnozMacierz(long long y[2][2],long long x[2][2],long long z[2][2])
{
    long long W[2][2];
    W[0][0] = ((x[0][0] * z[0][0]) + (x[0][1] * z[1][0])) % MM;
    W[0][1] = ((x[0][0] * z[0][1]) + (x[0][1] * z[1][1])) % MM;
    W[1][0] = ((x[1][0] * z[0][0]) + (x[1][1] * z[1][0])) % MM;
    W[1][1] = ((x[1][0] * z[0][1]) + (x[1][1] * z[1][1])) % MM;

    y[0][0] = (W[0][0]) % MM;
    y[0][1] = (W[0][1]) % MM;
    y[1][0] = (W[1][0]) % MM;
    y[1][1] = (W[1][1]) % MM;

    return;
}
long long podniescMacierz(long long n)
{

    long long M[2][2] = {{1,1},{1,0}};
    long long X[2][2] = {{1,0},{0,0}};
    --n;
    while(n > 0)
    {
        if(n%2==1)
            pomnozMacierz(X,X,M);

        n/=2;
        pomnozMacierz(M,M,M);
    }
    return X[0][0];
}
long long Fibonacci(long long  n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(n==2)
        return 2;

    return podniescMacierz(n);

}
int main()
{

    int  t=0 , f=0;
    cin >> t;
    for( int i=0; i<t; i++)
    {
        cin >> f;
        cout<<Fibonacci(f)<<endl;


    }

    return 0;
}
