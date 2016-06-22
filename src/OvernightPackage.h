/*
 * OvernightPackage.h
 *
 *  Created on: Jun 21, 2016
 *      Author: soaler
 */

#ifndef OVERNIGHTPACKAGE_H_
#define OVERNIGHTPACKAGE_H_
#include <string>
#include "Package.h"

class OvernightPackage : public Package
{
public:
	OvernightPackage(const std::string &, const std::string &, const std::string &,
			const std::string &, const std::string &,const std::string &, const std::string &,
			const std::string &, const std::string &,const std::string &, double = 0.0,
			double = 0.0, double = 0.0);

	void setOvernightCostPerOunce( double ); // set additional Overnight cost per ounce
	double getOvernightCostPerOunce() const; // get additional Overnight cost per ounce

	double calculateCost() const; // calculate cost additional Overnight cost per ounce
	void print() const;//print overnight package info

private:
	double overnightCostPerOunce; // additional Overnight cost per ounce
};

#endif
