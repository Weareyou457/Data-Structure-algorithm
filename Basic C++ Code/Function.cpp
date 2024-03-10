#include<iostream>
using namespace std;

//      FUNCTION 

bool prime(int n){

    if(n<2){
        return 0;
    }
    for (int i =2; i <n; i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1; 
}

int fact(int n){
    int ans=1;
    for (int i = 1; i <=n; i++)
    {
        ans=ans*i;
    }
    return ans;
}

int sum(int a,int b){
    return a+b;
}

int mul(int a,int b){
    return a*b;
}

void army(){
    cout<<"CODER ARMY";
}

// FUNCTION pass by value 

void swap(int a,int b){
    int c=a;
    a=b;
    b=c;
}

//FUNCTION pass by reafrence 

void swap1(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}

//function OverLoading 

void swap(float &c,float &b){    // ek type ke do function 
    int d=c;
    c=b;
    b=d;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;

    cout<<prime(a)<<" ";
    cout<<fact(a)<<" ";
    cout<<sum(a,b)<<" ";
    cout<<mul(a,b)<<" ";
    army();

    swap(a,b);
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    swap1(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
}