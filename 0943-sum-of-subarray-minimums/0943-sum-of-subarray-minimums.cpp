class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>pse(n,-1);
        stack<int>st;
        int i=1;
        pse[0]=-1;
        st.push(0);
        while(i<n){
            while(!st.empty() && arr[st.top()]>arr[i] ){
                st.pop();
            }
            if(st.empty()){
                pse[i]=-1;
            }else{
                pse[i]=st.top();
            }
            st.push(i);
            i++;
        }
        while(!st.empty()){
            st.pop();
        }
        vector<int>nse(n,-1);
        i=n-2;
        nse[n-1]=n;
        st.push(n-1);
        while(i>=0){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                nse[i]=n;
            }else{
                nse[i]=st.top();
            }
            st.push(i);
            i--;
        }

        int rett=0,mod=1e9+7;
        for(int i=0;i<n;i++){
            int pse1=pse[i];
            int nse1=nse[i];
            long long contri=(nse1-i)*(i-pse1);
            long long temp=contri*arr[i];
            rett=(rett+temp)%mod;
        }
        return rett;
    }


};