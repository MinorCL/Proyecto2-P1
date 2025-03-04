#include "Category.h"

int Category::type()
{
	int n;
	cout << "Ingrese el tipo de categoria: ";
	cout << "Categorias: " << endl;
	cout << "1. AI-19" << endl;
	cout << "2. AI-20" << endl;
	cout << "3. BO-73" << endl;
	cout << "4. ANT-1" << endl;
	cin >> n;
	return n;


}
