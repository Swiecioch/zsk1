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
		
		Car(int, string, string, string, unsigned short int, float, Date);
};

void Car::getData(){
	
	cout <<  "Id: " << id << "\nMarka: " << brand << "\nModel: " << model <<
	"\nData produkcji: " << dateOfProduction.yyyy << "\nMoc: " << horsePower <<"\nKolor: " 
	<< color << "\nCena: " << price;
	
};

Car::Car(int pId, string pBrand, string pModel, string pColor, unsigned short int phorsePower
		float pPrice, Date dateOfProduction){
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
	Car ferrari;
	ferrari.getData();
	
	return 0;
}
