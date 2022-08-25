#include <bits/stdc++.h>
#include "stack.h"

using namespace std;

int main()
{
    string n;
    cin>>n;
    Stack<char> st;
    bool balanced = true;

    for(int i=0;i<n.size() && balanced ;i++)
    {
        //cout<<"checking "<<n[i]<<endl;
        if(n[i]=='(' || n[i]=='{' || n[i]=='[' )
        {
            st.push(n[i]);
        }

        else
        {
            if(st.empty())
                balanced =false;
            else if(n[i] == ')' && st.top()=='(' )
                st.pop();
            else if(n[i] == '}' && st.top()=='{' )
                st.pop();
            else if(n[i] == ']' && st.top()=='[' )
                st.pop();
            else
                balanced = false;
        }

    }

    if(balanced && st.empty())
        cout<<"Balanced"<<endl;
    else
        cout<<"Not balanced"<<endl;
    return 0;
}