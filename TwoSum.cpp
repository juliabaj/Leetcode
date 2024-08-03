class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {                                                                 
        vector <int> sum;                    //creating a vector that contains indexes of two target numbers
        //vector's size
        int size = nums.size();
        for(int i = 0; i < size-1; i++)      //iteration from 0 to size - 2
        {
            for(int j=i+1; j < size; j++)    //iterating from number next to i to size -1
            {
                //checking if sum of two numbers is equal to target, if it is then add them to vector
                if(nums[i] + nums[j] == target)
                {
                    sum.push_back(i);
                    sum.push_back(j);
                    return sum;
                }
            }
        }
        return sum;
    }
};
