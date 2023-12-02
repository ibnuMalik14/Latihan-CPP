#include "book.h"

int main() {
    	Book defaultbook;
	cout << "Default constructor invoked." << endl;
	Book mybook{"My Book Title", 123};
	cout << "User-provided constructor invoked." << endl;
	mybook.printdata();
	
	cout << "The book title is: " << mybook.gettitle() << endl;
	cout << "The number of pages is: " << mybook.getpages() << endl;
	
	cout << "Setting the new title..." << endl;
	mybook.settitle("New Book Title");
	cout << "Setting the new number pages.." << endl;
	mybook.setpages(456);
	mybook.printdata();	
	
	cout << "\nCreating an inventory of book... " << endl;
	vector<Book> v = {
		Book("Sample Book Title 1", 100),
		Book("Sample Book Title 2", 200),
		Book("Sample Book Title 3", 300),
		Book("Sample Book Title 4", 400),
		Book("Sample Book Title 5", 500),
	};
	for (auto& el : v) {
		el.printdata();
	}
}