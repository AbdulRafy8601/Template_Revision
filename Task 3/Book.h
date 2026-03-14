#ifndef BOOK_H
#define BOOK_H
#include<string>
using namespace std;
class Book
{
    string title;
    string author;
    int pages;
 public:
    Book(string title="Unknown", string author= "Unknown", int pages=0);
    string getTitle();
    string getAuthor();
    int getPages();
    void display();
};
    inline void Book::display()
    {
        cout<<"Title: "<<title<<"\n Author: "<<author<<"\n Pages: "<<pages<<endl;
    }
    inline Book::Book(string title, string author, int pages): title(title), author(author), pages (pages) {}
    inline string  Book::getTitle()
    {
        return title;
    }
    inline string Book::getAuthor()
    {
        return author;
    }
    inline int Book::getPages()
    {
        return pages;
    }

#endif