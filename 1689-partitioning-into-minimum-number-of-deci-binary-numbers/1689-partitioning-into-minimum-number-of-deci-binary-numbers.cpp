class Solution {
public:
    int minPartitions(string n) {
        int rett=0;
        for(int i=n.size()-1;i>=0;i--){
            rett=max(rett,n[i]-'0');
            if(rett==9){break;}
        }
        return rett;
    }
};