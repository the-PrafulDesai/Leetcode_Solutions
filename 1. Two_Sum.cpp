// Intuition:
// The code utilizes a brute force approach to solve the problem. It iterates through each element of the vector and checks all possible pairs of elements to find the desired sum.

// Approach:
// Initialize n as the size of the vector, which represents the number of elements.
// Start iterating through each element of the vector using the variable i as the index.
// For each element at index i, iterate through the remaining elements in the vector using the variable j as the index, starting from i+1.
// Check if the sum of nums[i] and nums[j] equals the target value.
// If it does, return a vector containing the indices {i, j} as the result.
// If no pair is found that satisfies the condition, return an empty vector as the result.

// Complexity Analysis:
// Time Complexity: The code uses nested loops to iterate through the vector, resulting in a time complexity of O(n^2),
// where n is the number of elements in the vector.
// Space Complexity: The space complexity is O(1) since the code only uses a constant amount of extra space to store the indices or an empty vector.
// It's worth noting that this brute force approach is not the most efficient solution for the problem.
// If the input vector is very large, the time complexity of O(n^2) can be quite costly. There are more optimized algorithms, like using a hash table or sorting the vector,
// which can solve the problem in a more efficient manner.



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    return{i,j};
                }
            }
        }
    return {};
    }
};
