#include <iostream>
using namespace std;

struct Date{
	
	int dd, mm, yyyy;
	
	
};

class Car{
	public:
		
		string brand;
		string model;
	
	
		void getData();
		
	
		Car(int pId=13, string pBrand="BMW" , string pModel="M4 GTS");
		
		
};

void Car::getData(){
	
	cout << "\nMarka: " << brand << "\nModel: " << model << endl;
	
	};



	
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Car BMW;
	BMW.getData();	
	

	
	
	return 0;
}
