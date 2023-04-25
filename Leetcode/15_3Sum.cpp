class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int f_val=0;
        //sorting the given array in incresing order
        sort(nums.begin(),nums.end());
        //set that will contain unique triplet
        set<vector<int>> s;
        //final output vector
        vector<vector<int>> output;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==f_val){
                    s.insert({nums[i],nums[j],nums[k]});//triplet found insert it in set
                    j++;
                    k--;
                }
                else if(sum<f_val)//this checks that our sum of three pointed element is less than 0
                {
                  //we increment j because (i+j) are small elements and their sum is greater than largest value
                  //i.e if we have i,j,k as [-4,-3,5]so we have to move forward in array to larger value to make sum 0
                    j++;
                }
                else{
                    k--;//if sum >0 then we move k to lower the sum as array is sorted in incresing order
                }
            }
        }
        for(auto x:s){
            output.push_back(x);//pushing each set e.g x={1,2,3} into output vector
        }
        return output;
    }
};
