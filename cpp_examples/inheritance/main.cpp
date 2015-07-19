/*
 * main.cpp
 *
 *  Created on: Jul 19, 2015
 *      Author: hamed
 */

#include <iostream>
#include <cstdlib>

#include "Employee.h"
#include "Manager.h"

int main(int argc, char **argv) {
	Employee employee1;
	employee1.set_name("John Doe");
	employee1.set_salary(10000);
	employee1.print();

	Manager manager1;
	manager1.set_name("Bill");
	manager1.set_salary(20000);
	manager1.print();

	return EXIT_SUCCESS;
}

