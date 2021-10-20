#include <iostream>
using namespace std;

struct Date{
	
	int dd, mm, yyyy;
	
	
};

class Car{
	public:
		int id= 10;
		string brand ="BMW";
		string model ="M4 GTS";
		string color;
		unsigned short int horsePower;
		float price;
		Date dateOfProduction;
	
		void getData();
		
		Car(){
			
		};
		
		Car(int id);
		
		Car(int id, string brand, string model);
		
		
};

void Car::getData(){
	
	cout <<  "Id: " << id << "\nMarka: " << brand << "\nModel: " << model << endl;
	
	};
Car::Car(int pId){
	id = pId;
}
Car::Car(int pId, string pBrand, string pModel){
	
	id= pId;
	brand=pBrand;
	model=pModel;

}


	
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Car ferrari(8, "Ferrari", "F430");
	ferrari.getData();
	
	Car opel(9, "Opel", "Tigra");
	opel.getData();
	
	Car bmw;
	bmw.getData();
	

	
	
	return 0;
}
