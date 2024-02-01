// 739. Daily Temperatures
// https://leetcode.com/problems/daily-temperatures/description/
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int y=st.top();
                st.pop();
                int x=st.top();
                st.pop();
                int z;
                if(tokens[i]=="+") z=x+y;
                else if(tokens[i]=="-") z=x-y;
                else if(tokens[i]=="*") z=x*y;
                else{
                    z=x/y;
                }
                st.push(z);
            }
            else{
                st.push(stoi(tokens[i]));  // stoi converts string to integer
            }
        }
        return st.top();
    }
};