#include "GrandChild.h"
#include <iostream>

FGrandChild::FGrandChild()
{
	std::cout << "FGrandChild Constructor" << std::endl;
}

FGrandChild::~FGrandChild()
{
	std::cout << "FGrandChild Destructor" << std::endl;
}

void FGrandChild::WhoamI()
{
	std::cout << "GrandChild" << std::endl;
}

void FGrandChild::PlayGround()
{
}
