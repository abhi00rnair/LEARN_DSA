class Solution {
public:
    int scoreOfString(string s) {
       int i=0;
    int ret=0;
    while(i<s.size()-1){
        //cout<<(int)name[i]<<endl;
        ret+=abs((int)s[i]-(int)s[i+1]);
        i++;
    }
    //cout<<ret;
        return ret;
    }
};