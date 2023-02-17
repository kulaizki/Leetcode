class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
	    unordered_map<int, int> hash; // Number, Index       
		int n = numbers.size();
	    for (int i = 0; i < n; i++) {
		    int numberToFind = target - numbers[i];
		    if (hash.find(numberToFind) != hash.end()) 
			    return {hash[numberToFind], i};
		    hash[numbers[i]] = i;
	    }
	    return {};
    }
};
