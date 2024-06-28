#include<iostream>
using namespace std;

class parents{
    public:
    int x;

    protected:
    int y;

    private:
    int z;
};

class child1: public parents{
    //x will remain public
    //y will remain protected
    //z will be not accessible
};

class child2: protected parents{
    //x will protected
    //y will be protected
    //z will not ne accessible
};

class child3: private parents{
    //x will be private
    //y will be private
    //z will not be accessible
};