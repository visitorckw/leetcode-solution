/*
 * @lc app=leetcode id=707 lang=cpp
 *
 * [707] Design Linked List
 */

// @lc code=start
struct node{
    int val;
    node* next = NULL;  
};
class MyLinkedList {
public:
    /** Initialize your data structure here. */
    node* head;
    int size;
    MyLinkedList() {
        head = NULL;
        size = 0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index >= size) return -1;
        node* cur = head;
        for(int i = 0; i < index; i++)
            cur = cur->next;
        return cur->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        node* temp = new node;
        temp->val = val;
        temp->next = head;
        head = temp;
        ++size;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        node* temp = new node;
        temp->val = val;
        temp->next = NULL;
        node* tail = head;
        if(!tail) head = temp;
        else{
            while(tail->next) tail = tail->next;
            tail->next = temp;
        }
        ++size;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index > size) return;
        if(index == size){
            addAtTail(val);
            return;
        }
        if(!index){
            addAtHead(val);
            return;
        }
        node* cur = head;
        for(int i = 0; i < index - 1; i++) cur = cur->next;
        node* temp = new node;
        temp->val = val;
        temp->next = cur->next;
        cur->next = temp;
        ++size;
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index >= size) return;
        --size;
        if(!index){
            node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        node* cur = head;
        for(int i = 0; i < index - 1; i++) cur = cur->next;
        node* temp = cur->next;
        cur->next = temp->next;
        delete temp;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end
