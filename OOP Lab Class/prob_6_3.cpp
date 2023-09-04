
//6.3
#include <bits/stdc++.h>
using namespace std;

class bookshop
{
    string name, author, publisher;
    double price;
    int stock = 0;

public:
    void setdata()
    {
        cout << "Enter Book Name: ";
        cin >> name;
        cout << "Enter Author name: ";
        cin >> author;
        cout << "Enter Publisher : ";
        cin >> publisher;
        cout << "Enter Price : ";
        cin >> price;
        cout << "Enter Stock : ";
        cin >> stock;
    }
    // void copies(int n)
    // {
    //     stock = stock-n;
    // }
    friend void search_book(string book_name, string author_name, bookshop shop[], int total_book_type);
    friend void display_book_details(bookshop book);
};
void display_book_details(bookshop book);
void search_book(string book_name, string author_name, bookshop shop[], int total_book_type)
{
    // bool found = false;
    int idx = -1;
    for (int i = 0; i < total_book_type; i++)
    {
        if (shop[i].name == book_name && shop[i].author == author_name)
        {
            // found = true;
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        cout << "Book not found" << endl;
    }
    else
    {
        cout << "Book is found" << endl;
        display_book_details(shop[idx]);
    }
}
void display_book_details(bookshop book)
{
    cout << "Book Name : " << book.name << endl;
    cout << "Author Name : " << book.author << endl;
    cout << "Publisher : " << book.publisher << endl;
    cout << "Price Per unit : " << book.price << endl;
    cout << "Available copies : " << book.stock << endl;
    int required_copies;
    cout << "Enter Required Copies : ";
    cin >> required_copies;
    if (required_copies <= book.stock)
    {
        cout << "Requested copies are available." << endl;
        cout << "Total price of requested copies is = " << book.price * required_copies << endl;
        cout << "Would you like to buy those copies?" << endl;
        cout << "Press 1 to buy" << endl;
        cout << "Press 2 or ohter key to not buy" << endl;
        int n = 0;
        cin >> n;
        if (n == 1)
        {
            cout << "Buy is successful." << endl;
            cout << "Total payment is = " << book.price * required_copies << endl;
            // book.copies(required_copies);
            book.stock = book.stock - required_copies;
        }
        else
        {
            cout << "Buying not successful." << endl;
        }
    }
    else
    {
        cout << " Requested copies are not available." << endl;
        cout << "Only " << book.stock << " copies are available" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter Type of Book: ";
    cin >> n;
    bookshop college_library[n];
    cout << "Enter Book Details : " << endl;
    for (int i = 0; i < n; i++)
    {
        college_library[i].setdata();
    }
    // buyer part
    int nn = 1;
    while (nn)
    {
        cout << "Customer Query: ";
        string need_book, need_author;
        cout << "Enter Book name: ";
        cin >> need_book;
        cout << "Enter Author name: ";
        cin >> need_author;
        search_book(need_book, need_author, college_library, n);
        cout << "******************************************" << endl;
        cout << "Enter 1 to continue searching book or press any other key to exit searching." << endl;
        cin >> nn;
        if (nn != 1)
            nn = 0;
    }
    cout << "Exiting The Book shop" << endl;
    return 0;
}