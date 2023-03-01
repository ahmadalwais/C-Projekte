// Arbeitsauftrag 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"iostream"
#include"string"
using namespace std;

int main()
{
	string name;
	char geschlecht;
	int fahrstunden;
	bool bestanden;
	double gebuehren;



	cout << "Geben Sie Ihren Name ein: ";
	cin >> name;
	cout << "Bitte Geschlecht eingeben: ";
	cin >> geschlecht;
	cout << "Bitte die Fahrstunden eingebe: ";
	cin >> fahrstunden;
	cout << "Haben Sie den Theoriepruefung bestanden: ";
	cin >> bestanden;
	cout << "Bitte die Gezahlte gebuehren eingeben: ";
	cin >> gebuehren;



	cout << endl << endl << endl << endl;

	cout << "Name: " << name << endl;
	if (geschlecht != 'M' && geschlecht != 'W'){ 
		cout <<"Geschlecht: "<< geschlecht << "Ungueltige Wert."<<endl;
	}
	else if (geschlecht == 'M') {
		cout << "Geschlecht: " << geschlecht << "Maennlich."<<endl;
	}
	else  {
		cout << "Geschlecht: " << geschlecht << "Weiblich."<<endl;
	}
	if (fahrstunden>0)	{
		cout << "Anzahl der Fahrstunden: " << fahrstunden << endl;
	}
	else  {
		cout << "Anzahl der Fahrstunden: " << fahrstunden << "Ungueltige Wert." << endl;
	}
	if ( bestanden !=1 && bestanden !=0 )	{
		cout << "Theoriepruefung: " << bestanden << "Ungueltige Wert.";
	}
	else if (bestanden==1)	{
		cout << "Theoriepruefung: " << bestanden << " BESTANDEN." << endl;
	}
	else   {
		cout << "Theoriepruefung: " << bestanden << " NICHT bestanden." << endl;
	}

	if (gebuehren>=0)   {
		cout << "Gezahlte Gebuehren: " << gebuehren<<" EUR" << endl << endl << endl;
	}
	else
	{
		cout << "Gezahlte Gebuehren: " << gebuehren << "Ungueltige Wert." << endl << endl << endl;
	}


	cout << "Programmende.";
    return 0;
}

