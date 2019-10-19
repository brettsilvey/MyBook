#pragma once
//Brett Silvey
//This is my own work

#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <iostream>


using namespace std;
class Book {
private:
	//data variables
	string author;
	string ISBN;
	string title;
	int year;
	bool check;
public:
	Book(string, string, string, int);
	//copy constructor
	Book(const Book& rhs);

	//Set Functions
	void setAuthor(string);
	void setISBN(string);
	void setTitle(string);
	void setYear(int);
	//change availability of the book
	void checkIn();
	void checkOut();
	//get Function
	string getAuthor() const;
	string getISBN() const;
	string getTitle() const;
	int getYear() const;
	bool isAvailable() const;

	//compare this book with rhs
	bool operator==(const Book &);

	//Book(const Book &);

	friend ostream& operator<<(ostream&out, const Book&rhs);



};
#endif
