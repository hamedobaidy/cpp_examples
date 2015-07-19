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

	void set_name(std::string);
	std::string get_name() const;

	void set_salary(int);
	int get_salary() const;

	virtual void print() const;

private:
	std::string name;
	int salary;
};

#endif /* EMPLOYEE_H_ */
