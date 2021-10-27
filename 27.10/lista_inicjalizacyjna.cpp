#include <iostream>
using namespace std;

class Worker{
	const int id {8};
	public:
		
		string name {"Katarzyna"};
		string surname {"Nowak"};
		
		Worker();
		
		Worker(int pId, string pName, string pSurname);
		
		void getData();
		
		
};

	Worker::Worker():
		id {13},
		name {"Domyœlne imiê"},
		surname {"Domyœlne nazwisko"}
		{
			cout << "Konstruktor domyœlny" << endl;
		}
	


	Worker::Worker(int pId, string pName, string pSurname):
		id  {pId},
		name  {pName},
		surname  {pSurname}
	{
		cout <<"Konstruktor parametryczny: " << endl;
	}
	
		
	
void Worker::getData(){
		cout << "Id: " << id << "\nImie: " << name << "\nNazwisko: " << surname << endl;
	}

int main(){
	setlocale(LC_CTYPE, "polish");
	Worker nowak = Worker(1, "d", "d");
	nowak.getData();
	
	Worker nowak1 = Worker();
	nowak1.getData();
	

	
	return 0;
}
