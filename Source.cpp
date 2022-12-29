#include <iostream>
#include<iomanip>
#include <Windows.h>
#include <map> 
#include <string>
#include <vector>
using namespace std;
template<class container> void Show(container col)
{

	for (auto i = col.begin(); i != col.end(); ++i)
	{
		cout << i->first << ": ";
		for (int j = 0; j < i->second.size(); j++)
		{
			cout << i->second[j] << " ";
		}
		cout << endl << endl;
	}
	cout << endl << endl;
}
void main()
{
	map<string, vector<string>> countries;
	string country, city;
	vector <string>_Russia{ "Moscow", "Novgorod", "Kransoyarsk", "Irkutsk" };
	vector<string> _USA{ "Washington","New_York", "Miami", "Los_Angeles",  "Pittsburgh" };
	vector<string>_Germany{ "Berlin", "Aachen", "Munchen", "Koln", "Frankfurt" };
	vector<string>_England{ "London", "Liverpool", "Manchester", "Oxford", "York" };
	vector<string>_Italy{ "Rome", "Milan", "Treviso","Napoly", "Verona" };
	countries.insert(pair<string, vector<string>>("Russia", _Russia));
	countries.insert(pair<string, vector<string>>("USA", _USA));
	countries.insert(pair<string, vector<string>>("Germany", _Germany));
	countries.insert(pair<string, vector<string>>("England", _England));
	countries.insert(pair<string, vector<string>>("Italy", _Italy));
	map<string, vector<string>>::iterator it;
	it = countries.begin();
	int size;

	Show(countries);
	cout << "Enter the country to see its capital" << endl;
	cin >> country;
	cout << endl;


	for (; it != countries.end(); it++)
	{
		if (it->first == country) cout << "The capital of " << country << " is " << it->second[0];
	}
	cout << endl << endl;
	cout << "Enter the city to see the country" << endl;
	cin >> city;
	for (it = countries.begin(); it != countries.end(); it++)
	{
		size = it->second.size();
		for (int i = 0; i < size; i++)
		{
			if (it->second[i] == city) cout << "The country where " << city << " located is " << it->first;
		}

	}
}

