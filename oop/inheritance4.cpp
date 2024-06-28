//hierarchical inheritance

#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"This is a parent class"<<endl;
    }
};

class child1:public parent{
    public:
    child1(){
        cout<<"this is child class 1."<<endl;
    }
};

class child2:public parent{
    public:
    child2(){
        cout<<"this a child class 2."<<endl;
    }
};
int main(){
    
child1 ch;
child2 b;



return 0;
}