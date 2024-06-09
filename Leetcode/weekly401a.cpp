class Solution
{
public:
    int numberOfChild(int n, int k)
    {
        int i = 1;
        int d = 1;
        k--;
        while (k > 0)
        {
            if (i == n - 1 || i == 0)
            {
                d = -1 * d;
            }
            i = i + d;
            k--;
        }
        return i;
    }
};