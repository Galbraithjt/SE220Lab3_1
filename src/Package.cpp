/*
 * Package.cpp
 *
 *  Created on: Jun 21, 2016
 *      Author: soaler
 */

#include <iostream>
#include <stdexcept>
#include "Package.h"
using namespace std;

//constructor
Package::Package( const string &nS, const string &aS, const string &cS, const string &sS,
		const string &zS, const string &nR, const string &aR, const string &cR, const string &sR,
		const string &zR, double wght, double cpo)
{ // start Package Constructor
	nameS = nS;
	addressS = aS;
	cityS = cS;
	stateS = sS;
	zipCodeS = zS;
	nameR = nR;
	addressR = aR;
	cityR = cR;
	stateR = sR;
	zipCodeR = zR;
	setWeight( wght );
	setCostPerOunce( cpo );
} // end Package Constructor

//SETTERS AND GETTERS
void Package::setNameS( const string &nS)
{
	nameS = nS;
}
string Package::getNameS() const
{
	return nameS;
}

void Package::setAddressS( const string &aS)
{
	addressS = aS;
}
string Package::getAddressS() const
{
	return addressS;
}

void Package::setCityS( const string &cS)
{
	cityS = cS;
}
string Package::getCityS() const
{
	return cityS;
}

void Package::setStateS( const string &sS)
{
	stateS = sS;
}
string Package::getStateS() const
{
	return stateS;
}

void Package::setZipCodeS( const string &zS)
{
	zipCodeS = zS;
}
string Package::getZipCodeS() const
{
	return zipCodeS;
}

void Package::setNameR( const string &nR)
{
	nameR = nR;
}
string Package::getNameR() const
{
	return nameR;
}

void Package::setAddressR( const string &aR)
{
	addressR = aR;
}
string Package::getAddressR() const
{
	return addressR;
}

void Package::setCityR( const string &cR)
{
	cityR = cR;
}
string Package::getCityR() const
{
	return cityR;
}

void Package::setStateR( const string &sR)
{
	stateR = sR;
}
string Package::getStateR() const
{
	return stateR;
}

void Package::setZipCodeR( const string &zR)
{
	zipCodeR = zR;
}
string Package::getZipCodeR() const
{
	return zipCodeR;
}

void Package::setWeight( double wght )
{
	if ( wght >= 0.0)
	{
		weight = wght;
	}
	else
	{
		throw invalid_argument("Weight must be greater than or equal to 0.0");
	}
}

double Package::getWeight() const
{
	return weight;
}

void Package::setCostPerOunce( double cpo )
{
	if ( cpo >= 0.0)
	{
		costPerOunce = cpo;
	}
	else
	{
		throw invalid_argument("Cost Per Ounce must be greater than or equal to 0.0");
	}
}

double Package::getCostPerOunce()  const
{
	return costPerOunce;
}

double Package::calculateCost() const
{
	return weight * costPerOunce;
}

void Package::print() const
{
	cout << "\n\n Sender's Name \t\t\t" << nameS <<
			"\n Sender's Address \t\t" << addressS <<
			"\n Sender's City \t\t\t" << cityS <<
			"\n Sender's State \t\t" << stateS <<
			"\n Sender's Zip Code \t\t" << zipCodeS <<
			"\n Reciever's Name \t\t" << nameR <<
			"\n Reciever's Address \t\t" << addressR <<
			"\n Reciever's City \t\t" << cityR <<
			"\n Reciever's State \t\t" << stateR <<
			"\n Reciever's Zip Code \t\t" << zipCodeR <<
			"\n Package weight in ounces is \t" << weight <<
			"\n Cost Per Ounce is \t\t" << costPerOunce <<
			"\n Total is \t\t\t" << calculateCost();
}

void Package::printTotal() const
{
	cout << "\n Total is \t\t\t" << calculateCost();
}

