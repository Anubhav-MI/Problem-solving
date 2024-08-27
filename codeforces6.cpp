#include <iostream>
using namespace std;
class Help
{
public:
    void helper(int arr[], int i, int &c, int n)
    {
        if (i > n - 1)
        {
            return;
        }
        int j = i + 1;
        while (j < n)
        {
            if (arr[i] > 2 * arr[j])
            {
                c++;
            }
            j++;
        }
        helper(arr, i++, c, n);
    }
};
int main()
{
    int n;
    cin >> n;
    int c = 0;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Help obj; // Create an instance of the class
    obj.helper(arr, 0, c, n);
    cout << c;
    // delete[] arr;
    return 0;
}