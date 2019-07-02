class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3;
        if(l1==NULL){
            l3=l2;
        }
        else if(l2==NULL){
            l3=l1;
        }
        else if (l1->val <= l2->val){
            l3=l1;
            l3->next=mergeTwoLists(l1->next,l2);
        }
        
        else{
            l3=l2;
            l3->next=mergeTwoLists(l1,l2->next);
        } 
        return l3;
    }
};
