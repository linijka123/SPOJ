#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{

    string nazwa;
    while(getline(cin,nazwa))
    {
        for( int i=0; i<nazwa.length(); i++)
        {
            if(nazwa[i]==32)
            {
                nazwa[i+1]=toupper(nazwa[i+1]);
            }
        }
        for( int i=0; i<nazwa.length(); i++)
        {
            if(nazwa[i]!=32)
            {
                cout<<nazwa[i];
            }

        }
        cout<<endl;

    }


}
