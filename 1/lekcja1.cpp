#include <iostream>
using namespace std;

class Worker{
	public:
	// deklaracja zmiennych cz³onkowskich (w³aœciwoœci)
	string name="Janusz";
	string surname;
	
	// deklaracja funkcji cz³onkowskiej (metoda)
	void showData(){
		cout << "Imiê";
	};
	
	
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker pracownik;
	
	cout << pracownik.name;
	pracownik.showData();
	return 0;
}
