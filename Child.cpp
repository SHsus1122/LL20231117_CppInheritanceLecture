#include "Child.h"
#include <iostream>

FChild::FChild()
{
	std::cout << "FChild Constructor" << std::endl;

}

FChild::~FChild()
{
	std::cout << "FChild Denstructor" << std::endl;

}

void FChild::WhoamI()
{
	std::cout << "Child" << std::endl;
}
