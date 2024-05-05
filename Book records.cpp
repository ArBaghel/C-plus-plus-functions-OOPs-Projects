#include <iostream>

using namespace std;

struct Book {
  string title;
  string author;
  string publication;
  double price;
};

int main() {
  int numBooks;

  cout << "Enter the number of books: ";
  cin >> numBooks;

  Book books[numBooks];  // Array of Book structures

  // Input book details for each book
  for (int i = 0; i < numBooks; ++i) {
    cout << "Enter details for book \n" << i + 1 << ":" << endl;
    cout << "Title: ";
    getline(cin, books[i].title);
    cin.ignore();
    cout << "Author: ";
    getline(cin, books[i].author);
    cout << "Publication: ";
    getline(cin, books[i].publication);
    cout << "Price: ";
    cin >> books[i].price;
    cin.ignore(); // Consume newline character
  }

  // Display book records
  cout << "\nBook Records:\n";
  for (int i = 0; i < numBooks; ++i) {
    cout << "\nBook " << i + 1 << ":" << endl;
    cout << "Title: " << books[i].title << endl;
    cout << "Author: " << books[i].author << endl;
    cout << "Publication: " << books[i].publication << endl;
    cout << "Price: $" << books[i].price << endl;
  }

  return 0;
}
