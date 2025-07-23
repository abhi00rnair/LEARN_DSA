class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int rett=0;
        string temp;
        string temp2;
        int count1=0,count2=0;
        if(x>y){
            temp="ab";
            count1=x;
            count2=y;
            temp2="ba";
        }else{
            temp="ba";
            count1=y;
            count2=x;
            temp2="ab";
        }
        stack<char>st;
        for(char ch:s){
            if( !st.empty() && st.top()==temp[0] && ch==temp[1]){
                rett+=count1;
                st.pop();
            }else{
                st.push(ch);
            }
        }
        stack<char>st2;
        while(!st.empty()){
            char ch=st.top();
            st.pop();
            if( !st2.empty() && ch==temp2[0] && st2.top()==temp2[1]){
                rett+=count2;
                st2.pop();
            }else{
                st2.push(ch);
            }
        }
        return rett;
    }
};