// Mittel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	double leistung_ps;
	double leistung_kw;
	string einheit;

	cout << " Moechten Sie (von_kW_nach_PS) oder (von_PS_nach_kW) umrechnen? ";
	cin >> einheit;

	if (einheit == "von_PS_nach_kW" ) {

		cout << "Geben Sie der PS zahl ein: ";
		cin >> leistung_ps;
		leistung_kw = leistung_ps*0.73499;
		cout << "Der Ergebnis: " << leistung_kw;
		
	}
	else {
		cout << "Geben Sie der kW zahl ein: ";
		cin >> leistung_kw;
		leistung_ps = leistung_kw*1.35962;
		cout << "Der Ergebnis: " << leistung_ps;
	}


    return 0;
}

