#include <iostream>
using namespace std;

class Book {
private:
    string title, author, publisher;

public:
    Book(string t, string a, string p){
        title=t;
        author=a;
        publisher=p;
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Publisher: " << publisher << endl;
    }
};

class FictionBook : public Book {
    string genre, protagonist;

public:
    FictionBook(string t, string a, string p, string g, string pro)
        : Book(t, a, p), genre(g), protagonist(pro) {}

    void display() {
        Book::display();
        cout << "Genre: " << genre << ", Protagonist: " << protagonist << endl;
    }
};

int main() {
    FictionBook book("The Great Gatsby", "F. Scott Fitzgerald", "Scribner", "Drama", "Gatsby");
    book.display();
    return 0;
}
