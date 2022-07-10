
#include <iostream>
using namespace std;
class Test
{
   private:
      int num;
   public:
       Test(int n)
       {
           num=8;
       }
       void operator ++()
            {
          num = num+2;
       }
       void Print() {
           cout<<"The Count is: "<<num;
       }
};
int main()
{
    Test tt(8);
    ++tt;  // calling of a function "void operator ++()"
    tt.Print();
    return 0;
}
