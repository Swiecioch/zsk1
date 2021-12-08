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
	cout << "Typ: " << type << "\nKolor: " << color << "\nCena: " << price << "\nTyp mi�sa: " << meat_type << "\n";
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
	kurczak.type = "mi�so";
	kurczak.color = "white";
	kurczak.price = "50zl";
	kurczak.meat_type = "dr�b";
	kurczak.getData();
	
	Fruit banan;
	banan.type = "owoc";
	banan.color = "��ty";
	banan.price = "3zl";
	banan.fruit_type = "owoc egzotyczny";
	banan.source = "Brazylia";
	banan.getData();
	
	Vegetable og�rek;
	og�rek.type = "warzywo";
	og�rek.color = "zielony";
	og�rek.price = "5zl";
	o�rek.vegetable_type = "og�rek";
	og�rek.getData();
	return 0;
}
