#include <iostream>

using namespace std;


void Initialize();

void GetInput();
void Update();
void Render();

void Shutdown();


int main()
{

	cout << "Hello" << endl;

	Initialize();

	while (true)
	{
		GetInput();
		Update();
		Render();
	}

	Shutdown();


	return 0;
}

void Initialize()
{
	cout << "Initialize" << endl;
}

void GetInput()
{
	cout << "GetInput" << endl;
}
void Update()
{
	cout << "Update" << endl;
}
void Render()
{
	cout << "Render" << endl;
}

void Shutdown()
{
	cout << "Shutdown" << endl;
}