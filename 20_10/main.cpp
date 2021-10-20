#include <iostream>
using namespace std;

struct Date{
	
	int dd, mm, yyyy;
	
	
};

class Car{
	public:
		int id;
		string brand;
		string model;
		string color;
		unsigned short int horsePower;
		float price;
		Date dateOfProduction;
	
		void getData();
		
		Car(){
			
		};
		
		Car(int id);
		
		Car(int id, string brand, string model, string color);
		
		Car(int id, string brand, string model, string color, unsigned short int horsePower, float price , Date dateOfProduction);
};

void Car::getData(){
	
	cout <<  "Id: " << id << "\nMarka: " << brand << "\nModel: " << model <<
	"\nData produkcji: " << dateOfProduction.yyyy << "\nMoc: " << horsePower <<"\nKolor: " 
	<< color << "\nCena: " << price;
	
};
Car::Car(int pId){
	id = pId;
}
Car::Car(int pId, string pBrand, string pModel, string pColor){
	
	id= pId;
	brand=pBrand;
	model=pModel;
	color=pColor;
}

Car::Car(int pId, string pBrand, string pModel, string pColor, unsigned short int phorsePower, float pPrice, Date dateOfProduction){
		id = pId;
		brand = pBrand;
		model = pModel;
		color = pColor;
		horsePower = phorsePower;
		price = pPrice;
		dateOfProduction = dateOfProduction;	
		}
	
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Car ferrari(8, "Ferrari", "F430", "Czerwony", 490, 1500000, {13,10,2021});
	ferrari.getData();
	
	Car fiat;
	fiat.getData();	
	
	Car bmw(12, "BMW", "X6", "Czarny");
	bmw.getData();
	
	Car*wsk;
	wsk=&bmw;
	wsk->getData();
	wsk->brand="Jaguar";
	wsk->getData();
	
	
	return 0;
}
