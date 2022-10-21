#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    char znak;
    int liczba,liczba2;
    while(cin>>znak)
    {
        cin>>liczba>>liczba2;
        switch(znak)
        {
          case '+':
            {
                cout<<liczba+liczba2<<endl;
                break;
            }
          case '-':
            {
                cout<<liczba-liczba2<<endl;
                break;
            }
          case '*':
            {
                cout<<liczba*liczba2<<endl;
                break;
            }
          case '/':
            {
                cout<<liczba/liczba2<<endl;
                break;
            }
          case '%':
            {
                cout<<liczba%liczba2<<endl;
                break;
            }
        }


    }


}


