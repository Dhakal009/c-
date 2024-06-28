#include<iostream>
using namespace std;

class Fruit{
    public:
    string name;
    string color;

};

int main(){
    // Fruit apple;
    // apple.color="Green";
    // apple.name="Kacho Apple";
    // cout<<apple.color<<" "<<apple.name<<endl;

    Fruit *apple=new Fruit();
    apple->color="red";
    cout<<apple->color<<endl;



    return 0;
}