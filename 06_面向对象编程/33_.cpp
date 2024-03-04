#include<iostream>
using namespace std;
#include<vector>


int main33()
{
	vector<int> nums = { 1,2,2,3,4,5,6 };
	
    int slow = 0;
    for (int fast = 1; fast < nums.size(); fast++)
    {
        if (nums[slow] == nums[fast])
        {
            continue;
        }
        else
        {
            
            slow++;
            nums[slow] = nums[fast];
            cout << nums[slow] << endl;
        }
        cout << "slow=" << slow << endl;
    }
    //nums.resize(slow++);
    // return slow++;
	return 0;
}