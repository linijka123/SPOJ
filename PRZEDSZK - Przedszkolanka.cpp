#include <iostream>
#include <cmath>

using namespace std;
int NWD(int  a,int  b)
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
    int dane=0,a=0,b=0,suma=0;
    cin>>dane;
    for( int i=0; i<dane; i++)
    {
        cin>>a>>b;
        cout<<a/NWD(a,b)*b<<endl;
    }


}
