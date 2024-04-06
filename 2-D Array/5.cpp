// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[3][3];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int sum=0;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if(i==j)
//             sum=sum+arr[i][j];
//         }
//     }

// cout<<"SUM : "<<sum<<endl;

//     int gullab=0;
//            int last=2;
//             int first=0;
//             while(last!=-1){
//                 if(last!=first){
//                 gullab=gullab+arr[first][last];
//                 }

//                 last--,first++;
//             }

// cout<<"SUM : "<<gullab<<endl;

//     cout<<sum+gullab<<endl;

//     // PRINT

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

// }

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int minr = INT8_MAX;
        for (int j = 0; j < 3; j++)
        {

            minr = min(minr, arr[i][j]);
        }

        for (int j = 0; j < 3; j++)
        {
            int maxc = INT8_MIN;

            for (int i = 0; i < 3; i++)
            {

                maxc = max(maxc, arr[i][j]);
            }
        }
    }

    cout << endl;
    // PRINT

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}