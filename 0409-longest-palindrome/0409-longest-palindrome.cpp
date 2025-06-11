class Solution {
public:
    int longestPalindrome(string s) {
        int odd=0;
        int even=0;
        int flag=1;
        map<char,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }

        for(auto it :mp){
            if(it.second%2==0){
                even=even+it.second;
            }else{
                odd=odd+it.second-1;
                flag=0;
            }
        }
        int rett=odd+even;
        if(flag==0){
            return rett+1;
        }
        return rett;;
        
    }
};