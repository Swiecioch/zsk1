#include <iostream>
using namespace std;

class Food{
	public:
		string type {""};
		string color {""};
		string price {""};
};

class Meat:public Food{
	public:
		string meat_type {""};
		
		void getData();
};

class Fruit:public Food{
	public:
		string fruit_type {""};
		string source {""};
		
		void getData();
};

class Vegetable:public Food{
	public:
		string vegetable_type {""};
		
		void getData();
};

void Meat::getData(){
	cout << "Typ: " << type << "\nKolor: " << color << "\nCena: " << price << "\nTyp miêsa: " << meat_type << "\n";
};

void Fruit::getData(){
	cout << "\nTyp: " << type << "\nKolor: " << color << "\nCena: " << price << "\nTyp owoca: " << fruit_type << "\nKraj pochodzenia: " << source <<"\n";
}

void Vegetable::getData(){
	cout << "\nTyp: " << type << "\nKolor: " << color << "\nCena: " << price << "\nTyp warzywa: " << vegetable_type << endl;
}
int main(){
	setlocale(LC_CTYPE, "polish");
	
	Meat kurczak;
	kurczak.type = "miêso";
	kurczak.color = "white";
	kurczak.price = "50zl";
	kurczak.meat_type = "drób";
	kurczak.getData();
	
	Fruit banan;
	banan.type = "owoc";
	banan.color = "¿ó³ty";
	banan.price = "3zl";
	banan.fruit_type = "owoc egzotyczny";
	banan.source = "Brazylia";
	banan.getData();
	
	Vegetable ogórek;
	ogórek.type = "warzywo";
	ogórek.color = "zielony";
	ogórek.price = "5zl";
	oórek.vegetable_type = "ogórek";
	ogórek.getData();
	return 0;
}
