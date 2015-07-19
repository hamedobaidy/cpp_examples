/*
 * Employee.h
 *
 *  Created on: Jul 19, 2015
 *      Author: hamed
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>

class Employee {
public:
	Employee();
	virtual ~Employee();

private:
	std::string name;
	int salary;
};

#endif /* EMPLOYEE_H_ */
