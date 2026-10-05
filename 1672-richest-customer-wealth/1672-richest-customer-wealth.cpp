class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximum=0;
        for(int i=0;i<accounts.size();i++){
            int sum = 0;
            for(int j=0;j<accounts[i].size();j++){
                sum = sum + accounts[i][j];
            }
            if(sum > maximum){
                   maximum = sum ;
                }
        }
        return maximum;
    }
};

// Customer 1:
// sum = 6
// 6 > 0 → true
// maximum = 6
// Customer 2:
// sum = 10
// 10 > 6 → true
// maximum = 10
// Customer 3:
// sum = 7
// 7 > 10 → false
// maximum remains 10
// So the final answer is:10
