/*
 * Manager.h
 *
 *  Created on: Jul 19, 2015
 *      Author: hamed
 */

#ifndef MANAGER_H_
#define MANAGER_H_

#include "Employee.h"

class Manager: public Employee {
public:
	Manager();
	virtual ~Manager();

	virtual void print() const;
};

#endif /* MANAGER_H_ */
