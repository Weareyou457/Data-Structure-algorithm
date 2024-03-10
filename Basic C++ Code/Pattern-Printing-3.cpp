#include <iostream>
using namespace std;

int main(){

    //      *
    //     **
    //    ***
    //   ****
    //  *****
    // ******

    // int n;
    // cout<<"Enter a Number : ";
    // cin>>n;

    // for (int row = 1; row <=n; row++)
    // {
    //     for (int space = 1; space <=n-row; space++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int star = 1; star <=row; star++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //     1
    //    12
    //   123
    //  1234
    // 12345

    // int n;
    // cout<<"Enter a Number : ";
    // cin>>n;

    // for (int row = 1; row <=n; row++)
    // {
    //     for (int space = 1; space <=n-row; space++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int num = 1; num <=row; num++)
    //     {
    //         cout<<num;
    //     }
    //     cout<<endl;
    // }

    //     1
    //    22
    //   333
    //  4444
    // 55555

    // int n;
    // cout<<"Enter a Number : ";
    // cin>>n;

    // for (int row = 1; row <=n; row++)
    // {
    //     for (int space = 1; space <=n-row; space++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int num = 1; num <=row; num++)
    //     {
    //         cout<<row;
    //     }
    //     cout<<endl;
    // }

    //     1
    //    12
    //   123
    //  1234
    // 12345

    // int n;
    // cout<<"Enter a Number : ";
    // cin>>n;

    // for (int row = 1; row <=n; row++)
    // {
    //     for (int space = 1; space <=n-row; space++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int num = 1; num<=row;num++)
    //     {
    //         cout<<num;
    //     }
    //     cout<<endl;
    // }

    //     A
    //    AB
    //   ABC
    //  ABCD
    // ABCDE
    
    // int n;
    // cout<<"Enter a Number : ";
    // cin>>n;

    // for (int row = 1; row <=n; row++)
    // {
    //     for (int space = 1; space <=n-row; space++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int num = 1; num<=row;num++)
    //     {
    //         char ch='A'+(num-1);
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }

    //    1
    //   21
    //  321
    // 4321

       int n;
    cout<<"Enter a Number : ";
    cin>>n;

    for (int row = 1; row <=n; row++)
    {
        for (int space = 1; space <=n-row; space++)
        {
            cout<<" ";
        }
        for (int num = row; num>=1;num--)
        {
            cout<<num;
        }
        cout<<endl;
    }


    

}