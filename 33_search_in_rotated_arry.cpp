class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1){
            if(nums[0] == target)
                return 0;
            else 
                return -1;
        }
        if(nums[0] < target){
            int i;
            for(i = 1;i < nums.size() && nums[i] > nums[i-1];i++){
                if(nums[i] == target)
                    return i;
            }
            return find(nums,i,nums.size()-1,target);
        }
        else if(nums[0] > target){
            int i;
            if(nums[nums.size()-1] == target)
                return nums.size()-1;
            for(i = nums.size()-2;i > 1 && nums[i+1] > nums[i];i--){
                if(nums[i] == target)
                    return i;
            }
            return find(nums,1,i,target);
        }
        else{
            return 0;
        }
    }
private:
int find(vector<int>& ss,int start,int end,int target){       
	if(start > end){
        return -1;
    }
    int mid = start + (end-start)/2;
    if(ss[mid] == target)
    return mid;
    else if(ss[mid > target])
        return find(ss,start,mid-1,target);
    else
        return find(ss,mid+1,end,target);
}
};
