class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int rett=INT_MAX;
        int n=words.size();
        int i=0,index=startIndex;
        while(i<n){
            if(words[index]==target){
                int dist=abs(index-startIndex);
                rett=min(rett,min(dist,n-dist));
            }
            index=(index+1)%n;
            i++;
        }
        int y=0, index1=startIndex;
        while(y<n){
            if(words[index1]==target){
                int dist=abs(index1-startIndex);
                rett=min(rett,min(dist,n-dist));
            }
            index1=(index1-1+n)%n;
            y++;
        }
        return rett==INT_MAX ? -1: rett;
    }
};