#include <iostream>
using namespace std;

class Rectangle{
	private:
		double sideA;
		double sideB;
	public:
		Rectangle();
		Rectangle(double sideA, double sideB);
		
		//prototyp konstruktora kopiuj¹cego
		Rectangle(const Rectangle &);
};

int main(){
	setlocale(LC_CTYPE,"polish");
	return 0;
}
