class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> sol;
        int flag = 0;
        vector<int> sol2(2, -1);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                sol.push_back(i);
                flag++;
                break;
            }
        }
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] == target)
            {
                sol.push_back(i);
                flag++;
                break;
            }
        }
        if (flag > 0)
            return sol;
        else
            return sol2;
    }
};