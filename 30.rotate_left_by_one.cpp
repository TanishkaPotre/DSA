/*--------------------------------------------------------------

Problem: Left Rotate Array by One

Given an array, rotate the array to the left by one position.

Example:
Input  : [1,2,3,4,5]
Output : [2,3,4,5,1]

---------------------------------------------------------------

Approach : Optimal (Element Shifting)

Idea:
Store the first element in a temporary variable.
Shift every element one position to the left.
Place the stored element at the last index.

Time Complexity:
O(N)

Space Complexity:
O(1)

--------------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;

void left_rotate(vector<int> & num)
{
    int temp = num[0];   // store first element

    for(int i = 1; i < num.size(); i++)
    {
        num[i-1] = num[i];   // shift elements to the left
    }

    num[num.size()-1] = temp;   // place stored element at the end
}

int main()
{
    vector <int> num = {1,2,3,4,5};

    left_rotate(num);
    
    for(int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}
