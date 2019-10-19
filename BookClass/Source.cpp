#include <iostream>
#include "Book.h"

using namespace std;

int main() {

	//create a book
	Book myBook("Charlotte\'s Web", "E.B. White", "1-2345-34567-Z", 1952);

	cout << myBook << endl;

	//test Methods in Book.cpp
	cout << "The books title is " << myBook.getTitle() << endl;
	cout << "The authors name is " << myBook.getAuthor() << endl;
	cout << "The ISBN is " << myBook.getISBN() << endl;
	cout << "The copyright year is " << myBook.getYear() << endl;

	//check to see availability of book
	if (myBook.isAvailable()) {
		cout << "This book is checked in." << endl;
	}
	else {
		cout << "This book is checked out." << endl;
	}


	myBook.setTitle("Stuart Little");
	myBook.checkOut();

	//verify updates
	cout << "The books title is " << myBook.getTitle() << endl;
	cout << "The authors name is " << myBook.getAuthor() << endl;
	cout << "The ISBN is " << myBook.getISBN() << endl;
	cout << "The copyright year is " << myBook.getYear() << endl;
	//verify availability again
	if (myBook.isAvailable()) {
		cout << "This book is checked in." << endl;
	}
	else {
		cout << "This book is checked out." << endl;
	}

	return 0;
}

