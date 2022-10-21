#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> kolejka;
	string komenda;
	int liczba;
	while (cin >> komenda)
	{
		if (komenda == "Print")
		{
			if (kolejka.size() == 0)
			{
				cout << "Print: Queue is empty" << endl;
			}
			else 
			{
				cout << "Print: ";
				for (int i = 0; i < kolejka.size(); i++)
				{
					cout << kolejka[i] << " ";
				}
			}
		}
		else if (komenda == "Dequeue")
		{
			if (kolejka.size() == 0)
			{
				cout << "Error: queue is empty" << endl;
			}
			else
			{
				cout << kolejka[0] << endl;
				kolejka.erase(kolejka.begin());
			}
		
		}
		else
		{
			cin >> liczba;
		}		
		if (komenda == "Enqueue")
		{	
			if (kolejka.size() == 10)
			{
				cout << "Error: queue is full" << endl;
			}
			else
			{
				kolejka.push_back(liczba);
				cout << "--->" << endl;
			}
		}

	}
}