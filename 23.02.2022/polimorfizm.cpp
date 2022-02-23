#include <iostream>
using namespace std;

class Vehicle{
	public:
		void stop(){
			cout << "Zatrzymaj pojazd";
		}
		
				
};

class Car : public Vehicle{
	public:
		void stop(){
			cout << "Zatrzymaj pojazd";
		}
};

class Bike : public Vehicle{
	public:
		void stop(){
			cout << "\nZatrzymaj rower";
		}
};

class Rolls : public Vehicle{
	public:
		void stop(){
			cout << "\nZatrzymaj rolki";
		}
};

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Vehicle *pojazd = new Vehicle();
	pojazd -> stop();
	
	Rolls *rolki = new Rolls();
	rolki -> stop();
	return 0;
}
