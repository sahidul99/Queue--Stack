#include <bits/stdc++.h>
#include "que.h"

using namespace std;

int main()
{
    int n,x,m;
    cin>>n;
    Que <int> q;
    int max = INT_MIN;
    for(int i=0; i<n;i++)
    {
        cin>>x;
        q.push(x);
        if(x > max)
            max = x;
    }
    int freq[max+1] = {0};

    for(int i=0;i<n;i++)
    {
        int k = q.pop();
        freq[k]++;
        q.push(k);

    }

    cin>>m;
    int arr[m];
    for(int i = 0;i<m;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<m;i++)
    {
        if(arr[i]>max)
            cout<<-1<<endl;
        else
             cout<<freq[arr[i]]<<endl;
    }
    return 0;
}