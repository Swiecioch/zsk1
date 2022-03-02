#include <iostream> 

class Character{
	public:
		virtual void go() = 0;
};

class Human : public Character{
	public:
		void go(){
			std::cout << "Cz³owiek idzie\n";
		};
};

class Bear : public Character{
	public:
		void go(){
			std::cout << "NiedŸwiedŸ idzie\n";
		}
};


int main(){
	setlocale(LC_CTYPE, "polish");
//		Character postac;

		Human czlowiek;
		czlowiek.go();
		
		Character *wsk = &czlowiek;
		wsk -> go();
		
		Bear niedzwiedz;
		wsk = &niedzwiedz;
		wsk -> go();
	return 0;
}
