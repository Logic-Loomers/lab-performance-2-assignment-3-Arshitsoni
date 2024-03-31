#include <iostream>
#include <string>
using namespace std;
class Book {
    private:
    string name;
    string book_id;
    public:
    Book(string title, string book): name{title}, book_id{book} {}

    string getTitle() { return name; }
    string getBOOK() { return book_id; }
};

int main() {
    const int books_number = 3;
    Book books[books_number] = {
        Book("The Lord of the Rings", "123456"),
        Book("Roses are red", "234567"),
        Book("The Hobbit","345678")
    };

    string book;
    cout << "Enter the BOOK: ";
    cin >> book;
    for (int i = 0; i < books_number; i++) {
        if (books[i].getBOOK() == book) {
            cout << "Book found: " << books[i].getTitle() << endl;
            return 0;
        }
    }
    cout << "Book not found in the library.";
    return 0;
}
