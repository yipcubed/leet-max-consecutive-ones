#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>

// https://leetcode.com/problems/max-consecutive-ones/

#include "../utils/VectorUtils.hpp"
// #include "../utils/TreeUtils.hpp"

#include "../utils/PrintUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto _no_sync_ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if (nums.empty()) return 0;
        int maximum = 0;
        int curr = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                ++curr;
                maximum = max(maximum, curr);
            } else {
                curr = 0;
            }
        }
        return maximum;
    }
};

void test1() {
    vector<int> v1{1,1,0,1,1,1};

    cout << "3 ? " << Solution().findMaxConsecutiveOnes(v1) << endl;

    vector<int> v2{1,1,0,1,0,1,1};

    cout << "2 ? " << Solution().findMaxConsecutiveOnes(v2) << endl;
}

void test2() {

}

void test3() {

}