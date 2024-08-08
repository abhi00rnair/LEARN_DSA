class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int count=0;
        for(int i=0;i<n;i++){
            string temp=details[i];
            int  age=(temp[11]-'0')*10+(temp[12]-'0');
            if(age>60){
                count++;
            }
        }
        return count;
    }
};