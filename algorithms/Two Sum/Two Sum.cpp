
/********************************************************************************** 
* 
*Given an array of integers, return indices of the two numbers such that they add up to a specific target.
*
*You may assume that each input would have exactly one solution, and you may not use the same element twice.
*
*Example:
*
*Given nums = [2, 7, 11, 15], target = 9,
*
*Because nums[0] + nums[1] = 2 + 7 = 9,
*return [0, 1].
*          
**********************************************************************************/

vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> vet;
    for(unsigned int i=0;i < nums.size()-1;i++)
	{
		for(unsigned int j=i+1;j < nums.size();j++)
		{
			if(nums[i]+nums[j]==target)
            {
                vet.push_back(i);
                vet.push_back(j);
                break;
            }
		}
	}
	return vet;
}