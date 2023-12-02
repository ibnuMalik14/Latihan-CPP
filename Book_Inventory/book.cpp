#include "book.h"

Book::Book():title{"Default Book Title"}, pages{0} {

}


Book::Book(const string& atitle, int apages):title{atitle}, pages{apages} {
	
}

void Book::printdata() {
	cout << "The book title is: " << title << ", and the number of pages is: " << pages << endl;
}

string Book::gettitle() const {
	return title;
}
int Book::getpages() const {
	return pages;
}

void Book::settitle(const string& atitle) {
	title = atitle;
}

void Book::setpages(int apages) {
	pages = apages;
}
