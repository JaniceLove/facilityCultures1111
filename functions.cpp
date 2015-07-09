//functions for facility cultures cost calculation
//Author: Janice Love
//Date: 9 July 2015
//Update: 9 July 2015

#include <string>
#include <iostream>
#include "functions.h"

using namespace std;

double techTime()
{
	double hourlyCost = 23.38; // per CCM
	double timePerHour = (0.25); //approx. 30 minutes to make up packs and take to receiving, read plates
	double timeCost = hourlyCost * timePerHour; 
	return timeCost; 
}

double costRODAC ()
{
	double box = 243.11; //BCM marketplace
	double perBox = 10 * 10; 
	double perPlate = box / perBox;
	return perPlate; //cost per rodac plate
}

double gentige ()
{
	double box = 75.62; //BCM cost, as provided by company rep in email
	double perBox = 50;
	double each = box / perBox;
	return each; //cost per spore vial
}

double boxGloves ()
{
	double box = 25.61; // from BCM marketplace
	double perBox = 50; 
	double perGlove = box / perBox;
	return perGlove;
}

double twoSwabs ()
{
	double box = 78; //from BCM marketplace
	double perBox = 100; 
	double pCase = 10;
	double total = perBox * pCase;
	double price = box / total;
	return price;
}

