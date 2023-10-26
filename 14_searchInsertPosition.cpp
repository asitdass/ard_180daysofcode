class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int position = nums.size(), mid, start=0, end = nums.size()-1;

        while(start<=end){
            mid = start + (end-start)/2;
            if(nums[mid]==target){
                position = mid;
                break;
            }else if(nums[mid]<target){
                start = mid+1;
            }else{
                position = mid;
                end = mid-1;
            }
        }
        return position;  
    }
};
