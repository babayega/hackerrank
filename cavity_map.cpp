#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector< vector<char> > mat;
    for(int i=0;i<n;++i)
    {
        vector<char> p;
        p.resize(n);
        mat.push_back(p);
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"output\n";
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
                cout<<mat[i][j];
            else if(mat[i][j]<=mat[i-1][j] || mat[i][j]<=mat[i][j-1] || mat[i][j]<=mat[i][j+1] || mat[i][j]<=mat[i+1][j])
                cout<<mat[i][j];
            else
                cout<<'X';
        }
        cout<<"\n";
    }
    return 0;
}