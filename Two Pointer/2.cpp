// #include<vector>
// #include<algorithm>
// #include<iostream>
// using namespace std;

// bool divide(vector<int>arr){
//     int max=INT8_MIN;
//     //total sum;

//     int prefix=0,totalsum=0,n=arr.size();
//     for (int i = 0; i <n; i++)
//     {
//         totalsum=totalsum+arr[i];
//     }

//     //prefix
//     for (int i = 0; i <n; i++)
//     {
//         prefix+=arr[i];
//         int ans=totalsum-prefix;
//         if(ans==prefix){
//             return 1;
//         }
//     }

// }

// int main(){
//     cout<<"Size of arr :";
//     int n;cin>>n;
//     vector<int>v(n);

//     for (int i = 0; i <n; i++)
//     {
//         cin>>v[i];
//     }

//     cout<<divide(v);
// }

// KADANES ALGORITM

// #include<vector>
// #include<algorithm>
// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"Size of arr :";
//     int n;cin>>n;
//     vector<int>v(n);

//     for (int i = 0; i <n; i++)
//     {
//         cin>>v[i];
//     }

//     long long maxi=INT16_MIN,prefix=0;

//     for (int i = 0; i < n; i++)
//     {
//         prefix+=v[i];
//         maxi=max(maxi,prefix);
//         if(prefix<0){
//             prefix=0;
//         }
//     }

//     cout<<maxi;

// }

#include <iostream>
using namespace std;
int main()
{

    // int n;
    // cin>>n;

    // int nums[n];

    // for (int i = 0; i <n; i++) {
    //     cin>>n;
    // }
    //     int start=0,end=n-1;
    //     while(start<=end){
    //         if(nums[start]==0){
    //             swap(nums[start],nums[end]);
    //             start++,end--;
    //         }
    //         else if(nums[start]!=0){
    //             start++;
    //         }
    //     }

    // cout<<nums;

    int n, similarElementSum = 0;
    cout << "Enter a size of array : ";
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

        int start=0,end=n-1;
        while(start<=end){
            if(nums[start]==0){
                int store=nums[start];
                
                start++,end--;
              
            }
            else if(nums[start]!=0){
                start++;
            }
        }
        
        for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    }


