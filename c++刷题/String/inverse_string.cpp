// 输入字符串char[]形式给出
// 使用O(1)空间
// 示例： 输入['h','e','l','L','o'];输出['o','L','l','e'e,'h']

// 双指针法：
// void reverseString(vector<char>& s){
//     for(int i=0,j=s.size()-1;i<j;i++,j--){
//         char temp;
//         temp = s[i];
//         s[i] = s[j];
//         s[j] = temp;
//     }
// }