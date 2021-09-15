#include <iostream>
using namespace std;

class Rectangle{
	
	public:
		float a;
		float b;
		
		float calculateField();
		float calculateCircuit();
		void displayData();
		



};


	float Rectangle::calculateCircuit(){
		return a*2+b*2;
	}
	float Rectangle::calculateField(){
		return a*b;
	}
	void Rectangle::displayData(){
		cout << "Pole to : " << calculateField() <<endl;
		cout << "Obwod to : " << calculateCircuit() <<endl;
		cout << "Bok a : " << a << " Bok b : " << b << endl;
		
	}

	



int main(int argc, char** argv) {
	
	
	Rectangle rectangle;
	
	cout << "\nPodaj dlugosc a" << endl;
	cin >> rectangle.a;
	
	cout << "\nPodaj dlugosc b" << endl;
	cin >> rectangle.b;
	

	rectangle.displayData();
	
	return 0;
}
