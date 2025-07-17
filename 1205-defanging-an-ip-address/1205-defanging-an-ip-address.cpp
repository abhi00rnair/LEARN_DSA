class Solution {
public:
    string defangIPaddr(string address) {
        string rett;
        int i=0;
        while(i<address.size()){
            if(address[i]=='.'){
                rett+='[';
                rett=rett+'.';
                rett=rett+']';
                i++;
            }else{
                rett=rett+address[i];
                i++;
            }
        }
        return rett;
    }
};