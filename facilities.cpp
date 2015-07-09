//Program to calculate costs for monthly facility cultures
//Author: Janice Love
//Date: 9 July 2015
//Update: 9 July 2015

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "functions.h"

using namespace std;

//Facilities
double taub;
double TMF;
double TCH;
double Neuro;
double VA;
double CNRF;
double ABBR;
double NRI;
double pharm;

//NOTE: swabs price in functions.cpp is calculated on per envelope (2ct.) basis


int main ()
{
	ofstream myFile;
	myFile.open("facilityCultures_cost.txt");

	double labor = techTime();
	double plates = costRODAC ();
	double sporeVials = gentige ();
	double gloves = (boxGloves () * 2);
	double swabs = twoSwabs ();

	//Taub facility
	taub = labor + (plates * 26) + (sporeVials * 5) + gloves + (swabs * 8);

	//TMF facility
	TMF = labor + (plates * 12) + (sporeVials * 15) + gloves + (swabs * 6);

	//TCH facility
	TCH = labor + (plates * 12) + (sporeVials * 10) + gloves + (swabs * 4);

	//Neuro facility
	Neuro = labor + (plates * 34) + /* no spore vials*/ gloves + (swabs * 4);

	//VA facility
	VA = labor + (plates * 10) + (sporeVials * 10) + gloves + (swabs * 4);

	//CNRF facility
	CNRF = labor + (plates * 22) + (sporeVials * 10) + gloves + (swabs * 4);

	//ABBR facility
	ABBR = labor + (plates * 12) + (sporeVials * 15) + gloves + (swabs * 4);

	//NRI facility
	NRI = labor + (plates * 12) + (sporeVials * 10) + gloves + (swabs * 6);

	//misc
	double singlePlate = (labor / 2) + plates; 
	double twoVials = (labor / 2) + (sporeVials * 2); 

	myFile << setprecision(4);
	myFile << " FACILITY CULTURES:" << endl;
	myFile << endl;
	myFile << "TAUB: $ " << taub << endl;
	myFile << "TMF: $ " << TMF << endl;
	myFile << "TCH: $ " << TCH << endl;
	myFile << "NEURO: $ " << Neuro << endl;
	myFile << "VA: $ " << VA << endl;
	myFile << "CNRF: $ " << CNRF << endl;
	myFile << "ABBR: $ " << ABBR << endl;
	myFile << "NRI: $ " << NRI << endl;
	myFile << "Individual RODAC plate: $ " << singlePlate << endl;
	myFile << "Set of two spore vials: $ " << twoVials << endl;
	myFile << endl;



	myFile.close();



	return 0;
}
