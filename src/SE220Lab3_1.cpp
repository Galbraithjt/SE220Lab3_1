//============================================================================
// Name        : SE220Lab3_1.cpp
// Author      : Joshua Galbraith
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

int main()
{
	Package p("Lois Lane", "510 31st Street", "Metropolis", "DC", "51384", "Kent Clark",
			"870 60th Street", "Metropolis", "DC", "51384", 5, 1.25);

	cout << fixed << setprecision(2);

	p.print();

	TwoDayPackage tP("Tony Stark", "8729 425th Avenue", "New York", "NY", "78351", "Wade Wilson",
			"4516 60th Street", "New York", "NY", "74623", 5, 1.25, 3);

	tP.print();

	OvernightPackage oP("Steve Rogers", "812 4th Street", "New York", "NY", "74362", "Peter Parker",
			"4252 10th Street", "New York", "NY", "74582", 5, 1.25, 1.50);

	oP.print();
}
