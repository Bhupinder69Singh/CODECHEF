class Solution {
public:
 int firstOccurence(vector<int>& nums, int target){ 
        int start=0;
        int end= nums.size()-1;
        int mid=start + (end-start)/2;
        int store=-1;
        while(start<=end){
            
        if (nums[mid]==target){
            store=mid;//to find the leftmost occurence you store your mid 
            end=mid-1;//here you have found target value but as you want its first occurence you check if the element in left side part 
                      //which will be mid-1;
             
        }
        else if(nums[mid]<target){
           start=mid+1;
        } 
        else if (nums[mid]>target){
            end=mid-1;

        }
        mid=start + (end-start)/2;
        } 
       return store;
  }
  
   int lastOccurence(vector<int>& nums, int target) {
        int start=0;
        int end= nums.size()-1;
        int mid=start + (end-start)/2;
        int store=-1;
        while(start<=end){
        if (nums[mid]==target){
            store=mid;
            start=mid+1;//same is true for finding right most occurence
             
        }
        else if(nums[mid]<target){
           start=mid+1;
        } 
        else if ( nums[mid]>target){
            end=mid-1;

        }
        mid=start + (end-start)/2; 
        } 
        return store; 
   }    
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstOccurence(nums,target),lastOccurence(nums,target)};
}
};
