class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum=0;
        int i=0;
        for(i=0;i<k;i++){
            leftsum+=cardPoints[i];
        }
        int rightsum=0;
        int rett=INT_MIN;
        int n=cardPoints.size();
        int j=n-1;
        rett=max(rett,(leftsum+rightsum));
        for(int i=0;i<k;i++){
            leftsum-=cardPoints[k-1-i];
            rightsum+=cardPoints[n-1-i];
            rett=max(rett,(leftsum+rightsum));
        }
        return rett;
    }
};