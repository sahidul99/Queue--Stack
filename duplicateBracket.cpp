#include <bits/stdc++.h>
#include "stack.h"

using namespace std;

bool duplicateAvailable(string s)
{
    int i=0;
    Stack<char> st;
   
    for (int i =0; i<s.size();i++ )
    {
        if(s[i] == ')' )
        {
            st.pop();
            bool innerel = false;
            while (st.top() != '(' )
            {
                innerel = true;
                st.pop();
            }
            if(!innerel)
                return true;
            
        }else{
            st.push(s[i]);
        }
    }
    return false;
    
}
int main()
{
    string s;
    cin>>s;
    if (duplicateAvailable(s))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}