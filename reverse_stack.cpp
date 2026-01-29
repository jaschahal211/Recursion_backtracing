#include<iostream>
using namespace std;
#include<stack>
class Solution {
public:
    void reverseStack(stack<int> &st) {
        // Your code goes here
        if(st.size()>0){
        int x=st.top();
        st.pop();
        reverseStack(st);
        reverse(x,st);
        }
    }
        void reverse(int x,stack<int>&st)
        {
            if(st.empty())
            {
                st.push(x);
            }
            else
            {
                int a=st.top();
                st.pop();
                reverse(x,st);
                st.push(a);
            }
        }

};