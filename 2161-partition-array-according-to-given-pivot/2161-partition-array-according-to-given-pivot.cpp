class Solution
{
public:
	vector<int> pivotArray(vector<int> &nums, int pivot)
	{
		vector<int> store1;
		vector<int> store2;

		int n = nums.size();
		int count = 0;

		for (int i = 0; i < n; i++)
		{
			if (nums[i] < pivot)
				store1.push_back(nums[i]);
			else if (nums[i] == pivot)
				count++;
			else
				store2.push_back(nums[i]);
		}

		for (int i = 0; i < count; i++)
			store1.push_back(pivot);
        for(int i=0;i<store2.size();i++)
	    store1.push_back(store2[i]);

		return store1;
	}
};