//============================================================================
// Name        : U-AT-13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x, y, aux;

	cout<<"Ingrese el valor de x: ";cin>>x;
	cout<<"Ingrese el valor de y; ";cin>>y;

	aux=x;
	x=y;
	y=aux;

	cout<<"el valor de x es: "<<x<<endl;
	cout<<"el valor de y es: "<<y<<endl;

	return 0;
}
