#include<iostream>
using namespace std;

int main(){
    // char arr[5]={'a','p','p','l','e'};

    // char arr[10];
    // arr[2]='\0';
    // cin>>arr;

    // cout<<arr<<endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i];
    // }
    
    //STRING------------------------------------------------------ 

    // string S="Rohit";
    string S;
    // cin>>S;       //Alfaiz is a good boy -> Alfaiz 
    getline(cin,S);  //Alfaiz is a good boy -> Alfaiz is a good boy
    cout<<S.size();  //20
    cout<<S<<endl;

    //Append or add
    string s1="alfaiz",s2="rangrez";
    string s3=s1+s2;   //concate
    string s4=s1.append(s2);
    cout<<s3<<endl;
    cout<<s4<<endl;

    //attach single char 
    string hello="Alfaiz";
    hello.push_back('P');
    cout<<hello<<endl;

    //COTATION PRINT KRNA HOTO 
    //ROhit is "good" boy  -> ESC CHAR(\)
    
    string s="Hello I am \"AlfaizRangrez\"";
    cout<<s<<endl;

    //REVERSE A STRING
    string arr;
    getline(cin,arr);

    int start=0,end=arr.size()-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++,end--;
    }

    cout<<arr<<endl;

    //Length of String
    string alfaiz;
    getline(cin,alfaiz);
    int size=0;
    while(alfaiz[size]!='\0'){ 
        size++;
    }
    cout<<size<<endl;

    //plaindrom check
    string pal;
    cin>>pal;
    int start=0,end=pal.size()-1;
    while (start<end)
    {
        if(pal[start]!=pal[end]){
            cout<<"not plaindrom"<<endl;
            return 0;
        }
        start++,end--;
    }
    cout<<"its plandrom"<<end;
}