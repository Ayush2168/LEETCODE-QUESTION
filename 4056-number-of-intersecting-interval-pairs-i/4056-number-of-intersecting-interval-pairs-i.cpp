class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int pairCount = 0;
        for(int i = 0; i<n;++i){
            for(int j =i+1;j<n;++j){
                int start1 = intervals[i][0], end1= intervals[i][1];
                int start2 = intervals[j][0], end2= intervals[j][1];
                if(std::max(start1,start2)<=std::min(end1 , end2)){
                    pairCount++;
                }
            }
        }
        return pairCount;
    }
};