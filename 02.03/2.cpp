#include <iostream>

class BaseClass{
	public:
		virtual void b(){
			std::cout << "BaseClass::b\n";
		}
};

class ChildClass : public BaseClass{
	public:
		virtual void b(){
			std::cout << "ChildClass::b\n";
		};
		
};

int main(){
	setlocale(LC_CTYPE, "polish");
	
//	BaseClass rodzic;
//	rodzic.b();
	
	ChildClass childClass;
	
	BaseClass *baseClass = &childClass;
	baseClass -> b();
	

	return 0;
}
