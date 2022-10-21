#include <iostream>
using namespace std;

int main()
{

    char sign;
    int i=0,x=0,tab[10];
    while(cin>>sign)
    {

        switch(sign)
        {
        case '+':
        {
            cin>>i;
            if(x>=10)
            {
                cout<< ":("<< endl;
            }
            else
            {
                tab[x++]=i;
                cout<< ":)"<< endl;
            }
            break;

        }
        case '-':
        {

            if(x<=0)
            {
                cout<< ":("<<endl;
            }
            else
            {
                cout<<tab[--x]<<endl;
            }
            break;

        }
        }



    }
}



