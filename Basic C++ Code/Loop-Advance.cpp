#include <iostream>
using namespace std;

int main()
{
    // for (int i = 101; i <= 200; i++)
    // {
    //     cout << i << " ";
    // }

    // Print A to Z charcheter

    // for (char i = 'A'; i <='Z'; i++)
    // {
    //     cout<<i<<" ";
    // }

    //  for (int i = 66; i <=97; i++)
    // {
    //     char ch=i;
    //     cout<<ch<<" ";
    // }

    // ulti Ginti

    // for (int i = 10; i>=1; i=i-1)
    // {
    //     cout<<i<<" ";
    // }

    // int n;
    // cout<<"Enter a Number : ";
    // cin>>n;

    // for (int i = n; i>=1; i=i-1)
    // {
    //     cout<<i<<" ";
    // }

    // 3 jump

    // for (int i = 1; i<=100; i=i+3)
    // {
    //     cout<<i<<" ";
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"One to Nine"<<i<<" ";
    // }

    // N ki table

    // int n;
    // cout<<"Enter Table Number : ";
    // cin>>n;

    // for (int i = 1; i <=10; i++)
    // {
    //     cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    // }

    // power of number

    // int n, power;
    // cout << "Enter The Number : ";
    // cin >> n;
    // cout << "Enter The Power : ";
    // cin >> power;

    // int num = n;

    // for (int i = 1; i < power; i++)
    // {
    //     num = num * n;
    // }
    // cout << num;

    // Sum of n natural number

    // int n;
    // cout<<"Enter Your Number : ";
    // cin>>n;
    // int sum=0;
    // for (int i = 1; i <=n; i++)
    // {
    //     sum = sum + i ;
    // }
    // cout<<"Sum is "<<sum;

    // int n;
    // cout << "Enter Your Number : ";
    // cin >> n;
    // int sum = (n * (n + 1)) / 2;
    // cout << "Sum is " << sum;

    // Factorial of n natural number

    // int n;
    // cout << "Enter Your Number : ";
    // cin >> n;
    // long long int fact = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     fact = fact * i;
    // }
    // cout << "factorial of Number : " << n << " -> " << fact;

    // Prime Number

    // int n;
    // cout << "Enter Your Number : ";
    // cin >> n;

    // if(n==2){
    //     cout<<"Not a Prime Number";
    //     return 0;
    // }

    // bool isprime = 1;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isprime = 0;
    //         cout<<"Not Prime";
    //         return 0;
    //     }
    // }

    // if (isprime == 1)
    //     cout << "Prime Number";

    //Fibonnacii number 

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    cout<<0<<" "<<1<<" ";
    int last =1,prevoius =0,current=0;
    for (int i = 1; i <=n; i++)
    {
        current=prevoius+last;
        cout<<current<<" ";
        prevoius = last;
        last=current;
    }

   
    
}