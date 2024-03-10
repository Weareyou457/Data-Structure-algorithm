#include<iostream>
using namespace std;

int main(){
    // int num;
    // cout<<"Enter Number : ";
    // cin>>num;

    // int rem,ans=0,mul=1;
    // while (num>0)
    // {
    //     //reminder
    //     rem = num %2;    //num=num&1    (1101 --> 0001 -> 1 )
    //     //quoient 
    //     num=num/2;     //num>>1   
    //     //ans
    // ans=rem*mul+ans;
    //     //mul
    //     mul = mul *10;
    // }
    
    // cout<<ans<<endl;


    // long long int n;
    // cout<<"enter a Number : ";
    // cin>>n;
    // long long int reminder,ans=0,mul=1;
    // while(n>0){
    //     reminder = n%2;
    
    //     ans = reminder*mul+ans;
    //     mul = mul *10;

    //     n = n/2;
    // }

    // cout<<ans<<endl;


    //Binary to Decimal

    // int n;
    // cout<<"Enter Your Number : ";
    // cin>>n;
    // int rem=0,mul=1,ans=0;
    // while (n)    //condition hata do  (n>0)
    // {   
    //     //reminder
    //     rem=n%10;
    //     //num ko divide karo
    //     n=n/10;
    //     //ans
    //     ans=rem*mul+ans;
    //     //mul 2^i
    //     mul=mul=mul*2;
    // }
    
    // cout<<ans<<endl;


     //Decimal to octal

    int n;
    cout<<"Enter Your Number : ";
    cin>>n;
    int rem=0,mul=1,ans=0;
    while (n>0)    //condition hata do  (n>0)
    {   
        //reminder
        rem=n%8;
        
        //ans
        ans=rem*mul+ans;
        //mul 2^i
        mul=mul*10;

        //num ko divide karo
        n=n/8;
    }
    
    cout<<ans<<endl;
}