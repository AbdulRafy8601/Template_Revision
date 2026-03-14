#ifndef LIBRARY_H
#define LIBRARY_H
#include<iostream>
#include "Book.h"
#include "Newspaper.h"
using namespace std;

class Library
{
    Book** book;
    Newspaper** newspaper;
    int bookCount;
    int newspaperCount;
public:
    Library();
    ~Library()
    {
            delete[] book;
            delete[] newspaper;
    }
    void addBook(Book* b);
    void addNewspaper(Newspaper* n);
    void displayCollection();
    void displayBooks();
    void displayNewspapers();
    void sortBooksByPages();
    void sortNewspapersByEdition();
    Book* searchBookByTitle(string title);
    Newspaper* searchNewspaperByName(string name);
};
inline Library::Library()
    {
        book = nullptr;
        newspaper = nullptr;
        bookCount = 0;
        newspaperCount = 0;   
    }
inline void Library ::sortBooksByPages()
{
    Book* temp=nullptr;
    for(int i=0; i<bookCount-1; i++)
    {
        for(int j=0; j<bookCount-i-1; j++)
        {
            if(book[j]->getPages() > book[j+1]->getPages())
            {
                temp = book[j];
                book[j] = book[j+1];
                book[j+1] = temp;
            }
        }
    }
}
inline void  Library ::sortNewspapersByEdition()
{
    for(int i=0; i<newspaperCount-1; i++)
    {
        for(int j=0; j<newspaperCount-i-1; j++)
        {
            if(newspaper[j]->getEdition() > newspaper[j+1]->getEdition())
            {
                Newspaper* temp = newspaper[j];
                newspaper[j] = newspaper[j+1];
                newspaper[j+1] = temp;
            }
        }
    }
}
inline void Library ::displayBooks()
{
    for(int i=0;i<bookCount; i++)
    {
        book[i]->display();
    }
}
inline void Library ::displayNewspapers()
{
    for(int i=0;i<newspaperCount; i++)  
    {
        cout<<"Name: "<<newspaper[i]->getName()<<endl<<" Publish Date: "<<newspaper[i]->getPublishDate()<<endl<<" Edition: "<<newspaper[i]->getEdition()<<endl;
    }
}
inline void Library ::displayCollection()
{
    cout<<"Books in Library: "<<endl;
    displayBooks();
    cout<<"Newspapers in Library: "<<endl;
    displayNewspapers();
} 
inline void Library :: addBook(Book* b)
{
    Book** temp = new Book*[bookCount + 1];
    for(int i=0;i<bookCount; i++)
    {
        temp[i] = book[i];
    }
    temp[bookCount] = b;
    delete[] book;
    book = temp;
    bookCount++;    
}
inline void Library :: addNewspaper(Newspaper* n)
{
    if(n==nullptr)
     {
        cout<<"Invalid newspaper pointer."<<endl;
        return;
    }
    Newspaper** temp = new Newspaper*[newspaperCount + 1];
    for(int i=0;i<newspaperCount; i++)
    {
        temp[i] = newspaper[i];
    }
    temp[newspaperCount] = n;
    delete[] newspaper;
    newspaper = temp;
    newspaperCount++;
}
inline Book* Library:: searchBookByTitle(string title)
{
    for(int i=0; i<bookCount; i++)
    {
        if(book[i]->getTitle() == title)
        {
            return book[i];
        }
    }
    return nullptr;
}
inline Newspaper* Library:: searchNewspaperByName(string name)
{
    int start=0,end=newspaperCount-1;
    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(newspaper[mid]->getName() == name)
        {
            return newspaper[mid];
        }
        else if(newspaper[mid]->getName() < name)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return nullptr;
}
#endif  