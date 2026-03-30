class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int i,n=nums.size();
       int j=n-1;
       k=k%n;
       reverse(nums.begin(),nums.end());
       reverse(nums.begin(),nums.begin()+k);
       reverse(nums.begin()+k,nums.end());


    
       

        
    }
};