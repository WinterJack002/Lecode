// 02 设计链表
// get(index)：获取链表中第 index 个节点的值。如果索引无效，则返回-1。
// addAtHead(val)：在链表的第一个元素之前添加一个值为 val 的节点。
// 插入后，新节点将成为链表的第一个节点。
// addAtTail(val)：将值为 val 的节点追加到链表的最后一个元素。
// addAtIndex(index,val)：在链表中的第 index 个节点之前添加值为 val 的节点。
// 如果 index 等于链表的长度，则该节点将附加到链表的末尾。
// 如果 index 大于链表长度，则不会插入节点。如果index小于0，则在头部插入节点。
// deleteAtIndex(index)：如果索引 index 有效，则删除链表中的第 index 个节点。

// 虚拟头节点
#include <iostream>
class MyLinkedList{
public:

    struct LinkedNode
    {
        /* data */
        int val;
        LinkedNode* next;
        // LinkedNode(int val):val(val),next(nullptr){}
        // LinkedNode(int a):val(a),next(nullptr){}
        LinkedNode(int a):val(a),next(nullptr){}
    };
    // initiate List
    MyLinkedList(){
        _dummyHead = new LinkedNode(0);
        _size = 0;
    }

    int get(int index){
        if(index > (_size-1) || index <0){
            return -1;
        }
        LinkedNode* cur = _dummyHead->next;
        while(index--){
            cur = cur->next;
        }
        return cur->val;
    }

    void addAtHead(int val){
        LinkedNode* newNode = new LinkedNode(val);
        newNode->next = _dummyHead->next;
        _dummyHead->next = newNode;
        _size++;
    }

    void addAtTail(int val){
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* cur = _dummyHead->next;
        while(cur){
            cur = cur->next;
        }
        cur->next = newNode;
        // newNode->next=nullptr;
        _size++;
    }

    void addAtIndex(int index, int val){

        if (index>_size) return;
        if(index<0) index=0;

        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* cur = _dummyHead;
        while(index--){
            cur=cur->next;
        }
        newNode->next=cur->next;
        cur->next=newNode;
        _size++;
    }

    void deleteAtIndex(int index){
        if(index>=_size||index<0) return;
        LinkedNode* cur = _dummyHead;
        while(index--){
            cur=cur->next;
        }
        LinkedNode* temp = cur->next;
        cur->next = cur->next->next;
        delete temp;
        temp = nullptr;
        _size--;
    }

    void PrintLinkedList(){
        LinkedNode* cur = _dummyHead;
        while(cur->next != nullptr){
            std::cout<<cur->next->val<<"";
            cur = cur->next;
        }
        std::cout<<std::endl;
    }

private:
    int _size;
    LinkedNode* _dummyHead;

};