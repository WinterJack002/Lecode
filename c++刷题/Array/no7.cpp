// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cout<<"input length of Array"<<endl;
//     cin>>n;
//     std::vector<int> arry(n);
//     for(int i=0;i<n;i++){
//         cin>>arry[i];
//     }
//     int l,r;
//     cout<<"input left and right"<<endl;
//     std::cin>>l>>r;
//     int sum = 0;
//     for(l; l<=r; l++){
//         sum += arry[l];
//     }
//     cout<<sum<<endl;
//     return 0;
// }
// 暴力法：
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     int n, a, b;
//     cin >> n;
//     vector<int> vec(n);
//     for (int i = 0; i < n; i++) cin >> vec[i];
//     while (cin >> a >> b) {
//         int sum = 0;
//         // 累加区间 a 到 b 的和
//         for (int i = a; i <= b; i++) sum += vec[i];
//         cout << sum << endl;
//     }
// } 
// 前缀和：前缀和的思想是重复利用计算过的子数组之和，从而降低区间查询需要累加计算的次数。
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     int n, a, b;
//     cin >> n;
//     vector<int> vec(n);
//     vector<int> p(n);
//     int presum = 0;
//     for (int i = 0; i < n; i++) {
//         cin >> vec[i];
//         presum += vec[i];
//         p[i] = presum;
//     }

//     while (cin >> a >> b) {
//         int sum;
//         if (a == 0) sum = p[b];
//         else sum = p[b] - p[a - 1];
//         cout << sum << endl;
//     }
// }
// C++ 代码 面对大量数据 读取 输出操作，最好用scanf 和 printf，耗时会小很多：
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, a, b;
    cin >> n;
    vector<int> vec(n);
    vector<int> p(n);
    int presum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
        presum += vec[i];
        p[i] = presum;
    }

    while (~scanf("%d%d", &a, &b)) {
        int sum;
        if (a == 0) sum = p[b];
        else sum = p[b] - p[a - 1];
        printf("%d\n", sum);
    }
}

