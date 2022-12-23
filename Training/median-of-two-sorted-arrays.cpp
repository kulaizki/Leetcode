class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size(), size2 = nums2.size();
        vector<int>arr;

        for (auto & i : nums1)
            arr.push_back(i);

        for (auto & i : nums2)
            arr.push_back(i);
            
        for (int i = 0; i < arr.size()-1; i++) {
            for (int j = i+1; j < arr.size(); j++) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        double median;
        if (arr.size() % 2)
            median = arr[arr.size()/2];

        else
            median = (arr[arr.size()/2-1] + arr[arr.size()/2]) / 2.0;

        return median;
    }
};
