#include <iostream>
using namespace std;

class Worker{
	public:
		string name, surname;
		
		void getData();
		
		Worker(){
			cout << "Konstruktor domy�lny" << endl;
		}
		Worker(string pName, string pSurname);
		
		~Worker(){
			cout << "Destruktor" << endl;
		}
};

void Worker::getData(){
	cout << "Imi� i nazwisko: " << name << " " << surname << endl;
}

Worker::Worker(string pName, string pSurname):

name {pName},
surname {pSurname}

{
	cout << "Konstruktor parametryczny" << endl;
}

void createObjectWorker(){
	Worker worker;
	cout << "Wywo�ano funkcj� createObjectWorker" << endl;
}


int main(){
	setlocale(LC_CTYPE, "polish");
	
	
//	Worker nowak;
	
//	Worker *p_nowak = new Worker("Janusz", "Nowak");
//	p_nowak -> getData();
//	delete p_nowak;
	
	createObjectWorker();
	Worker kowalski;
	
	
	
	
	return 0;
}
