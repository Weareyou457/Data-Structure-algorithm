#include<iostream>
#include<vector>
using namespace std;

int main(){

    string s;
    cout<<"Enter A String : ";
    cin>>s;

    int count=0;
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'){
            int index=s[i]-'a';
            lower[index]++;
        }
        else{
            int index=s[i]-'A';
            upper[index]++;
        }
    }
    
    int odd=0;

    for(int i=0;i<26;i++){
        if(lower[i]%2==0){
            count=count+lower[i];
        }
        else{
            count=count+lower[i]-1;
            odd=1;
        }
        if(upper[i]%2==0){
            count=count+upper[i];
        }
        else{
            count=count+upper[i]-1;
            odd=1;
        }
    }

    count=count+odd;
    cout<<count<<endl;


//SORTING THT SENTENCE:

    string s;
    cout<<"Enter A String : ";
    cin>>s;

    vector<int>ans(10);
    string temp;
    int count=0,index=0;

    while(index<s.size()){
        if(s[index]==" "){
            int postion=temp[temp.size()-1-'0'];

            temp.pop_back();

            ans[postion]=temp;
            temp.clear();
            count++;

        }
        else{
            temp+=s[index];
        }
    }
    
    for(int i=0;i<count;i++){
        temp+=ans[i];
        temp+=" ";
    }

    temp.pop_back();
    
    return temp;
}