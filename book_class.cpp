#include <iostream>
#include <string>   // need to include header whenever you are working with strings
using namespace std;

// representation of a Book class

class Book {
    private:
        string title;
        string author;
        int publicationYear;
        double price;
        int pages;

    public:
        // Constructor with member initialization list
        Book(string title, string author, int publicationYear, double price, int pages)
            : title(title), author(author), publicationYear(publicationYear), price(price), pages(pages) {
            // Constructor body (if needed)
        }

        Book() {
            // default constructor
        }

        // Member function to display book information
        void display() {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Publication Year: " << publicationYear << endl;
            cout << "Price: $" << price << endl;
            cout << "Pages: " << pages << endl;
        }

        // getters
        string getTitle() {
            return title;
        }

        string getAuthor() {
            return author;
        }

        double getPrice() {
            return price;
        }

        int getPages() {
            return pages;
        }

        int getPublicationYear() {
            return publicationYear;
        }

        // setters
        void setTitle(string newTitle) {
            title = newTitle;
        }

        void setAuthor(string newAuthor) {
            author = newAuthor;
        }

        void setPages(int newPages) {
            pages = newPages;
        }

        void setPrice(double newPrice) {
            price = newPrice;
        }

        void setPublicationYear(int year) {
            publicationYear = year;
        }
};

void compareBooks(Book a, Book b);

void bookDemo() {
    // Creating an object of the Book class using constructor with initialization list
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1925, 9.99, 208);

    // Displaying book1's information
    book1.display();

    cout << endl;

    // Creating a new object of the Book class using default constructor, and setters
    Book book2;
    book2.setTitle("Harry Potter");
    book2.setAuthor("JK Rowling");
    book2.setPages(500);
    book2.setPublicationYear(1997);
    book2.setPrice(24.99);

    book2.display();

    cout << endl;

    compareBooks(book1, book2);
}

void compareBooks(Book a, Book b) {
    // function that determines which book cost more than the other
    if (a.getPrice() > b.getPrice()) {
        cout << a.getTitle() << " is more expensive than " << b.getTitle() << endl;
    } else if (a.getPrice() == b.getPrice()) {
        cout << "Both books cost the same.";
    } else {
        cout << b.getTitle() << " is more expensive than " << a.getTitle() << endl;
    }
}

int main() {
    bookDemo();

    return 0;
}