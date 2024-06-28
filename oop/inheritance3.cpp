//multiple inheritance:


#include<iostream>
using namespace std;
class parent1{
    public:
    parent1(){
        cout<<"parents 1"<<endl;
    }

};

class parent2{
    public:
    parent2(){
        cout<<"parent 2"<<endl;
    }
};


class child:public parent1, public parent2{
    public:
    child(){
        cout<<"this is child class."<<endl;
    }
};
int main(){
    
    child ch;
    




return 0;
}