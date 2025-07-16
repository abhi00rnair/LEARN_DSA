class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string temp;
        int rett=0;
        while(temp.size()<b.size()){
            temp=temp+a;
            rett++;
        }
        if(temp.find(b)!=string::npos){
            return rett;
        }
        temp=temp+a;
        if(temp.find(b)!=string::npos){
            return rett+1;
        }
        return -1;
    }
};