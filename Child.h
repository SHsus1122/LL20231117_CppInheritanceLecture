#pragma once
#include "Parent.h"

class FChild : public FParent
{
public:
	FChild();
	virtual ~FChild();

	// GrandChild ���� �ڽ� ���� �θ��̱� ������ virtual �� ������ݴϴ�.
	// ���� virtual ���� override �� ������ݴϴ�.
	virtual void WhoamI() override;
};