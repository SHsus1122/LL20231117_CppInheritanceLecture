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

// const �� �տ� ���� ���ϰ��� �� �ٲ۴ٴ� �ǹ�, �ڿ��� ���� ��ü ���θ� �ٲ��� �ʴ� �ٴ� �ǹ�
int FParent::GetMoney() const
{
	return Money;
}

void FParent::WhoamI()
{
	std::cout << "Parent" << std::endl;
}
