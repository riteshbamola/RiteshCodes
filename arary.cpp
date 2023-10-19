#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    
    else{
        return n*factorial(n-1);
    }
}
int power(int n,int m)
{
    if(m==0)
        return 1;
    else{
        return n*power(n,m-1);
    }
}
void count(int n)
{
    if(n==1)
        cout<<1<<endl;
    else{
        cout<<n<<endl;
        count(n-1);
    }
}
int main()
{
    cout<<"hello world "<<endl;
    cout<<factorial(5)<<endl;
    cout<<power(3,4)<<endl;
    count(5);
    return 0;

}