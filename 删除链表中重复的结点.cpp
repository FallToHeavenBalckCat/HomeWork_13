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
    unordered_map<int,int> h;
    void deleteAll(ListNode* head,int x){
        ListNode* t=head;
        for(;t!=nullptr;t=t->next){
            while(t->val==x) deleteNode(t);
        }
    }
    void deleteNode(ListNode* node){
        ListNode* ne=node->next;
        node->val=ne->val;
        node->next=ne->next;
    }
    /*配合上一题共同食用，采用哈希表+单链表O(1)时间删除结点*/
    /*特判，如果链表中没有出现次数为1的数字，直接返回空链表*/
    ListNode* deleteDuplication(ListNode* head) {   
        ListNode*t=nullptr;
        ListNode*empty;
        for(t=head;t->next!=nullptr;t=t->next){
            int tmp=t->val;
            h[tmp]++;
        }
        int cnt=0;
        for(auto x:h){
            int a=x.first;
            int b=x.second;
            if(b==1) cnt++;
            if(b>1) deleteAll(head,a);
        }
        if(!cnt) return empty;
        else return head;
    }
};