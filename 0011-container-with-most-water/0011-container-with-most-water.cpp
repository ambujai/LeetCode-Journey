class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=std::size(height)-1, maxArea=0;

        while(i<j){
            int area = (height[i]<height[j]? height[i] : height[j]) * (j-i);
            if(maxArea < area)
                maxArea = area;
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return maxArea;
    }
};