class Solution {
public:
    string convertToTitle(int columnNumber) {
        string rett;
        int temp=columnNumber;
        while(temp>26){
            temp--;
            int rem=(temp%26);
            char tp='A'+rem;
            rett.push_back(tp);
            temp/=26;
        }
        rett.push_back('A'+temp-1);
        reverse(rett.begin(), rett.end());
        return rett;
    }
};