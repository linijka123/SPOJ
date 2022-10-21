#include <iostream>

using namespace std;

int main()
{
    long long  a=0,b=0,licz,suma=0,suma2=0;
    while(cin>>a)
    {
        suma=a+suma;
        if(a==0)
        {
            cout<<suma<< '\n';
            suma2=suma+suma2;
            suma=0;

        }


    }
    cout<<suma2<<endl;
    return 0;

}


