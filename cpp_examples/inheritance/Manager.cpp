/*
 * Manager.cpp
 *
 *  Created on: Jul 19, 2015
 *      Author: hamed
 */

#include <iostream>

#include "Manager.h"

Manager::Manager() {
	// TODO Auto-generated constructor stub

}

Manager::~Manager() {
	// TODO Auto-generated destructor stub
}

void Manager::print() const {
	std::cout << "Manager:" << get_name() << std::endl;
}
