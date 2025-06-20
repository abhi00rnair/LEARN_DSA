class Solution {
public:
    int maxDistance(string s, int k) {
        int n=s.size();
        int north=0,south=0,east=0,west=0;
        int rett=0;

        for(int i=0;i<n;i++){
            if(s[i]=='N'){north++;}
            if(s[i]=='S'){south++;}
            if(s[i]=='E'){east++;}
            if(s[i]=='W'){west++;}
            int verti=abs(north-south);
            int horiz=abs(east-west);
            int cancel=(i+1)-(horiz+verti);
            int result=2*min(cancel/2,k);
            rett=max(rett,verti+horiz+result);
            
        }
        return rett;
        
    }
};