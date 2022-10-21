#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    if(t<=2)
    {
        if(t==0)
        {
            cout<< "0"<<endl;
        }
        else
        {
            cout<< "NIE"<<endl;
        }
    }
    else
    {
        int tab[t];
        for( int i=0; i<t+1; i++)
        {
            tab[i]=i;
        }
        for( int i=1; i<t+1; i=i+2)
        {
            cout<<tab[i]<< ' ';
        }
        for( int i=0; i<t+1; i=i+2)
        {
            cout<<tab[i]<< ' ';
        }
    }


}
