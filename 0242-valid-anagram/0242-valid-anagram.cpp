class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }else{
            int arr[26];
            for(int i=0;s[i]!='\0';i++){
                int temp1=s[i]-97;
                int temp2=t[i]-97;
                arr[temp1]++;
                arr[temp2]--;
            }
            for(int i=0;i<26;i++){
                if(arr[i]!=0){
                    return false;
                }
            }
        }
        return true;
    }
};