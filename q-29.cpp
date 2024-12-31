#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<pair<int, int>> findPairsBruteForce(const vector<int> &nums, int target)
{
    vector<pair<int, int>> result;
    for (size_t i = 0; i < nums.size(); ++i)
    {
        for (size_t j = i + 1; j < nums.size(); ++j)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back({i, j});
            }
        }
    }
    return result;
}

vector<pair<int, int>> findPairsHashMap(const vector<int> &nums, int target)
{
    vector<pair<int, int>> result;
    unordered_map<int, int> numMap;

    for (size_t i = 0; i < nums.size(); ++i)
    {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end())
        {
            result.push_back({numMap[complement], static_cast<int>(i)});
        }
        numMap[nums[i]] = static_cast<int>(i);
    }
    return result;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<pair<int, int>> pairs = findPairsBruteForce(nums, target);

    cout << "Pairs: ";
    for (const auto &p : pairs)
    {
        cout << "[" << p.first << "," << p.second << "] ";
    }
    cout << endl;

    vector<pair<int, int>> pairs2 = findPairsHashMap(nums, target);

    cout << "Pairs2: ";
    for (const auto &p : pairs2)
    {
        cout << "[" << p.first << "," << p.second << "] ";
    }
    cout << endl;

    return 0;
}