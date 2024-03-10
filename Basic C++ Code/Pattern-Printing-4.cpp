#include <iostream>
using namespace std;

int main()
{

    // Super hard Pattern Printing

    //     *
    //    ***
    //   *****
    //  *******
    // *********

    // int n;
    // cout<<"Enter a Number : ";
    // cin>>n;

    // for (int row = 1; row <=n; row++)
    // {
    //     for (int space = 1; space <=n-row; space++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int star = 1; star <=(2*row)-1; star++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //     1
    //    121
    //   12321
    //  1234321
    // 123454321

    // int n;
    // cout<<"Enter your Number : ";
    // cin>>n;

    // for (int row = 1; row <=n; row++)
    // {
    //     for (int space = 1; space <=n-row; space++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int num1 = 1; num1 <=row; num1++)
    //     {
    //         cout<<num1;
    //     }
    //     for (int num2 = row-1; num2 >=1; num2--)
    //     {
    //         cout<<num2;
    //     }
    //     cout<<endl;
    // }

    // *********
    //  *******
    //   *****
    //    ***
    //     *

    // int n;
    // cout<<"Enter Your Number : ";
    // cin>>n;

    // for (int row = n; row >=1; row--)
    // {
    //     for (int space = 1; space <= n-row; space++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int num1 = 1; num1 <= 2*row-1; num1++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //  ********
    //  ***  ***
    //  **    **
    //  *      *

    // int n;
    // cout<<"Enter Your Number : ";
    // cin>>n;

    // for (int row = 4; row >=1; row--)
    // {
    //     for (int num1 = 1; num1 <= (2*row)/2; num1++)
    //     {
    //         cout<<"*";
    //     }
    //     for (int space = 1; space <= 2*n-2*row; space++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int num2 = 1; num2 <= (2*row)/2; num2++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // * * * * * * * *
    // * * *     * * *
    // * *         * *
    // *             *
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *

    // int n;
    // cout<<"Enter Your Number : ";
    // cin>>n;

    // for (int row = 4; row >=1; row--)
    // {
    //     for (int num1 = 1; num1 <= row; num1++)
    //     {
    //         cout<<"* ";
    //     }
    //     for (int space = 1; space <= 2*n-2*row; space++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (int num2 = 1; num2 <= row; num2++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //  for (int row = 1; row <=n; row++)
    // {
    //     for (int num1 = 1; num1 <= row; num1++)
    //     {
    //         cout<<"* ";
    //     }
    //     for (int space = 1; space <= 2*n-2*row; space++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (int num2 = 1; num2 <= row; num2++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // *            * 
    // * *        * *
    // * * *    * * *
    // * * * ** * * *
    // * * *    * * * 
    // * *        * *
    // *            *
 

    // int n;
    // cout << "enter YOur Number : ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int num1 = 1; num1 <= row; num1++)
    //     {
    //         cout << " *";
    //     }
    //     for (int space = 1; space <= 2 * n - 2 * row; space++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int num1 = 1; num1 <= row; num1++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int row = n - 1; row >= 1; row--)
    // {
    //     for (int num1 = 1; num1 <= row; num1++)
    //     {
    //         cout << " *";
    //     }
    //     for (int space = 1; space <= 2 * n - 2 * row; space++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int num1 = 1; num1 <= row; num1++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    int n;
    cout<<"Enter Your Number : ";
    cin>>n;

    for (int row = 1; row <=n; row++)
    {
        for (int space = 1; space <=n-row; space++)
        {
            cout<<" ";
        }
        for (int star = 1; star <=row; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int row = n; row >=1; row--)
    {
        for (int space = 1; space <=n-row; space++)
        {
            cout<<" ";
        }
        for (int star = 1; star <=row; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}