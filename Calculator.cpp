#include<iostream>
using namespace std;

int main()
{
    int n1,n2,add,sub,mul;
    float div; 
    cout<<"Please enter a number"<<endl;
    cin>>n1;

    cout<<"Please enter a number"<<endl;
    cin>>n2;

    add=n1+n2;
    sub=n1-n2;
    mul=n1*n2;
    div=(float)n1/n2;

    cout<<"Addition="<<add<<endl;
    cout<<"Substraction="<<sub<<endl;
    cout<<"Multiplication="<<mul<<endl;
    cout<<"Division="<<div<<endl;

}