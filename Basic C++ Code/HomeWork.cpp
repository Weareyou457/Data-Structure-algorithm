#include <iostream>
using namespace std;

// int main()
// {

    //  444444
    //  444444
    //  444444
    //  444444
    //  444444
    //  444444

    // int n;
    // cout<<"Enter a Number : ";
    // cin>>n;

    // for (int row = 1; row <=n; row++)
    // {
    //     for (int col = 1; col <=n; col++)
    //     {
    //         cout<<4;
    //     }
    //     cout<<endl;
    // }

    //  1 4 9 16 25
    //  1 4 9 16 25
    //  1 4 9 16 25
    //  1 4 9 16 25
    //  1 4 9 16 25

    // int n;
    // cout << "Enter a Number : ";
    // cin >> n;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n; col++)
    //     {
    //         cout << col * col << " ";
    //     }
    //     cout << endl;
    // }

    // 1 8 27 64 125
    // 1 8 27 64 125
    // 1 8 27 64 125
    // 1 8 27 64 125
    // 1 8 27 64 125

    // int n;
    // cout << "Enter a Number : ";
    // cin >> n;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n; col++)
    //     {
    //         cout << col * col * col << " ";
    //     }
    //     cout << endl;
    // }

    //  F G H I J K
    //  F G H I J K
    //  F G H I J K
    //  F G H I J K
    //  F G H I J K
    //  F G H I J K

    // int n;
    // cout << "Enter a Number : ";
    // cin >> n;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n; col++)
    //     {
    //         char ch = 'F' + col - 1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    // 1 2 3 4 5 6

    // int n;
    // cout << "Enter A number : ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    //  A
    //  A B
    //  A B C
    //  A B C D
    //  A B C D E

    // int n;
    // cout << "Enter A number : ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         char ch='A'+col-1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // 10
    // 10 11
    // 10 11 12
    // 10 11 12 13
    // 10 11 12 13 14
    // 10 11 12 13 14 15

    // int n;
    // cout << "Enter A number : ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //        int ch=10+col-1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // A B C D
    // A B C
    // A B
    // A

    // int n;
    // cout << "Enter A number : ";
    // cin >> n;

    // for (int row = n; row >=1; row--)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //        char ch='A'+col-1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    //         1
    //       2 1
    //     3 2 1
    //   4 3 2 1
    // 5 4 3 2 1

    // int n;
    // cout << "Enter Your NUmber : ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int space = 1; space <= (n - row); space++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int number = row; number >= 1; number--)
    //     {
    //         cout << number << " ";
    //     }
    //     cout << endl;
    // }

    //         A
    //       B B
    //     C C C
    //   D D D D
    // E E E E E

    // int n;
    // cout << "Enter Your NUmber : ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int space = 1; space <= (n - row); space++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int number = row; number >= 1; number--)
    //     {
    //         char ch='A'+row-1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter Your Number : ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int space = 1; space <= (n - row); space++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int number = row; number >= 1; number--)
    //     {
    //         int hello= n-row;
    //         cout << hello << " ";
    //     }
    //     cout << endl;
    // }

//  int hello(int n){
//     int reminder=0,ans=0;

//     while(n>0){
//     reminder= n%10;
//     ans=reminder*reminder +ans;
//     n=n/10 ;
//     }

//     return ans;
 
// };

// int main(){

//     int neww;
//     cin >> neww;
//     int alfaiz=0;
    
//     while (alfaiz==1)
//     {
//         alfaiz=hello(neww);
//     }
    
//     if(alfaiz==0){
//         cout<<"0";
//     }
//     else{
//         cout<<"1";
//     }
    
    

   
    
// }
int main(){
    int n;
    cin>>n;

if(n<=0){
    cout<<"false"<<endl;
}
else{
   for (int i = 1; i <=n; i++)
   {
    if(i*i*i == n){
        cout<<i<<endl;
    }
   }
}
}

// 3 0 1
// 0 1 2 3 

    
    



