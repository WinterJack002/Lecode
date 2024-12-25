// hash table, easy for searching
// 当我们遇到了要快速判断一个元素是否出现集合里的时候，就要考虑哈希法。
// 哈希法也是牺牲了空间换取了时间，因为我们要使用额外的数组，
// set或者是map来存放数据，才能实现快速的查找。
#include<string>
using namespace std;
//01.有效字母的异位词
// class Solution{
// public:
//     bool isAnagram(string s, string t){
//         int record[26] = {0};
//         for(int i =0; i<s.size(); i++){
//             record[s[i]-'a']++; // 记录a-z字母出现的次数
//         }
//         for(int i=0; i<t.size(); i++){
//             record[t[i]-'a']--;
//         }
//         for(int i=0;i<26;i++){
//             if(record[i]!=0){
//                 return false;
//             }
//         }
//         return true;
//     }
// };
#include<vector>
#include<unordered_set>

// //02.两个数组的交集
// vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
//     unordered_set<int> result_set;
//     unordered_set<int> nums_set(nums1.begin(), nums1.end()); // 使用无序set hash集合,传vector的首尾迭代器，此时nums_set是无重复值的无序表

//     for(int num:nums2){
//         if(nums_set.find(num) != nums_set.end()){ // 在无序set里查找nums2的元素，查不到迭代器返回end()
//             result_set.insert(num); // 查到把这个值放到结果的无序表里
//         }
//     }
//     return  vector<int>(result_set.begin(), result_set.end());
// }

//03.快乐数