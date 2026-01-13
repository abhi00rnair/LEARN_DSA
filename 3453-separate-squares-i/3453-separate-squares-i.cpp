class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double low=INT_MAX;
        double high=0,n=squares.size();
        for(int i=0;i<squares.size();i++){
            double y=squares[i][1];
            double side=squares[i][1]+squares[i][2];
            low=min(low,y);
            high=max(high,side);
        }
        for(int k=0;k<60;k++){
            double mid=(low+high)/2;
            double area_above=0;
            double area_below=0;
            for(int i=0;i<n;i++){
                double x=squares[i][0];
                double y=squares[i][1];
                double side=squares[i][2];
                double top=y+side;

                double area=side*side;
                if(y>=mid){
                    area_above+=area;
                }else if(top<=mid){
                    area_below+=area;
                }
                else{
                    double upp_hei=top-mid;
                    double low_hei=mid-y;
                    area_below+=low_hei*side;
                    area_above+=upp_hei*side;
                }
            }
            if(area_below<area_above){
                low=mid;
            }else{
                high=mid;
            }
        }
        return (low+high)/2;
    }
};