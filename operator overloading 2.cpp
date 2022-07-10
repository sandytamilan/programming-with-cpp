#include <iostream>
using namespace std;
class Time
{
   private:
      int hours,minutes;
   public:
     Time(int h,int m)
       {
           hours=h;
           minutes=m;
       }
          void operator ++()
       {
           minutes++;
           if(minutes>=60)
           {
               hours++;
               minutes-=1;
           }
       }
       void display()
       {
           cout<<hours<<":"<<minutes<<endl;
       }
};
int main()
{
    Time t(5,45);
// calling of a function "void operator ++()"
    ++t;
    t.display();
    return 0;
}
