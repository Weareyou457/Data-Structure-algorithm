#include<iostream>
using namespace std;

int main(){

    //int arr[5]={1,2,3,4,5};   //array declare
    // int arr[6]={1,2,3};   //array and last me garbage
    // int arr[5]={0};   //array declare

    // for (int i = 0; i <=5; i++)
    // {
    //     cout<<arr[i];
    // }


    // int size;
    // cin>>size;

    // int arr[size];

    // for (int i = 0; i <size; i++)
    // {
    //     cin>>arr[i];
    // }
    
    // for (int i = 0; i <size; i++)
    // {
    //     cout<<arr[i];
    // }
    

    // int arr[5]={1,2,3,4,5};    

    // cout<<arr[0]; //1
    // cout<<arr[5];  // out of the bound 
    // cout<<endl;
    // int a;
    // cout<<sizeof(a)<<endl;
    // cout<<sizeof(arr[0])<<endl;
    // cout<<sizeof(arr);
    

    //maximum of array

    // int arr[5]={23,14,154,1,41};

    // int ans=INT64_MIN;


    // for (int i = 0; i <5; i++)
    // {
    //     if(ans<arr[i]){
    //         ans=arr[i];
    //     }
       
    // }

    // cout<<ans<<endl;




    
    //manimum of array

    // int arr[5]={23,14,154,1,41};

    // int ans=INT8_MAX;

    // for (int i = 0; i <5; i++)
    // {
    //     if(ans>arr[i]){
    //         ans=arr[i];
    //     }
       
    // }

    // cout<<ans<<endl;


    //Sum of array

    int arr[5]={23,14,154,1,41};

    int ans=0;

    for (int i = 0; i <5; i++)
    {
     ans=ans+arr[i];  
    }

    cout<<ans<<endl;
    
    
    
}