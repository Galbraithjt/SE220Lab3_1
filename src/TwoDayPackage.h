/*
 * TwoDayPackage.h
 *
 *  Created on: Jun 21, 2016
 *      Author: soaler
 */

#ifndef TWODAYPACKAGE_H_
#define TWODAYPACKAGE_H_
#include <string>
#include "Package.h"

class TwoDayPackage : public Package
{
public:
	TwoDayPackage(const std::string &, const std::string &, const std::string &,
			const std::string &, const std::string &,const std::string &, const std::string &,
			const std::string &, const std::string &,const std::string &, double = 0.0,
			double = 0.0, double = 0.0); // Two Day Package constructor

	void setTwoDayFlatRate( double ); // set  two day flat rate
	double getTwoDayFlatRate() const; // get two day flat rate

	double calculateCost() const; // calculate cost with flat rate
	void print() const;//print two day package info

private:
	double twoDayFlatRate; // two day flat rate
};

#endif /* TWODAYPACKAGE_H_ */
