#pragma once
class FParent
{
public:
	FParent();
	virtual ~FParent();

	void Spend();

	int GetMoney() const;

	virtual void WhoamI();

protected:
	int Money = 100;
};

