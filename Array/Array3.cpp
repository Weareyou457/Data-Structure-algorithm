#include <iostream>
using namespace std;

int main()
{
    // SORTING

    // ------------------------SELECTION SORT

    // int n;
    // cin>>n;

    // int arr[n];

    // for (int i = 0; i <n; i++)
    // {
    //     cin>>arr[i];
    // }

    // for (int i = 0; i <n-1; i++)
    // {
    //     int index=i;

    //     for (int j = i+1; j <n; j++)
    //     {
    //         if(arr[index]>arr[j]){
    //             index=j;
    //         }
    //     }

    //     swap(arr[i],arr[index]);

    // }

    // for (int i = 0; i <n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // sabsse bada wala last me chiye usko

    // int n;
    // cin>>n;

    // int arr[n];

    // for (int i = 0; i <n; i++)
    // {
    //     cin>>arr[i];
    // }

    // for (int i = n-1; i >=0; i--)
    // {
    //     int max=i;

    //     for (int j = i-1; j >=0; j--)
    //     {
    //         if(arr[j]>arr[max]){
    //             max=j;
    //         }
    //     }

    //     swap(arr[i],arr[max]);

    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<"  ";
    // }

    // ------------------------BUBBLE SORT

    // int n;
    // cout << "Enter A Number " << endl;
    // cin >> n;

    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
      
    //     cin >> arr[i];
    // }

    // for (int i = 0; i <n; i++)
    // {
    //     for (int j = 0; j <n; j++)
    //     {
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
        
    // }
    
    
    // for (int i = 0; i < n; i++)
    // {
    //      cout<< arr[i]<<" ";
    // }


    // INSERTION SORT 

    int n;cout<<"Enter A Element : ";
    cin>>n;
    int arrayy[n];

    for (int i = 1; i <=n; i++)
    {
    cin>>arrayy[n];
    }
    
    for (int i = 0; i <n; i++)
    {
        for (int j = i; j >0; j--)
        {
            if(arrayy[j]<arrayy[j-1])
                swap(arrayy[j],arrayy[j-1]);

            else break;
        } 
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arrayy[i]<<" ";
    }
    
   
    
}