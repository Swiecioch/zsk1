#include <iostream>
#include <fstream>

int main(){
	setlocale(LC_CTYPE, "polish");
	
	std::ifstream file;
	file.open("plik.txt", std::ios::in);
	int tab[5];
	bool fileOpen = false;
	
	if(file.good()){
//		std::cout << sizeof(tab)/sizeof(int);
		for(int i = 0; i < sizeof(tab)/sizeof(int); ++i){
			file >> tab[i];
		}
		file.close();
		
		fileOpen = true; 
	
		
	}else{
		std::cout << "Otwarcie pliku nie powiod�o si�\n";
		fileOpen = false;
	}
	if(fileOpen){
		for(int i = 0; i < sizeof(tab)/sizeof(int); i++){
			std::cout << tab[i] << "\n";
		}else{
			std::cout << "Tablica nie zosta�a uzupe�niona danymi";
		}
	}
	
	return 0;
}
