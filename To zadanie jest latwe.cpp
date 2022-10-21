#include<iostream>
using namespace std;
int main()
{
    string tab,tab2;
    int tests=0,counter=0;
    cin>>tests;
    for(int i=0; i<tests; i++)
    {
        cin>>tab>>tab2;
        int y = tab2.length();
        int j=0,counter=0;
        for( int i=0; i<tab.length(); i++)
        {
           if(tab[i]==tab2[j])
           {
               j++;
           }
        }
        if(j==y)
         cout<< "Tak"<<endl;
        else
         cout<< "Nie"<<endl;
    }
	return 0;
}
