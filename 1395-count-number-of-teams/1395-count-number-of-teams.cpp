class Solution {
public:
    int numTeams(vector<int>& rating) {
        int cnt = 0;
        int n = rating.size();
        for(int i = 0; i < n - 2; i++){
            for(int j = i + 1; j < n - 1; j++){
                if(rating[i] < rating[j]){
                    for(int k = j + 1; k < n; k++){
                        if(rating[j] < rating[k]) cnt++;
                    }
                }
                else if(rating[i] > rating[j]){
                    for(int k = j + 1; k < n; k++){
                        if(rating[j] > rating[k]) cnt++;
                    }    
                }
            }
        }
        return cnt;
    }
};