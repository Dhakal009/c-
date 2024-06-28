//multilayer inheritance



#include<iostream>
using namespace std;
class parents{
    public:

    parents(){
        cout<<"hello world 1"<<endl;
    }
};

class child: public parents{
    public:

    child(){
        cout<<"Hello child"<<endl;
    }
};

class grandchild: public child{
    public:

    grandchild(){
        cout<<"hello grandchild"<<endl;
    }
};
int main(){
    grandchild ch;
    




return 0;
}