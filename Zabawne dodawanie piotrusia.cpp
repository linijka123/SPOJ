#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void czyPalindrom(int _liczba,int _licznik)
{
	string str = to_string(_liczba);
	string str_reverse = to_string(_liczba);
	reverse(str_reverse.begin(), str_reverse.end());
	if (str == str_reverse) cout << str << " " << _licznik <<endl;
	else if (!(str == str_reverse))
	{
		int x = atoi(str.c_str()); int y = atoi(str_reverse.c_str());
		x += y;
		_licznik++;
		czyPalindrom(_liczba+y,_licznik);		
	}
}
int main()
{
	int testy = 0,liczba=0,licznik=0;
	cin >> testy;
	for (int i = 0; i < testy; i++)
	{
		cin >> liczba;
		czyPalindrom(liczba,licznik);
			
		
	}
}