#include <iostream>
using namespace std;

class Book{
	public:
		string title{"lol"}, author;
		
		string getTitle();
		string getAuthor();
		
		void addAuthor(string author);
		
		Book(string title, string author = "brak");
		
	
};

string Book::getTitle(){
	
	return title;
	
}

string Book::getAuthor(){
	
	return author;
}

void Book::addAuthor(string pAuthor){
	
	author = pAuthor;
}

int main(){
	setlocale(LC_CTYPE, "polish");
	
	

	
	return 0;
}
