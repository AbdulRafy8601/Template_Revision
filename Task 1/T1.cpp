#include "OfflineCourse.h"
#include "OnlineCourse.h"

using namespace std;
int main()
{
   Course<int> * online;
   Course<int> * offline;
   online = new OnlineCourse <int>(6,5);
   offline = new OfflineCourse<int>(3,2);
   online->duration();
   offline->duration();
   return 0;
}