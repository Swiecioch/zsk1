#include <iostream>
#include <fstream>

int main(){
	setlocale(LC_CTYPE, "polish");
	
	std::ifstream file("plik.txt");
	
	if(file){
		int tab[9];
		for(int i = 0; i < 9; ++i){
			file >> tab[i];
		};
		file.close();
		for(int i = 0; i < 9; ++i){
			std::cout << "tab[" << i << "]=" << tab[i] <<  " ";
		};
	}else{
		std::cout << "Otwarcie pliku nie powiod³o siê\n";
	}
	
	return 0;
}
