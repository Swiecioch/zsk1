#include <iostream>
using namespace std;

class Animal{
	public:
		static int s_count;
		
		Animal(){
			s_count++;
		}
		
		~Animal(){
		  s_count--;
		}
		
		static void getAmount();
};

int Animal::s_count = 0;

void Animal::getAmount(){
	cout <<"Liczba zwierz¹t: " << Animal::s_count;
}

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Animal tiger;
	Animal filip;	
	Animal piotrek;
	tiger.getAmount();	
	return 0;
}
