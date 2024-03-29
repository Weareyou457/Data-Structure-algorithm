// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int arr[3][4];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     // WAVE FORM
//     // 1 2 3 4 5 6 7 8 9 10 11 12
//     // 1 5 9 3 10 6 2 3 7 11 4 12 8 4

//     for (int col = 0; col < 4; col++)
//     {
//         if (col % 2 == 0)
//         {
//             // Up to Down

//             for (int i = 0; i < 3; i++)
//             {
//                 cout << arr[i][col] << " ";
//             }
//         }
//         else
//         {
//             for (int i = 3; i >= 0; i--)
//             {
//                 cout << arr[i][col] << " ";
//             }
//         }
//     }
   
// }


// ROTATE MATRIX BY 90 DEGREE

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
    // int arr[4][4];

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // int ans[4][4];
    // for (int i = 0; i <4; i++)
    // {

    //     for (int j = 0; j < 4; j++)
    //     {
    //         ans[j][3-i]=arr[i][j];
    //     }
        
    // }

    //SECOND LOGIC
    
    // for (int i = 0; i <4; i++)
    // {

    //     for (int j = 0; j < 4; j++)
    //     {                                             //transpose 
    //         swap(arr[i][j],arr[j][i]);
    //     }
        
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     int start=0,end=4-1;
    //     while ( start<end){                                  //swapppp
    //         swap(arr[i][start],arr[i][end]);
    //         start++,end--;
    //     }
    // }
    
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<< arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
// }
    


//     class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n= matrix.size();
        
//         //transpose matrix 
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//         //rotate matrix
        
//         for(int i=0;i<n;i++){
//             int start=0,end=n-1;
//             while(start<end){
//                 swap(matrix[i][start],matrix[i][end]);
//             start++,end--;
//                 }
//         }
        
//     }
// };


