class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        int left=0;
        int a=0,b=0,c=0;
        int n=s.length();
        for(int right=0;right<n;right++){
            if(s[right]=='a'){a++;}
            if(s[right]=='b'){b++;}
            if(s[right]=='c'){c++;}

            while(a>0 && b>0 && c>0){
                count+=n-right;
            if(s[left]=='a'){a--;}
            if(s[left]=='b'){b--;}
            if(s[left]=='c'){c--;}
            left++;
            }
        }
        return count;
    }
};