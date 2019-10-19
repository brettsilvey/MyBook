using namespace std;

#include<iostream>
#include<string>
#include "Book.h"


Book::Book(string t, string a, string isbn, int year)
{
	this->title = t;
	this->author = a;
	this->ISBN = isbn;
	this->year = year;
	check = true;
}

//Functions for Setting:
void Book::setAuthor(string a) { author = a; }
void Book::setISBN(string isbn){this->ISBN = isbn;}
void Book::setTitle(string t){ title = t; }
void Book::setYear(int y){ year = y; }
void Book::checkIn(){ this->check = true; }
void Book::checkOut(){ this->check = false; }

//functions for Getting
string Book::getAuthor() const { return author; }
string Book::getISBN() const{ return ISBN; }
string Book::getTitle() const{ return title; }
int Book::getYear() const{ return year; }
bool Book::isAvailable() const{ return check; }

bool Book::operator== (const Book& rhs) {
	return this->ISBN == rhs.ISBN;
}

Book::Book(const Book & rhs){
	this->title = rhs.title;
	this->author = rhs.author;
	this->ISBN = rhs.ISBN;
	this->year = rhs.year;
}

ostream & operator<<(ostream & out, const Book & rhs)
{
	// TODO: insert return statement here
	out << rhs.title << '\n' << rhs.author << '\n' << rhs.ISBN << '\n' << rhs.year << '\n';
	out << "This Book is: ";
	if (rhs.check) {
		out << "Checked in" << endl;
	}
	else {
		out << "Checked out" << endl;
	}
	return out;
}
