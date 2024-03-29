#include<iostream>
// #include<bits/c++.h>
using namespace std;

//Que 1
char change(char ch){
    char big = ch-'a'+'A';
    return big;
}

//Que 2 

int countdigit(int n){
    int count =0;
    while(n){
        count++;
        n=n/10;
    }
    return count;
}

int amstrong(int num,int digit){
    int ans=0,rem;
    while(num){
        rem = num%10;
        num=num/10;
        int mul=0;
        // ans = ans+pow(rem,digit);
    }
    return ans;
}
int main(){

    // 1

    char ch;
    cin>>ch;

    cout<<change(ch);

    //2

    int n;
    cin>>n;
    int ans=countdigit(n);
    int proper = amstrong(n,ans);

    if(proper==n){
        cout<<"amstrong";
    }
    else{
        cout<<"Not Amstrong";
    }

    //3
    //  fact me kitne zero hai 

    // tariling zero gfg

    int n;cin>>n;
    int count=0;

    while(n>=5){
        count = count +n/5;  
        n=n/5;
    }

    return count ;

    //4
    //make a rectangle a,b,c,d

    int a,b,c,d;       
    cin>>a>>b>>c>>d;

    if((a==b && c==d) || (a==c && b==d) || (a==d && b==c)){
        cout<<"RECTANGLE"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    //5 

    //Total Moves for Bishop 

    int A,B;
    cin>>A;
    cin>>B;

    int count=0;
    count =count + min(8-A,8-B);
    count =count + min(8-A,B-1);
    count =count + min(A-1,B-1);
    count =count + min(A-1,8-B);    

    cout<<count<<endl;
}