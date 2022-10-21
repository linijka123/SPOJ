
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t,n,tab[101];
    cin>>t;
    for( int i=1; i<=t; i++)
    {
        cin>>n;
        for (int i=1; i<=n; i++)
        {
            cin>>tab[i];
        }
        for (int i=1; i<=n; ++i)
        {


            if(i%2==0)
            {


                cout<<tab[i]<<" ";


            }
        }
        for(int i=1; i<=n; ++i)
        {


            if(i%2!=0)
            {


                cout<<tab[i]<<" ";

            }
        }
        cout<<endl;


    }




}