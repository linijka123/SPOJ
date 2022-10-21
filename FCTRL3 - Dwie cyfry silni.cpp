#include <iostream>

using namespace std;
int silnia(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*silnia(n-1);
    }
}
int d=0,n=0;
int main()
{


    cin>>d;
    for( int i=0; i<d; i++)
    {
         cin>>n;
         if(n<10)
         {
             cout<<silnia(n)%100/10<<' '<<silnia(n)%10<<endl;
         }
         else
         {
             cout<< "0 0"<<endl;
         }
    }
}



