#include <iostream>
using namespace std;

class Rectangle{
	
	public:
		int a;
		int b;
		
		void CalculateTheField(){
			int field = a*b;
			cout << "\nthe field of the rectangle is:\n" << field << endl;
		}
		void CalculateTheCircuit(){
			int circuit = (a+b) * 2;
			cout << "\nthe circuit of the rectangle is:\n" << circuit << endl;
		}
	
};




int main(int argc, char** argv) {
	
	
	Rectangle a;
	
	cout << "\nPodaj dlugosc a" << endl;
	cin >> a.a;
	
	cout << "\nPodaj dlugosc b" << endl;
	cin >> a.b;
	
	a.CalculateTheField();
	a.CalculateTheCircuit();
	
	
	return 0;
}