// 反转字符串2
// 要求，输入String s,k；遍历s，当计数到2k个，反转前k个字符；剩余字符少于k，反转；大于k小于2k，反转前k个.

string reverseStr(string s, int k){
    for(int i=0; i<s.size();i=i+2*k){
        if(i+k<=s.size()){
            reverse(s.begin()+i,s.begin()+i+k);

        }
        else{
            reverse(s.begin()+i, s.end());
        }

    }
    return s;
}