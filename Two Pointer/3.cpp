

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a size of array : ";
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    // int temp= nums[0];
    // for(int i=0;i<n;i++){
    
    // nums[i]=nums[i+1];
    // }
    // nums[n-1]=temp;
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<nums[i]<<" ";
    // }

    // int n=digits.size(),
    int ans=0;
        for(int i=1;i<=n;i++){
            ans=ans+nums[i]*1*pow(0,n)
        }
        cout<<ans;
}
