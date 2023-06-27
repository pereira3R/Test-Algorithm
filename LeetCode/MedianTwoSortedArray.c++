class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        nums3.insert(nums3.end(), nums1.begin(), nums1.end());
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());
        std::sort(nums3.begin(), nums3.end());
        int verifyM = nums3.size();
        double value;
        if(verifyM % 2 == 0){
            int ind = (verifyM / 2) -1;
            value = (nums3[ind] + nums3[ind+1])/2.00;
        }else{
            int ind = std::ceil(verifyM / 2);
            value = (nums3[ind]);
        }
        return value;
    }
};