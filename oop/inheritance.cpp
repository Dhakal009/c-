//single layer inheritance



#include<iostream>
using namespace std;
class parents{
    public:
    parents(){
    cout<<"Parents class"<<endl;
    }
};

class child: public parents{
    public:
    child(){
        cout<<"Child class"<<endl;
    }
};
int main(){
    parents c;
    




return 0;
}