#include<iostream>
using namespace std;
class rectangle{
    public:
    int l;
    int b;

    rectangle(){   //default constuctor
        l=0;
        b=0;
    }

    rectangle(int x,int y){  //parametrised constructor
        l=x;
        b=y;
    }

    rectangle(rectangle& r){ //copy constructor
        l=r.l;
        b=r.b;
    }

    ~rectangle(){
        cout<<"misson passed"<<endl;
    }
};
int main(){
    rectangle *r1= new rectangle;
    cout<<r1->l<<endl;
    delete r1;

    rectangle r2(4,5);
    cout<<r2.b<<endl;

    rectangle r3= r2;
    cout<<r3.b<<endl;


    return 0;
}