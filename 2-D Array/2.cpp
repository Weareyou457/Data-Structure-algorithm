#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // create 2D vector

    // vector<vector<int>>matrix;

    vector<vector<int>>matrix(3, vector<int>(4, 1));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    }

    cout<<endl;

    cout<<matrix.size()<<endl;;
    cout<<matrix[0].size();
    cout<<endl;

    
    int n,m;
    cout<<"ENTER ROW AND COLOUMN"<<endl;;
    cin>>n;
    cin>>m;

    vector<vector<int>>alfaiz(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>alfaiz[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<alfaiz[i][j]<<" ";
        }
        cout<<endl;
    }

    
}