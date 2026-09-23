//week03-2.cpp學習計畫Basic 第六題
//Leetcode 283. Move Zeroes
//把0移到右邊,等於(把不是0的放左邊)再補0
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0 ;
        for ( int num : nums){
            if (num != 0){
                nums[k]=num;
                k++;

            }
        }
        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
