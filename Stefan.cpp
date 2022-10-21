#include <iostream>

using namespace std;
int main()
{
    int tests=0; long long sum_till_now=0; long long max_sum=0;
    cin>>tests;
    int *tab=new int[tests];

    for( int i=0; i<tests; i++)
    {
         cin>>tab[i];
         sum_till_now+=tab[i];
         if(sum_till_now>max_sum)
         {
             max_sum=sum_till_now;
         }
         if(sum_till_now<0)
         {
             sum_till_now=0;
         }

    }
    cout<<max_sum<<endl;
    delete []tab;

}
