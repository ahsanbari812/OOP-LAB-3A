#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string name;
    string author;
    string ISBN;
    int totalPages;
    int pagesRead;

public:
    Book() {
        name = "Unknown";
        author = "Unknown";
        ISBN = "000-0000000000";
        totalPages = 0;
        pagesRead = 0;
    }
    Book(string n, string a, string isbn, int totalp) {
        name = n;
        author = a;
        ISBN = isbn;
        totalPages = totalp;
        pagesRead = 0;
    }
    void updatePagesRead(int pages) {
        pagesRead += pages;
        if (pagesRead >= totalPages) {
            pagesRead = totalPages;
            cout << "You have finished the book!" << endl;
        } else {
            cout << "You have read " << pagesRead << " out of " << totalPages << " pages." << endl;
        }
    }
};

int main() {
    Book myBook("It Ends With Us", "Colleen Hoover", "978-0743276665", 250);

    myBook.updatePagesRead(50); 
    myBook.updatePagesRead(100); 
    myBook.updatePagesRead(100);  

    return 0;
}

