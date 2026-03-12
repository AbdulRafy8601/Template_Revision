#include "Course.h"
template <typename T>
class OfflineCourse:public Course<T>
{
    int months;
    int hoursPerDay;
    public:
    OfflineCourse(int months=0,int hoursPerDay=0);
    void duration();
};
template <typename T>
void OfflineCourse<T> :: duration()
{
    cout<<"Duration of offline course is "<<months* 30 * hoursPerDay<<" hours"<<endl;
}
template <typename T>
OfflineCourse<T>::OfflineCourse(int months,int hoursPerDay):months(months),hoursPerDay(hoursPerDay){}