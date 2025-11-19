// week11-1b.cpp 挑戰題 二合一,聰明的方法, 用到沒教過的 Hashmap or Hashset
// LeetCode 2154. Keep Multiplying Found Values by Two
// 每次乘2倍,把沒有出現的數字 return 出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet;//Hashset 可以快速找到有沒有這個樹
        for(int num:nums)numsSet.insert(num);//C++的進階迴圈
        //請問original 有沒有在numset裡?
        while(numsSet.find(original) != numsSet.end())//沒有沒有找到
            original = original * 2;
        }
        return original;
    }

};
