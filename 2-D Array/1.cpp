#include <iostream>
using namespace std;

void twoarray(int arr[][4], int row, int col)
{
    // coloumn wise print
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

int main()
{

    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // print

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
    }

    // print using function
    twoarray(arr, 3, 4);

    // Find an Element in our array
    int x = 7;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

    // ADD TWO MATRIX
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {13, 23, 23, 123, 65, 67, 89, 76, 54, 43, 23, 43};
    int arr3[3][4];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            arr3[row][col] = arr1[row][col] + arr2[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr3[row][col] << " ";
        }
    }

    // Print ROW INDEX WITH MAXIMUM SUM
    int sum[3][4] = {1, 5, 40, 5, 3, 6, 7, 4, 3, 2, 12, 3};

    int maxsum = INT8_MIN, index = -1;
    for (int row = 0; row < 3; row++)
    {
        int total = 0;
        for (int col = 0; col < 4; col++)
        {
            total = total + sum[row][col];
        }
        if (maxsum < total)
        {
            maxsum = total;
            index = row;
        }
    }

    cout << "maximum" << maxsum << " "
         << "index" << index;

    // SUM of diagonal
    int dialognal[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int firstdigaonal = 0, second = 0;
    int i = 0, j = 3 - 1;
    while (i < 3)
    {
        firstdigaonal = firstdigaonal + dialognal[i][i];
        i++;
    }

    // Second diagonal
    i = 0, j = 3 - 1;
    while (j >= 0)
    {
        second = second + dialognal[i][j];
        i++, j--;
    }

    cout << " First : " << firstdigaonal << " second : " << second << endl;

    // REVERSE EACH ROW OF MATRIX
    int reverse[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for (int row = 0; row < 3; row++)
    {
        int start=0,end=3-1;
        while(start<end){
            swap(reverse[i][start],reverse[i][end]);
            start++,end--;
        }
    }
}