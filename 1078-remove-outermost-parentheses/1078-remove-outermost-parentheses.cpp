class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<int>arr;
        int size=s.size();
        stack<char>st;
        //st.push(s[0]);
        int left=0,right=0;
        for(int i=0;i<size;i++){
            if(s[i]=='('){right++;}
            if(s[i]==')'){left++;}
            if(right==left){
                right=0;left=0;
                arr.push_back(i);
            }
        }
        int strtindex=0;
        string rett;
        for(int i=0;i<arr.size();i++){
            int endindex=arr[i];
            int tp=endindex-strtindex+1;
            if(tp>2){
                string sub=s.substr(strtindex+1,tp-2);
                rett=rett+sub;
            }/*else{
                string sub=s.substr(strtindex,2);
                rett=rett+sub;
            }*/
            strtindex=endindex+1;
        }
        return rett;
        
    }
};