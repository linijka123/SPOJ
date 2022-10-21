#include<iostream>
#include <cstdio>
using namespace std;

int main()
{

    char znak[5];
    for( int i=0; i<5; i++)
    {
        znak[i]=getchar();
    }
    if(znak[1]==znak[4])
    {
        cout<<"TAK";
    }
    else if(znak[0]==znak[3])
    {
        cout<< "TAK";
    }
    else
    {
        cout<< "NIE";
    }

}
`