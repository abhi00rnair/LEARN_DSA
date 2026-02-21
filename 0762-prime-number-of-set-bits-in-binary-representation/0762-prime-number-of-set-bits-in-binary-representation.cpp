class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int rett=0;
        for(int i=left;i<=right;i++){
            string tp=func1(i);
            rett+=func2(tp);
        }
        return rett;
    }
    string func1(int num){
        string rett;
        while(num){
            rett+=to_string(num%2);
            num/=2;
        }
        reverse(rett.begin(), rett.end());
        return rett;
    }

    int func2(string&rett){
        int count=0;
        for(char ch:rett){
            if(ch=='1'){
                count++;
            }
        }
        unordered_set<int>st={2,3,5,7,11,13,17,19,23,29,31};
        if(st.count(count)){
            return 1;
        }
        return 0;
    }
    
};