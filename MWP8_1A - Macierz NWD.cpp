#include<iostream>
using namespace std;
int nwd(int a,int b)
{
    int pom;

	while(b!=0)
    {
		pom = b;
		b = a%b;
		a = pom;
	}

    return a;
}
int main()
{
    int t = 0;
    cin >> t;
    int * tab = new int[t];
    for( int i=0; i<t; i++){
        cin >> tab[i];

    }
    for( int k=0; k<t; k++)
    {
            cout<<endl;
            for( int j=0; j<t; j++)
            {
               cout<<nwd(tab[k],tab[j]) << " ";
            }
    }


    return 0;
}

