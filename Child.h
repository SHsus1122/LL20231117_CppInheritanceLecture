#pragma once
#include "Parent.h"

class FChild : public FParent
{
public:
	FChild();
	virtual ~FChild();

	// GrandChild 같이 자식 또한 부모이기 때문에 virtual 을 사용해줍니다.
	// 또한 virtual 사용시 override 로 명시해줍니다.
	virtual void WhoamI() override;
};