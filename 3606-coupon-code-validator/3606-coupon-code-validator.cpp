class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n=code.size();
        unordered_set<string>st{"electronics","grocery","pharmacy","restaurant"};

        vector<pair<string,string>>rett;
        for(int i=0;i<n;i++){
            string name=code[i];
            string purpose=businessLine[i];
            int count=3;
            
            if(!isActive[i]){
                count--;
            }if(!st.count(purpose)){
                count--;
            }
            if(name.empty()){
                count--;
            }
            for(int j=0;j<name.size();j++){
                unsigned char ch=name[j];
                if(!isalnum(ch) && ch!='_'){
                    count--;
                    break;
                }
            }
            if(count==3){
                rett.push_back({purpose,name});
            }
        }
        sort(rett.begin(),rett.end());
        vector<string>temp;
        for(auto it:rett){
            temp.push_back(it.second);
        }
        return temp;

    }
};