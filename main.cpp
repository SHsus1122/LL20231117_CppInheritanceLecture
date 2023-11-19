#include <iostream>
#include "Parent.h"
#include "Child.h"
#include "GrandChild.h"
#include <vector>

using namespace std;

int main()
{
	//FChild* MyChild = new FChild();
	//delete MyChild;

	//FParent* P = new FParent();
	//cout << P << endl;



	//FParent* MyChild = new FChild();
	//delete MyChild;
	// 부모 생성 자식 생성 그런데
	// 상속시 virtual 사용하는 이유 이 위의 코드 처럼 부모를 포인터로 자식을 생성하게 되면,
	// 자식의 소멸자를 호출 시 처음 생성 시 부모가 포인터이기 때문에 자식을 찾지 않고 부모만 삭제하게 됩니다.
	// 즉, 자식은 삭제되지 않고 살아남게 되는겁니다.
	// 그래서 항상 소멸자에는 virtual 을 붙여줘야 합니다.
	// 그렇게 하면 자식까지 다 찾아들어가서 삭제해주기 때문에 가상 함수는 항상 소멸자에는 적용하도록 합시다
	
	// 결과창
	 //FParent Constructor
	 //FChild Constructor
	 //FParent Destructor

	vector<FParent*> Family;
	Family.push_back(new FParent());
	Family.push_back(new FChild());
	Family.push_back(new FChild());
	Family.push_back(new FGrandChild());
	Family.push_back(new FGrandChild());
	Family.push_back(new FGrandChild());

	for (int i = 0; i < Family.size(); i++)
	{
		Family[i]->WhoamI();
		// 정확하냐? 유효하냐?, Is_Valid
		//dynamic_cast<FGrandChild*>(Family[i]); // 바뀔수도 안 바뀔수도 있다 그러면 null이 발생
		// dynamic_cast 형변환 입니다. 그런데 이는 성능이 좋지 않아서 잘 사용 안합니다.
		// 이러한 과정을 다운캐스팅 이라고 합니다. 자식을 아래로 내리기 때문입니다.
		FGrandChild* GrandChild = dynamic_cast<FGrandChild*>(Family[i]);
		if (GrandChild != nullptr)
		{
			GrandChild->PlayGround();
		}
	}

	//for (int i = 0; i < Family.size(); i++)
	//{
	//	delete Family[i];
	//}


	cout << "*********" << endl;
	cout << "*P      *" << endl;
	cout << "*       *" << endl;
	cout << "*    M  *" << endl;
	cout << "*       *" << endl;
	cout << "*       *" << endl;
	cout << "*      G*" << endl;
	cout << "*********" << endl;
	return 0;
}