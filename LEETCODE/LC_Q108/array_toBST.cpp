/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {

	if (nums.size() <= 0)
		return NULL;
	if (nums.size() == 1)
	{
		return new TreeNode(nums[0]);
	}
	int n = nums.size();
	
	return helper(0, n - 1, nums);
}
TreeNode* helper(int s, int e, vector<int> nums)
{
	if (s > e)
		return NULL;
	if (s == e)
		return new TreeNode(nums[s]);
	int mid =  s + (e - s) / 2;
	TreeNode* root = new TreeNode(nums[mid]);
	root->left = helper(s, mid - 1, nums);
	root->right = helper(mid + 1, e,  nums);
	return root;
}
};