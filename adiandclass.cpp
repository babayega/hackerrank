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
    vector< pair<int,int> > classes(n);
    for(int i=0;i<n;++i)
        cin>>classes[i].first>>classes[i].second;
    sort(classes.begin(), classes.end());
    for(int i=0;i<n;++i)
        cout<<classes[i].first<<" "<<classes[i].second;
    return 0;
}
