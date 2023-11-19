#include "Parent.h"
#include <iostream>

FParent::FParent()
{
	std::cout << "FParent Constructor" << std::endl;
}

FParent::~FParent()
{
	std::cout << "FParent Destructor" << std::endl;
}

void FParent::Spend()
{
	std::cout << "" << std::endl;
}

// const 를 앞에 쓰면 리턴값을 못 바꾼다는 의미, 뒤에서 쓰면 객체 내부를 바꾸지 않는 다는 의미
int FParent::GetMoney() const
{
	return Money;
}

void FParent::WhoamI()
{
	std::cout << "Parent" << std::endl;
}
