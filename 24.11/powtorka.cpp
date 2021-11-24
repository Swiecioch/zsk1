#include <iostream>
using namespace std;

class Car{
	public:
		string brand;
		string model;
		string color;
		int year;
		float price;
		
		Car(){
			cout << "Wywo³ano konstruktor domyœlny" << endl;
		}
		Car(string pBrand, string pModel, int pYear);
		Car(string pBrand, string pModel, string pColor, int pYear, float pPrice);
		~Car(){
			cout << "\nDestruktor zosta³ wywo³any" << endl;
		}
		
			
		void showData();
	
	
	
	
};

Car::Car(string pBrand, string pModel, int pYear){
	brand = pBrand;
	model = pModel;
	year = pYear;
}
Car::Car(string pBrand, string pModel, string pColor, int pYear, float pPrice){
	brand = pBrand;
	model = pModel;
	color = pColor;
	year = pYear;
	price = pPrice;
}

void createObject(){
	Car car;
}

void Car::showData(){
	cout << "Marka: " << brand << "\nModel : " << model <<
	"\nKolor: " << color << "\nRok produkcji: " << year << "\nCena: " << price << endl;
}


int main(){
	setlocale(LC_CTYPE, "polish");
	
	Car Fiat = Car("Fiat", "Multipla","Szary", 2000, 2000.99);
	
	
	Car* auto1 = &Fiat;
	auto1->price = 1900;
	Fiat.showData();
	
	createObject();
	
	return 0;
}
