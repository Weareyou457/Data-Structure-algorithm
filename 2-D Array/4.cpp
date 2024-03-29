// rotate 180 degree

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[4][4];

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

// //swap column

// for (int j = 0; j <4; j++)
// {
//     int start=0,end=4-1;
//     while (start<end)
//     {
//         swap(arr[start][j],arr[end][j]);
//         start++,end--;
//     }

// }

// //ROw SWAP

// for (int i = 0; i <4; i++)
// {
//     int start=0,end=4-1;
//     while (start<end)
//     {
//         swap(arr[i][start],arr[i][end]);
//         start++,end--;
//     }

// }

// //PRINT

// for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout<< arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// 90 Degree Anti Clock Wise Move

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[4][4];

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     // TRANSPOSE

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }

//     //REVERSE ROW 

//     for (int i = 0; i < 4; i++)
//     {
//        int start=0,end=4-1;
//        while(start<end){
//         swap(arr[i][start],arr[i][end]);
//         start++,end--;
//        }
//     }
    

//     // PRINT

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// Matrix by K time 

#include <iostream>
using namespace std;

int main()
{
    int arr[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

  
    

    // PRINT

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}