/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public: 
    /*因为是单向链表，所以无法找到它的上一个结点，那么只能把他的下一个结点赋值给
    这个结点，然后将下一个结点删除，使得看起来的效果是删除了这一个结点；*/
    void deleteNode(ListNode* node) {
        ListNode* ne=node->next;
        node->val=ne->val;
        node->next=ne->next;
    }
};