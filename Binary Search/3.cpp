#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 1; i <=n; i++)
    {
        cin>>arr[i];
    }
    
    int maxprofit=0,count=0,result=0,min=arr[0];
    for(int i=0;i<n;i++){
                if(min>arr[i]){
                    min=arr[i];
                    cout<<"min : "<<min<<endl;
                }  
        
        
                result=arr[i]-min;
                cout<<result<<endl;
                if(maxprofit<result){
                    maxprofit=result;
                    count++;
                }
                
        
        }
       if(count==0){
           cout<<-1;
       }
        else{
            cout<<maxprofit;
        }
    
    
}