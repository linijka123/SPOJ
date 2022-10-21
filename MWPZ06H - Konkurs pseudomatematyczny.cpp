#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
    int tests=0,uczestnicy=0;
    cin>>tests;
    for( int i=0; i<tests; i++)
    {
        cin>>uczestnicy;
        int* tab = new int[uczestnicy];
        for( int i=0; i<uczestnicy; i++)
        {
            cin>>tab[i];

        }
        int maksimum;
        maksimum=tab[0];
        for( int i=0; i<uczestnicy; i++)
        {
             if(maksimum<tab[i])
                maksimum=tab[i];

        }
        cout
        <<maksimum<<" ";
        for( int i=0; i<uczestnicy-1; i++)
        {

            for( int j=0; j<uczestnicy-1; j++)
            {
                 if(tab[j]>tab[j+1])
                  swap(tab[j],tab[j+1]);

            }

        }
        int licz=0;
        for( int i=0; i<uczestnicy; i++)
        {
             if(maksimum==tab[i])
             {
                 licz++;
                 if(licz>=2)
                 {
                     cout<<tab[i]<< " ";

                 }
             }


        }
        if(licz>=2)
        {

            for( int i=0; i<uczestnicy-licz; i++)
            {
                cout<<
                    tab[i]<<" ";
            }
        }
        else
        {
            for( int i=0; i<uczestnicy-1; i++)
            {
                cout<<
                    tab[i]<<" ";

            }
        }


    }
}
