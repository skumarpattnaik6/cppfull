#include <iostream>
using namespace std;

class base
{
    public:
    virtual void fun()
    {
      cout<<"base fun"<<endl;
    }
 };
 
 class derive : public base
 {
     public:
     void fun()
     {
        cout<<"derive fun"<<endl;
     }
  };
  
  
  //driver code
  
  int main()
  {
    base *b = new derive();
    b->fun();
    return 0;
  }
