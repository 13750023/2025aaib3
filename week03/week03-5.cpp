//week03-5.cpp
//LeetCode 學習計畫 第9題 1502. Can Make Arithmetic Progression From Sequence
//把數字小排到大是不是相鄰都差一樣的數字
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());//把陣列小到大排好
        int d=arr[1]-arr[0];//兩數差d
        for(int i=1;i<arr.size();i++){//迴圈從1開始因為要找前一項
            if(arr[i]-arr[i-1] != d)return false;
        }//如果後項-前面不是d的話就失敗
        return true;
    }
};
