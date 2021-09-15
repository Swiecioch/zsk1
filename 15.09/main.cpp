#include <iostream>
using namespace std;




class Worker{
	//delaracja zmiennych czlonkowskich (wlasciwosci)
	public:
	string name;
	string surname;
	string nationality;
	string personality;
	unsigned short int yearBirthday;
	char gender;
	
	//definicja funkcji czlonkowskiej (metoda)
	void showName(){
		cout << "Imiê" << name;
	};
	
	//deklaracja (prototyp) metody
	void showSurname();
	string showPersonality();
	void showAllData();
	
	
		
	
};

	void Worker::showSurname(){
	
		cout << "Nazwisko:" << surname << endl;
	};
	string Worker::showPersonality(){
		return "Imie i nazwisko" + name + "" + surname + "/n";
		
	};
	void Worker::showAllData(){
		cout << "Dane pracownika:\n" << Worker::showPersonality()
		<< "Narodowoœæ:" << nationality << "\nRok urodzenia:"
		<< yearBirthday << "r.," << "p³eæ:" <<gender;
		
		switch(gender){
			case 'm':
				cout << "mê¿czyzna\n";
				break;
			case'w':
				cout << "kobieta\n";
				break;
			default:
				cout << "-\n";	
		}
		
		
	};



int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Worker pracownik;
	pracownik.name = "Janusz";
	pracownik.surname = "Nowak";
	pracownik.nationality = "Polska";
	pracownik.yearBirthday = 2006;
	
	pracownik.showAllData();	
	
	
	
	return 0;
}
