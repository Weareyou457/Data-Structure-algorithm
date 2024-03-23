#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Create Vector
    vector<int> v;
    vector<int> v1(5, 1);

    // size And capcity
    // cout << "SIZE OF VECTOR " << v.size() << endl;
    // cout << "CAPCITY OF VECTOR " << v.capacity() << endl;

    // v.push_back(10);
    // v.push_back(2);
    // v.push_back(3);

    // cout << "SIZE OF VECTOR " << v.size() << endl;
    // cout << "CAPCITY OF VECTOR " << v.capacity() << endl;

    // Update value in vector

    // v[1] = 5;

    // cout << "SIZE OF VECTOR " << v.size() << endl;
    // cout << "CAPCITY OF VECTOR " << v.capacity() << endl;

    // v1.push_back(5);
    // cout << "SIZE OF VECTOR " << v1.size() << endl;
    // cout << "CAPCITY OF VECTOR " << v1.capacity() << endl;

    // DELTE A VALUE IN VECTOR

    // vector<int> hello;
    // hello.push_back(10);
    // hello.push_back(121);
    // hello.push_back(1123);
    // hello.push_back(141);
    // hello.push_back(1045);

    // hello.pop_back();

    // // cout << "SIZE OF VECTOR " << hello.size() << endl;
    // // cout << "CAPCITY OF VECTOR " << hello.capacity() << endl;

    // hello.erase(v.begin() + 1);
    // // cout << "SIZE OF VECTOR " << hello.size() << endl;
    // // cout << "CAPCITY OF VECTOR " << hello.capacity() << endl;

    // for (int i = 0; i < hello.size(); i++)
    // {
    //     cout<<hello[i]<<" ";
    // }

    // FRONT,END,EMPTY

    // vector<int>arr;

    // arr.push_back(2);
    // arr.push_back(22);
    // arr.push_back(212);
    // arr.push_back(12);

    // cout<<arr.front()<<endl;
    // cout<<arr[0]<<endl;
    // cout<<arr.back()<<endl;
    // cout<<arr[arr.size()-1]<<endl;

    // ITRATOR IN VECTOR IN STL

    // vector<int>a;
    // a=arr;
    // cout<<a.size()<<endl;

    // for(auto it=arr.begin();it!=arr.end();it++){
    //     cout<<*it<<" ";
    // }

    // cout<<endl;

    // for(auto i:arr){
    //     cout<<i<<" ";
    // }

    // SORTING IN VECTOR

    // vector<int> alfaiz;

    // alfaiz.push_back(19);
    // alfaiz.push_back(12);
    // alfaiz.push_back(1532);
    // alfaiz.push_back(163);
    // alfaiz.push_back(01);

    // // Incresaing order

    // sort(alfaiz.begin(), alfaiz.end());

    // for (auto it = alfaiz.begin(); it != alfaiz.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // // sorting in dectreasing order

    // sort(alfaiz.begin(), alfaiz.end(), greater<int>());

    // for (auto it = alfaiz.begin(); it != alfaiz.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // // sorting in dectreasing order

    // sort(alfaiz.rbegin(), alfaiz.rend());
}