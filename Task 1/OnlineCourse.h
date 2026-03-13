#include "Course.h"
template <typename T>
class OnlineCourse:public Course<T>
{
    int  weeks;
    int hoursPerWeek;
    public:
    OnlineCourse(int weeks=0,int hoursPerWeek=0);
    void duration();
}; 
template <typename T>
void OnlineCourse<T> :: duration()
{
    cout<<"Duration of online course is "<<weeks*hoursPerWeek<<" hours"<<endl;
}
template <typename T>
OnlineCourse<T>::OnlineCourse(int weeks,int hoursPerWeek):weeks(weeks),hoursPerWeek(hoursPerWeek){}