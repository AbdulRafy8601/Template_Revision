//inline is a request that can be accepted or denied. It suggests to the compiler that the function's code should be inserted at each point the function is called, rather than being called through the usual function call mechanism. This can potentially reduce the overhead of function calls and improve performance, especially for small functions. However, the compiler may choose to ignore the inline request if it determines that inlining the function would not be beneficial or if the function is too complex.
#include<iostream>
#include "Library.h"
#include "Newspaper.h"
#include "Book.h"
using namespace std;

int main()
{
    Book book1("The Catcher in the Rye", "J.D. Salinger", 324);
    Book book2("To Kill a Mockingbird", "Harper Lee", 277);
    Newspaper newpaper1("Washington Post", "2024-06-01", "Morning Edition");
    Newspaper newpaper2("The New York Times", "2024-06-01", "Weekened Edition");

    Library library;
    
    library.addBook(& book1);
    library.addBook(& book2);
    library.addNewspaper(& newpaper1);
    library.addNewspaper(& newpaper2);

    cout<<"Before Sorting: "<<endl;
    library.displayCollection();
cout<<endl;
    library.sortBooksByPages();
    library.sortNewspapersByEdition();

    cout<<"After Sorting: "<<endl;
    library.displayCollection();
    cout<<endl;
    Book* foundBook = library.searchBookByTitle("The Catcher in the Rye");
    if(foundBook)
    {
        cout<<"Found Book:"<<endl;
        foundBook->display();
    }
    else
    {
        cout<<"Book not found."<<endl;
    }
    cout<<endl;
    Newspaper* foundNewspaper = library.searchNewspaperByName("The Times");
    if(foundNewspaper)
    {
        cout<<"Found Newspaper:"<<endl;
        foundNewspaper->display();
    }
    else
    {
        cout<<"Newspaper not found."<<endl;
    }
    return 0;   
}
