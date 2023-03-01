// Schwierig.cpp : Definiert den Einstiegs

//

#include "stdafx.h"
#include<iostream>
using  namespace std;


int main()
{
	int jahrzahl;

	cout << "Geben Sie der Jahreszahl ein: ";
	cin >> jahrzahl;

	if (jahrzahl % 400 == 0) 
	{ cout << "Ja Schaltjahr " << jahrzahl; }

	else if (jahrzahl % 100 == 0) 
	{ cout << "Nicht Schaltjahr " << jahrzahl; 
	} else if (jahrzahl % 4 == 0) 
	{ cout << "Ja Schaltjahr " << jahrzahl; 
	} else 
	{ cout << "Nicht Schaltjahr " << jahrzahl; }

    return 0;
}

