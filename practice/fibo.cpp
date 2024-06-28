#include<iostream>
using namespace std;
int fibo(int n)
{
    int n1=0,n2=1,n3,i;
    if(n==1)
    {
        return n1;
    }
    else
    {
        for(i=2;i<=n;i++)
        {
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
        return n2;
    }
}

int main(){
    
    int n;
    cout<<"enter a term: "<<endl;
    cin>>n;
    cout<<"The "<<n<<" term is "<<fibo(n)<<endl;



return 0;
}