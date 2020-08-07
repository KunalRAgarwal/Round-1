#include <iostream>
#include<bits/stdc++.h>

using namespace std;

 bool isValid(string s) {
        if(s.size()==0)
            return true;

        stack<char>sy;
        int i,j,k;
        j=s.size();
        for(i=0;i<j;i++)
        {
            char curr=s[i];
            if(curr=='{' || curr=='[' || curr=='(')
                sy.push(curr);
            else if(curr=='}' || curr==']' || curr==')')
            {
                if(sy.size()==0)
                    return false;
                char y=sy.top();
                sy.pop();
                 if(curr=='}')
                {

                    if(y=='(' || y=='[')
                        return false;

                }
                       else if(curr==']')
                {

                    if(y=='(' || y=='{')
                        return false;

                }
                    else if(curr==')')
                {

                    if(y=='[' || y=='{')
                        return false;

                }


            }
            else
                return false;

        }
        if(sy.size()>0)
            return false;
        return true;

    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool ans=isValid(s);
        if(ans==true)
        cout<<"YES"<<endl;
        else
        cout<<"No"<<endl;
    }

    return 0;
}
