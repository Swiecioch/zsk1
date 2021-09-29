#include <iostream>
using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy;
};

class Worker{
	public:
		unsigned int id {};
		string name {}, surname {};
		Date dateBirthday{};
		
		void showAllData();
		void setData(unsigned int id, string name, string surname, Date dateBirthday);
	
};

void Worker::showAllData(){
	cout << "Dane pracownika:\nIdentyfikator pracownika: " << id << "\nImię i nazwisko: " 
	<< name << " " << surname 
	<< "\nData urodzenia: " << dateBirthday.dd << "-" << dateBirthday.mm << "-"
	<< dateBirthday.yyyy << endl;
}

void Worker::setData(unsigned int id, string name, string surname, Date dateBirthday){
	Worker::id=id;
	Worker::name = name;
	Worker::surname = surname;
	Worker::dateBirthday = dateBirthday;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker kowalski;
	
	kowalski.setData(100, "Krzysztof", "Kowalski", {11,2,2021});
	kowalski.showAllData();
	return 0;
}
