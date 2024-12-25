// 反转链表 206
// 双指针法
struct ListNode
    {
        /* data */
        int val;
        ListNode* next;
        // LinkedNode(int val):val(val),next(nullptr){}
        // LinkedNode(int a):val(a),next(nullptr){}
        ListNode(int a):val(a),next(nullptr){}
    };

// class Solution{
// public:
//     ListNode* reverseList(ListNode* head){
//         ListNode* temp;
//         ListNode* cur = head;
//         ListNode* pre = nullptr;

//         while (cur)
//         {
//             /* code */
//             temp = cur->next;
//             cur->next = pre;
//             pre = cur;
//             cur = temp;

//         }

//         return pre;
        
//     }
// };

