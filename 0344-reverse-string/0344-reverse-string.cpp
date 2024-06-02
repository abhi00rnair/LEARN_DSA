class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        reverse(s,i,j);
    }
     void swap(char *a, char *b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    void reverse(vector<char>&s, int i, int j){
        if(i<=j){
           swap(&s[i],&s[j]);
            reverse(s,++i,--j);
        }
    }
    
};