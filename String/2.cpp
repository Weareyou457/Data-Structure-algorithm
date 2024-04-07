#include<iostream>
using namespace std;

    void rotateclockwise(string &s){
        char c=s[s.size()-1];
        int index=s.size()-2;
        while(index>=0){
            s[index+1]=s[index];
            index--;
        }
        s[0]=c;

    }

    void rotateanticlockwise(string &s){
        char c=s[0];
        int index=1;
        while(index<s.size()){
            s[index-1]=s[index];
            index++;
        }
        s[s.size()-1]=c;
    }
    
int main(){

    // 1108 LEETCODE 
    int length;
    cout<<"enter a length : ";
    cin>>length;

    string address;
    cout<<"Enter a String : ";
    cin>>address;

    int index=0;string ans;
    while(index<address.size()){
        if(address[index]=='.'){
            ans=ans+"[.]";
        }
        else{
            ans=ans+address[index];
        }
        index++;
    }
    cout<<ans<<endl;

    //function
    //GREEKFOR GREEK


    // string str1;
    // cout<<"Enter a String : ";
    // cin>>str1;

    //   string str2;
    // cout<<"Enter a String : ";
    // cin>>str2;

    // string clockwise=str1,anticlockwise=str2;
    // rotateclockwise(clockwise);
    // rotateclockwise(clockwise);
    // if(str1==str2)
    // return 1;

    // rotateanticlockwise(anticlockwise);
    // rotateanticlockwise(anticlockwise);
    // if(str1==str2)
    //     return 1;


    //LEETCODE 1832

    string sentence;
    cin>>sentence;

    // vector<bool>alpha(26,0);

    for (int i = 0; i < sentence.size();i++ )
    {
        int index=sentence[i]-'a';
        alpha[index]=1;
    }

    for (int i = 0; i < 26; i++)
    {
        if(alpha[i]==0){
            return 0;
        }
        else{
            return 1;
        }

    }


    string sentence;
    cin>>sentence;

    // vector<bool>alpha(26,0);

    for (int i = 0; i < sentence.size();i++ )
    {
        int index=sentence[i]-'a';
        alpha[index]++;
    }

    string ans;
    for (int i = 0; i < 26; i++)
    {
        char c='a'+i;
        while(alpha[i]){
            ans+=c;
            alpha[i]--;
        }

    }
    
    
}