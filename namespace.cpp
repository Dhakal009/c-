#include<iostream>

namespace first{
    int x=0;
}

int main(){
    int x=9;

    std::cout<<first::x;
}