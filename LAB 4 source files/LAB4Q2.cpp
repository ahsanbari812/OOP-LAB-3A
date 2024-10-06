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
    
    Book() : totalPages(1000), pagesRead(0) {
        name = "Unknown";
        author = "Unknown";
        ISBN = "000-0000000000";
    }

    
    void setName(string n) {
        name = n;
    }

    void setAuthor(string a) {
        author = a;
    }

    void setISBN(string isbn) {
        ISBN = isbn;
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

    void showBookInfo() const {
        cout << "Book Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Total Pages: " << totalPages << endl;
        cout << "Pages Read: " << pagesRead << endl;
    }
};

int main() {
    
    Book myBook;

    myBook.setName("It Ends With Us");
    myBook.setAuthor("Colleen Hoover");
    myBook.setISBN("978-0743276665");

    
    myBook.showBookInfo();
    
    myBook.updatePagesRead(200);  
    myBook.updatePagesRead(300);  
    myBook.updatePagesRead(500); 
    return 0;
}
