#include <iostream>
using namespace std;

int main()
{

    // FIND A KEY

    //     int size;
    //     cin>>size;

    //     int arr[size];

    //     for (int i = 0; i <size; i++)
    //     {
    //         cin>>arr[i];
    //     }
    // int key;
    //     cout<<"Enter a key "<<endl;
    //     cin>>key;

    //     int index =-1;

    //     for (int i = 0; i <size; i++)
    //     {
    //         if(arr[i]==key){
    //             index=i;
    //             break;
    //         }
    //     }

    //     cout<<index;

    // --------------------------------------------------

    // REAVERSE ARRAY

    //     int size;
    //     cin>>size;

    //     int arr[size];

    //     for (int i = 0; i <size; i++)
    //     {
    //         cin>>arr[i];
    //     }

    //    int start=0,end=size-1;

    //    while (start<end)
    //    {
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    //    }

    //     for (int j = 0; j <size; j++)
    //     {
    //         cout<<arr[j]<<" ";
    //     }

    // ----------------------------------------------------

    // SECOND MAXIMUM AND SECOND LARGEST

    int size;
    cin>>size;

    int arr[size];
    int ans=INT8_MIN;

    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i <size; i++)
    {
        if(arr[i]>ans){
            ans= arr[i];
        }
    }

    cout<<ans<<endl;

    int SECOND_LARGEST = INT8_MIN;
    for (int i = 0; i <size; i++)
    {
        if(ans != arr[i]){
            SECOND_LARGEST=max(SECOND_LARGEST,arr[i]);
        }
    }

    cout<<SECOND_LARGEST;

    // MISSING NUMBER

    // int N;
    // cin>>N;

    // int size=N-1;
    // int arr[size];
    // int sum =0;

    // for (int i = 0; i <size; i++)
    // {
    //     cin>>arr[i];
    // }

    // for (int i = 0; i <size; i++)
    // {
    //     sum = sum + arr[i];
    // }

    // int SumofN = N*(N+1) / 2;

    // cout<<SumofN-sum;

    // --------------------------------------------------

    // FIBBONACCI NUMBER PRINT

    // int N;

    // cout<<"Enter A Number";
    // cin >> N;

   
    // int arr[100];

    //  arr[0] = 0;
    //  arr[1] = 1;
    // int sum = 0;


    //     for (int i = 2; i < N; i++)
    //     {
    //       arr[i] = arr[i-1]+arr[i-2];
    //     }

    //     cout<<arr[N-1];


// --------------------------------------------------

    // FIBBONACCI NUMBER PRINT

    // int size;

    // cout<<"Enter A Size";
    // cin >> size;

   
    // int arr[size];

    // for (int i = 0; i <size; i++)
    // {
    //     cin>>arr[i];
    // }
    
    // int temp = arr[size-1];

    // for (int i = size -2 ; i >=0; i--)
    // {
    //     arr[i+1] = arr[i];
    // }
    
    // arr[0]=temp;

    // for (int i = 0; i <size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }


// ----------------------------------------------------

// PASS FUNCTION IN ARRAY 

// void fun(int arr[], int n ){
//     for (int i = 0; i <n; i++)
//     {
//         cout<<arr[i];
//     }
// }

//pass // fun(arr,5) 

}