#include <iostream>

using namespace std;

template<typename T>
T MinValue(T a, T b)
{
	

	// operator trynarny - przyjmuje 3 parametry
	// [warunek] ? [wynik jezeli true] : [wynik jezeli false]

	return a < b ? a : b;
};

int main()
{

	int a = 10;
	int b = 15;

	cout << MinValue<int>(a, b) << endl;

	return 0;
}