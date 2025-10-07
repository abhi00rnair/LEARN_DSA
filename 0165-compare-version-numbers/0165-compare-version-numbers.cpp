class Solution {
public:
    int compareVersion(string version1, string version2) {
        int ptr1=0;
        int ptr2=0;
        int left1=0;
        int left2=0;
        int n=version1.size(), m=version2.size();

        while(ptr1<n || ptr2<m){
            while(ptr1<n && version1[ptr1]!='.'){
                ptr1++;
            }
            while(ptr2<m && version2[ptr2]!='.'){
                ptr2++;
            }
            string tp1=version1.substr(left1,ptr1-left1);
            string tp2=version2.substr(left2, ptr2-left2);
            int num1 = tp1.empty() ? 0 : stoi(tp1);
            int num2 = tp2.empty() ? 0 : stoi(tp2);
            if(num1<num2){return -1;}
            if(num1>num2)return 1;
            if(ptr1<n){ptr1++;}
            if(ptr2<m){ptr2++;}
            left1=ptr1;
            left2=ptr2;
        }
        return 0;
    }
};