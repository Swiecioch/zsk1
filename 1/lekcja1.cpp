#include <iostream>
using namespace std;

class Worker{
	public:
	// deklaracja zmiennych cz�onkowskich (w�a�ciwo�ci)
	string name="Janusz";
	string surname;
	
	// deklaracja funkcji cz�onkowskiej (metoda)
	void showData(){
		cout << "Imi�";
	};
	
	
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker pracownik;
	
	cout << pracownik.name;
	pracownik.showData();
	return 0;
}
