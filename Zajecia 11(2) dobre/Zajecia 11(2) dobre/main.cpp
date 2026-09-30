#include <iostream>

using namespace std;

// enumerator bez zasiegu
enum DamageType
{
	Fire,
	Water,
	Electric,
	Toxic,
	Dark,
	Ice,
	Steel,
	Earth,
	Forest,
	Light,

	DamageTypeNum
};

// enumerator z zasiegiem
enum class Elements
{
	Water,
	Fire,
	Earth,
	Air
};

struct Damage
{
	int value = 0;
	DamageType type;


};

void ApplyDamage(Damage damage)
{
	switch (damage.type)
	{
		case Fire:
			cout << "damage by fire " << damage.value << endl;
			break;
		case Toxic:
			cout << "damage by Toxic " << damage.value << endl;
			break;
		default:
			cout << "unknown damage" << damage.value<< endl;
		
	}
}

void PrintAllDamageTypes()
{
	for (int i = 0; i < DamageTypeNum; ++i)
	{
		cout << i << endl;
	}

}

int main()
{

	Damage damage(100, Water);
	
	Elements element =Elements:: Water;


	damage.type = Toxic;
	cout << Toxic << endl;
	ApplyDamage(damage);
	
	PrintAllDamageTypes();
	return 0;
}