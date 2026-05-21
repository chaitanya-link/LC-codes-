class Solution {
public:
    int maxArea(vector<int>& height) {

        int i = 0;
        int j = height.size() - 1;

        int maxarea = 0;

        while(i < j) {

            int area;

            if(height[i] < height[j]) {
                area = height[i] * (j - i);
                i++;
            }
            else {
                area = height[j] * (j - i);
                j--;
            }

            if(area > maxarea) {
                maxarea = area;
            }
        }

        return maxarea;
    }
};