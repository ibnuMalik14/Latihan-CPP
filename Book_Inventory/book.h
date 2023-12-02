#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
	private:
		string title;
		int pages;
	public:
		Book();
		Book(const string& atitle, int apages);
		void printdata();
		string gettitle() const;
		int getpages() const;
		void settitle(const string& atitle);
		void setpages(int apages);
};

#endif