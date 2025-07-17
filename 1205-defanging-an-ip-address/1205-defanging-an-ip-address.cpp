class Solution {
public:
    string defangIPaddr(string address) {
        int i=0;
        while(i<address.size()){
            if(address[i]=='.'){
                address.insert(i,"[");
                address.insert(i+2,"]");
                i=i+2;
            }else{
            i++;
            }
        }
        return address;
    }
};