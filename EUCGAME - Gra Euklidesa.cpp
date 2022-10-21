#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{

   int t=0,a=0,b=0;
   cin>>t;
   for(int i=0; i<t; i++)
   {
       cin>>a>>b;
       while(a!=b)
       {
            if(a>b)
            {
               a-=b;
            }
            else
            {
                b-=a;
            }

        }
        cout<<a*2<<'\n';

    }

}
