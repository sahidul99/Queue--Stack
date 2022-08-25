#include <bits/stdc++.h>
#include "stack.h"
using namespace std;

Stack<int> sortStack(Stack<int> &st)
{
    Stack<int> sorted;
    while (!st.empty())
    {
        int x = st.pop();
        while (!sorted.empty() && sorted.top()>x)
        {
            st.push(sorted.pop());
        }
        sorted.push(x);
        
    }
    return sorted;
    
}

int main()
{
    int n,x;
    Stack<int> st;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        st.push(x);
    }
    Stack<int> sorted = sortStack(st);
    
    while (!sorted.empty())
    {
        cout<<sorted.pop();
    }
    
}