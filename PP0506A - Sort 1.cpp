#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int tests=0,points=0,x[100],y[100];
string name[100];

string tmp_nazwa;
double p_1, p_2;
int main()
{

    cin>>tests;
    for(int i=0; i<tests; i++)
    {
        cin>>points;
        for( int i=0; i<points; i++)
        {
            cin>>name[i]>>x[i]>>y[i];

        }
        for( int i=0; i<points; i++)
        {
            for( int j=0; j<points-1; j++)
            {

                p_1 = sqrt(x[j] * x[j] + y[j] * y[j]);
                p_2 = sqrt(x[j + 1] * x[j + 1] + y[j + 1] * y[j + 1]);
                if(p_1 > p_2)
                {
                    int temp;
                    temp=x[j];
                    x[j]=x[j+1];
                    x[j+1]=temp;

                    temp=y[j];
                    y[j]=y[j+1];
                    y[j+1]=temp;

                    tmp_nazwa=name[j];
                    name[j]=name[j+1];
                    name[j+1]=tmp_nazwa;

                }
            }
        }
        for( int i=0; i<points; i++)
        {
            cout<<name[i]<<" "<<x[i]<<" "<<y[i];
            cout<<endl;
        }
    }
}
