class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        //find first
        int start = 0, end = nums.size() - 1, first = -1, last = -1, mid;
        while(start<=end){
        mid = start + (end-start)/2;
        if(nums[mid]==target){
            first = mid;
            end = mid-1;
        }else if(nums[mid]<target){
            start = mid+1;
        }else{
            end = mid -1;
        }
        }

        //find last
        start = 0; end = nums.size()-1;
        while(start<=end){
        mid = start + (end-start)/2;
        if(nums[mid]==target){
            last = mid;
            start = mid+1;
        }else if(nums[mid]<target){
            start = mid+1;
        }else{
            end = mid -1;
        }
        }

        vector<int>ans;
        ans.push_back(first);
        ans.push_back(last);

        return ans;
    }
};
