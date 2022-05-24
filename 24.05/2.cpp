#include <iostream>
#include <fstream>

struct football{
	std::string nameSurname;
	std::string club;
};

int main(){
	setlocale(LC_CTYPE, "polish");
	
	std::ifstream file("plik.txt");
	football footballer;
	
	if(file){
		getline(file, footballer.nameSurname);
		getline(file, footballer.club);
		std::cout << "Dane o pi³karzu: \n" << "Imiê i nazwisko: " <<  footballer.nameSurname << "\nKlub: " << footballer.club;
	}else{
		std::cout << "Otwarcie pliku nie powiod³o siê\n";
	}
	
	return 0;
}
