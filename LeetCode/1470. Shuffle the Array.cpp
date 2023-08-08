class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        // Seperate x and y array
        int x[n];
        int y[n];
        int i;
        for (i = 0; i < n; i++)
        {
            x[i] = nums[i];
        }
        int j = 0;
        for (i = n; i < 2 * n; i++)
        {
            y[j] = nums[i];
            j++;
        }

        i = 0;
        int a = 0;

        for (int j = 0; j < n * 2; j++)
        {
            if (j % 2 == 0)
            {
                nums[j] = x[i];
                i++;
            }
            else
            {
                nums[j] = y[a];
                a++;
            }
        }

        return nums;
    }
};