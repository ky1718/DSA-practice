Count Distinct in an Array
#include <iostream>
using namespace std;

int countDistinct(vector<int> &arr)
{

    int n = arr.size();

    if (n == 0)
    {
        return 0;
    }

    // Stores count of distinct elements
    int res = 1;

    // Pick all elements one by one
    for (int i = 1; i < n; i++)
    {

        int j;

        // Check whether current element
        // appeared before or not
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }

        // If current element is seen
        // for the first time
        if (i == j)
        {
            res++;
        }
    }

    return res;
}

// Driver Code
int main()
{

    vector<int> arr = {12, 10, 9, 45, 2, 10, 10, 45};

    cout << countDistinct(arr);

    return 0;
}
