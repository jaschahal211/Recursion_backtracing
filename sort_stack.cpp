#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    void sortStack(stack<int> &st) {
        if(st.size()>0){
        int x=st.top();
        st.pop();
        sortStack(st);
        insert_corr(x,st);
        }
    }
    void insert_corr(int x,stack<int>&st)
    {
        if(st.empty()||st.top()<x)
        {
            st.push(x);
        }
        else
        {
            int a=st.top();
            st.pop();
            insert_corr(x,st);
            st.push(a);
        }

    }
};