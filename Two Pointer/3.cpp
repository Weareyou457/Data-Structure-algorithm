/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
    int temp= nums[0];
    for(int i=0;i<n;i++){
    
    nums[i]=nums[i+1];
    }
    nums[n-1]=temp;
    
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
}
