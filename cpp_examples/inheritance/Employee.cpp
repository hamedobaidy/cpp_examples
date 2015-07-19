/*
 * Employee.cpp
 *
 *  Created on: Jul 19, 2015
 *      Author: hamed
 */

#include <iostream>

#include "Employee.h"

Employee::Employee() {
	name = "";
	salary = 0;
}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

void Employee::set_name(std::string name) {
	this->name = name;
}

void Employee::set_salary(int salary) {
	this->salary = salary;
}

std::string Employee::get_name() const {
	return name;
}

int Employee::get_salary() const {
	return salary;
}


void Employee::print() const {
	std::cout << "Employee: " << name << std::endl;
}
