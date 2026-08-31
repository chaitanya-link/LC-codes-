class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        /*approach:
        I am going to take the the last element of 1st interval and second intervals 1st element
        going to check if second ibterval start element <= end element of 1st interval then going to merge and  return start elements 1st interval and second element's end interval
        */
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;
        result.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            vector<int>& last = result.back();
            if (intervals[i][0] <= last[1]) {
        // overlap! merge by extending the end
        last[1] = max(last[1], intervals[i][1]);
    } else {
        // no overlap, this is a new separate interval
        result.push_back(intervals[i]);
    }
        }
        return result;
    }
};