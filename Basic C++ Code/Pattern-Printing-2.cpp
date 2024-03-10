#include <iostream>
using namespace std;

int main()
{

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    // for (int row = 1; row <=5; row++)
    // {
    //     for (int coloumn = 1; coloumn <=row; coloumn++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    // for (int row = 1; row <=5; row++)
    // {
    //     for (int coloumn = 1; coloumn <=row; coloumn++)
    //     {
    //         cout<<coloumn<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    // for (int row = 1; row <=5; row++)
    // {
    //     for (int coloumn = 1; coloumn <=row; coloumn++)
    //     {
    //        cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1

    // for (int row = 1; row <=5; row++)
    // {
    //     for (int coloumn = row; coloumn >=1; coloumn--)
    //     {
    //        cout<<coloumn<<" ";
    //     }
    //     cout<<endl;
    // }

    // A
    // B B
    // C C C
    // D D D D
    // E E E E E

    // for (int row = 1; row <=5; row++)
    // {
    //     for (int coloumn = 1; coloumn <=row; coloumn++)
    //     {
    //         char ch = 'A'+(row-1);
    //        cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int coloumn = 1; coloumn <= 5 - (row - 1); coloumn++)
    //     {
    //         cout << "*"
    //              << " ";
    //     }
    //     cout << endl;
    // }

    // 1 2 3 4 5 
    // 1 2 3 4
    // 1 2 3 
    // 1 2
    // 1

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int coloumn = 1; coloumn <= 5 - (row - 1); coloumn++)
    //     {
    //         cout << coloumn<< " ";
    //     }
    //     cout << endl;
    // }

    // 5 
    // 4 4
    // 3 3 3
    // 2 2 2 2
    // 1 1 1 1 1

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int coloumn = 1; coloumn <= row; coloumn++)
    //     {
            
    //         cout <<5-(row-1)<< " ";
    //     }
    //     cout << endl;
    // }

    // 5 
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1
    
    for (int row = 1; row <= 5; row++)
    {
        for (int coloumn = 5; coloumn >= 5-(row-1); coloumn--)
        {
            
            cout <<coloumn<< " ";
        }
        cout << endl;
    }


}