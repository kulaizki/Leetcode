class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        // sorts the arrays for easier comparison
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        // used a set container to only include unique elements
        set<int> s;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] > nums2[j]) j++;
            else if (nums1[i] < nums2[j]) i++;
            else {
                s.insert(nums1[i]);
                i++; j++;
            }
        }

        // moves set elements to vector
        vector<int> ans;
        for (int i : s) ans.push_back(i);

        return ans;
    }
};
