#include<iostream>
using namespace std;

int cnt=1;
void function(){
    if(cnt==3)
        return;
    cnt++;
    function();
    cout<<"Hello"<<endl;
}

void function1(int n){
    if(cnt==n){
        cout<<cnt<<endl;
        return;
    }
    cout<<cnt<<endl;
    cnt++;
    function1(n);
}

void function2(int n){
    if(n==0)
        return;
    cout<<n<<endl;
    function2(--n);
}

void fn(int i,int n){
    if(i<1)
        return;
    fn(i-1,n);
    cout<<i<<endl; 
}

void fn1(int i,int n){
    if(i>n)
        return;
    fn1(i+1,n);
    cout<<i<<endl; 
}

void Sumn(int i,int sum){
    if(i<1){
    cout<<sum<<endl;
    return;    
    }
    Sumn(i-1,sum+i);
}

int sumRecur(int n){
    if(n==1)
        return 1;
    return n+sumRecur(n-1);
}

long long int factorial(int n){
    if(n==0)
    return 1;
    return n*factorial(n-1);
}

int main(){
    // function();
    int n;
    cout<<"Enter the total numbers to be printed: "<<endl;
    cin>>n;
    // function1(n);
    // function2(n);
    // fn(n, n);
    // fn1(1, n);
    // Sumn(n,0);
    // cout<<sumRecur(n);
    cout<<factorial(n)<<endl;
    return 0;
}