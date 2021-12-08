#include <iostream>
using namespace std;

class Worker{
	public:
		string name {" ";
		string surname {" "};
		string getData(){
		return name + " " + surname;
		}
	
};

// klasa pochodna
class Teacher: public Worker{
	public: 
		string classesAtSchool {" "};
		string getData(){
		return name + " " + surname + " " + classesAtSchool + "\n";
	}
};

class SupervisingTeacher: public Teacher{
		public:
			static string _class;
			
			string getData(){
				return name + " " + surname + " " + classesAtSchool + _class + "\n";
			}
};

	string SupervisingTeacher::_class = "2E";
int main(){
	setlocale(LC_CTYPE, "polish");
	
	Teacher nowak;
	nowak.name = "Marek";
	nowak.surname = "Nowak";
	nowak.classesAtSchool = "PO";
	nowak._class = "2E";
	cout << "Dane nauczyciela: " << nowak.getData() << endl;
	
	SupervisingTeacher nowak;
	nowak.name = "Marek";
	nowak.name = "Nowak";
	pawlak.classesAtSchool = "PO";
	pawlak._class = "PO";

	
	return 0;
}
