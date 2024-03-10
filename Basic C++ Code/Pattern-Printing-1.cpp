#include <iostream>
using namespace std;

int main()
{
    //          PATTERN PRINTING

    // * * * * *

    // for (int i = 1; i <=5; i++)
    // {
    //     cout<<"*"<<" ";
    // }

    // * * * * * *
    // * * * * * *
    // * * * * * *
    // * * * * * *
    // * * * * * *

    // for (int i = 1; i <=5; i++)
    // {
    //     for (int j = 0; j <=5; j++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // another Way

    //  for (int row = 1; row <=5; row++)   //---->row
    // {
    //     for (int coloumn = 0; coloumn <=5; coloumn++)   // | column
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // 10 10 10 10 10 10
    // 10 10 10 10 10 10
    // 10 10 10 10 10 10
    // 10 10 10 10 10 10

    // for (int row = 1; row <= 4; row++) //---->row
    // {
    //     for (int coloumn = 0; coloumn <= 5; coloumn++) // | column
    //     {
    //         cout << 10 << " ";
    //     }
    //     cout << endl;
    // }

    // 1 1 1 1 1
    // 2 2 2 2 2
    // 3 3 3 3 3
    // 4 4 4 4 4
    // 5 5 5 5 5

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int coloumn = 1; coloumn <= 5; coloumn++)
    //     {
    //         cout << row << " ";
    //     }
    //     cout << endl;
    // }

    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int coloumn = 1; coloumn <= 5; coloumn++)
    //     {
    //         cout << coloumn << " ";
    //     }
    //     cout << endl;
    // }

    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int coloumn = 5; coloumn >= 1; coloumn--)
    //     {
    //         cout << coloumn << " ";
    //     }
    //     cout << endl;
    // }

    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int coloumn = 1; coloumn <= 5; coloumn++)
    //     {
    //         cout << coloumn*coloumn << " ";
    //     }
    //     cout << endl;
    // }

    // 1 8 27 64 125
    // 1 8 27 64 125
    // 1 8 27 64 125
    // 1 8 27 64 125
    // 1 8 27 64 125

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int coloumn = 1; coloumn <= 5; coloumn++)
    //     {
    //         cout << coloumn*coloumn*coloumn << " ";
    //     }
    //     cout << endl;
    // }

    // a a a a a
    // b b b b b
    // c c c c c
    // d d d d d
    // e e e e e

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int coloumn = 1; coloumn <= 5; coloumn++)
    //     {
    //         char ch = 'a'+(row-1);
    //         cout <<ch<< " ";
    //     }
    //     cout << endl;
    // }

    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int coloumn = 1; coloumn <= 5; coloumn++)
    //     {
    //         char ch = 'a' + (coloumn - 1);
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // 1 2 3 4 5 
    // 6 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20 
    // 21 22 23 24 25

    // int ch=1;

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int coloumn = 1; coloumn <= 5; coloumn++)
    //     {
    //         cout << ch << " ";
    //         ch=ch+1;
    //     }
    //     cout << endl;
    // }

    for (int row = 1; row <= 5; row++)
    {
        for (int coloumn = 1; coloumn <= 5; coloumn++)
        {
            cout << ((row-1)*5)+coloumn<<" ";
            
        }
        cout << endl;
    }
    
}