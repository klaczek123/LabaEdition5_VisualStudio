#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

using namespace std;


enum Damage
{
	Fire,
	Water
};

int main()
{
	
	map<string, int> Ages; // dostep -> O(logn
	unordered_map<Damage, float> Damage; // dostep -> 0(1)

	// dodawanie wartosci
	Ages["Vladimir"] = 70;
	Ages["Elon"] = 50;
	Ages["Donald"] = 80;

	// odczyt z mapy
	cout << "Donald is " << Ages["Donald"] << "years old." << endl;
	Ages["Donald"] = 82;

	cout << "Donald is " << Ages["Donald"] << "years old." << endl;

	// iteracja po mapie 
	for (auto it = Ages.begin(); it != Ages.end(); ++it)
	{
		cout << it->first << ": " << it->second << endl;
	}

	// sprawedzanie czy klucz istnieje w mapie
	if (Ages.find("Donald") != Ages.end()) // zamiast nawiasow kwadratowych uzywamy .find()
	{
		cout << "Donald is in the map" << endl;
	}
	else
	{
		cout << "brak Donalda" << endl;
	}

	// akutalizacja pozycji w mapie
	auto it = Ages.find("Donald");
	if (it != Ages.end())
	{
		it->second = 90;
	}

	return 0;
}