#include <iostream>
#include <stack>
#include <cmath>
#include <sstream>
using namespace std;

template<typename T>
string to_string(const T& obj)
{
    stringstream ss;
    ss<<obj;
    return ss.str();
}
string toEleven(int liczba)
{
    string _liczba="";
    int temp;
    int reszta=liczba;
    for(int i=5;i>=0;i--)
    {
        temp=reszta/pow(11,i);
        if(temp>0 || _liczba!="")
        {
            if(temp<10)
            {
                _liczba+=to_string(temp);
            }
            else
            {
                _liczba+='A';
            }
        }
        reszta=reszta-(temp*pow(11,i));
    }
    return _liczba;
}
void hex(int a)
{
    int result = 1;
    stack <int> numberStack;
    char digits[] = "0123456789ABCDEF";
    while (a){
        result = a % 16;
        numberStack.push(result);
        a /= 16;
    }
    while (numberStack.empty() == false){
        if (numberStack.top() == 10){
            cout << digits[10]<< "";
            numberStack.pop();
        }
        else if (numberStack.top() == 11){
            cout << digits[11]<< "";
            numberStack.pop();
        }
        else if (numberStack.top() == 12){
            cout << digits[12]<< "";
            numberStack.pop();
        }
        else if (numberStack.top() == 13){
            cout << digits[13]<< "";
            numberStack.pop();
        }
        else if (numberStack.top() == 14){
            cout << digits[14]<< "";
            numberStack.pop();
        }
        else if (numberStack.top() == 15){
            cout << digits[15]<< "";
            numberStack.pop();
        }
        else if (numberStack.top()){
            cout << numberStack.top()<< "";
            numberStack.pop();
        }
        else if (numberStack.top()==0){
            cout << numberStack.top()<< "";
            numberStack.pop();
        }
    }
}
int main()
{
    int test, n = 0;
    cin >> test;
    for (int i = 0; i < test; i++){
            cin >> n;
            if (n == 0)
                cout << "0 0" << endl;
            hex(n);
            cout << ' ';
            cout<<toEleven(n)<<endl;

    }
}
