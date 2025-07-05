class Solution {
public:
    string multiply(string num1, string num2) {
        int n1=num1.size();
        int n2=num2.size();
        if(num1=="0" || num2=="0"){
            return "0";
        }
        vector<int>temp(n1+n2,0);

        for(int i=n2-1;i>=0;i--){
            for(int j=n1-1;j>=0;j--){
                int multi=(num2[i]-'0')*(num1[j]-'0');
                int sum=multi+temp[i+j+1];

                temp[i+j+1]=sum%10;
                temp[i+j]+=sum/10;
            }
        }
        int i=0;
        while(i<temp.size() && temp[i]==0){
            i++;
        }
        string rett="";
        for(i;i<temp.size();i++){
            rett+=to_string(temp[i]);
        }
        return rett;
    }
};