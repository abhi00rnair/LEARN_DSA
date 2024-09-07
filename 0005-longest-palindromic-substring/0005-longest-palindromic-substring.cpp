class Solution {
public:
    string longestPalindrome(string s) {
        int startindex=0;
        int maxlen=1;
        int n=s.length();
        if(n==0){return "";}
        for(int i=0;i<n;i++){
            for(int j=0;j<=1;j++){
                int low=i;
                int high=i+j;
                while(low>=0 && high<n && s[low]==s[high]){
                    int temp=high-low+1;
                    if(temp>maxlen){
                    startindex=low;
                    maxlen=temp;
                    }
                low--;
                high++;
                }
            }
        }
        return s.substr(startindex,maxlen);
    }
};