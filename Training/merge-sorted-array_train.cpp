#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    nums1.erase(nums1.begin() + m, nums1.begin() + nums1.size());
    for (auto& i: nums2) nums1.push_back(i);
    sort(nums1.begin(), nums1.end());
}

int main()
{
    vector<int> nums1 = {4, 2, 3, 0, 0, 0};
    vector<int> nums2 = {9, 5, 6};

    merge(nums1, 3, nums2, 3);
    for (int i: nums1) { cout << i << ' '; }
}