#ifndef NEWSPAPER_H
#define NEWSPAPER_H
#include<string>
using namespace std;
class Newspaper
{
    string name;
    string publishDate;
    string edition;
 public:
    Newspaper(string name="Unknown", string publishDate= "Unknown", string edition="Unknown");
    string getName();
    string getPublishDate();
    string getEdition();
    void display();
};
    inline Newspaper::Newspaper(string name, string publishDate, string edition): name(name), publishDate(publishDate), edition(edition) {}   
    inline string Newspaper::getName()
    {
        return name;
    }
    inline string Newspaper::getPublishDate()
    {
        return publishDate;
    }
    inline string Newspaper::getEdition()
    {
        return edition;
    }
    inline void Newspaper::display()
    {
        cout<<"Name: "<<name<<"\n Publish Date: "<<publishDate<<"\n Edition: "<<edition<<endl;
    }
#endif