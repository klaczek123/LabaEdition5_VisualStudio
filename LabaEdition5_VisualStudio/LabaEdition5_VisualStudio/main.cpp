#include <iostream>

using namespace std;


void Initialize();

void GetInput();
void Update();
void Render();

void Shutdown();

// 1. Preprocesor - analizuje dyrektywe preprocesora (makra) #include, #define itd inne #
// 2. Kompliator  - osobno lda kazdego pliku .cpp -> .obj
// 3. Linker - ³¹czy pliki .obj w jeden plik wykonywalny, linkuje wyniki wszystkich jednostek kompilacji -> .exe 






#define HELLO std:: cout << "hello" << std::endl;
#define PRINTNAME(name)std::cout<<"Your name is: " << name << std::endl;
#define DEBUG_CODE

//#define ORBIS
#define WIN
#define EDITOR


int main()
{
	HELLO
	Initialize();

	PRINTNAME("Kuba")

	//while (true)
	{
		GetInput();
		Update();
		Render();
	}

#ifdef DEBUG_CODE
	std::cout << "Some debug information" << std::endl;
#endif

#ifdef ORBIS
		std::cout << "Some playstation code" << std::endl;
#endif

	Shutdown();
	
	HELLO

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