#include <iostream>
using namespace std;

class Rectangle{
	private:
		 double sideA{0};
		 double sideB{0};
	public:	
		Rectangle();
		Rectangle(double pSideA, double pSideB);
		
		void getSides();
		void setSidesA(double pSideA){
		sideA = pSideA;
			
		};		
};
	
	Rectangle::Rectangle(){}	
	Rectangle::Rectangle(double pSideA, double pSideB){
		sideA = pSideA;
		sideB = pSideB;
	};
	
	void Rectangle::getSides(){
		cout << "Bok a: " << sideA << "\nBok b: " << sideB << endl;
	}
	
	void getSides(double a, double b);

int main(){
	setlocale(LC_CTYPE,"polish");
	double a = 10;
	double b = 20;
	
	Rectangle p1;
//	cout << p1.sideA;

//	p1.getSides();
	p1.setSidesA(10);
	p1.getSides();
	
	
	

	return 0;
}
