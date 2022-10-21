
#include <iostream>

using namespace std;

int main( )
{
    int a=0;int licznik=0;bool check=false;
    while (cin>>a) {

         if(a!=42)
         {
             check=true;
             cout<<a<<endl;
         }
         else if(a==42&&check==true)
         {
             licznik++;
             check=false;
             cout<<a<<endl;
             if(licznik==3)
             {
                 break;
             }
         }
         else if(a!=42&&check==true)
         {
             check=true;
             cout<<a<<endl;
         }
         else if(a==42&&check==false)
         {
             cout<<a<<endl;
         }
    }
}
