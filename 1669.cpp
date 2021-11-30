#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
};
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a,
                                int b, ListNode* list2) 
    {    
        ListNode* tmp = list1;
        ListNode* head = tmp;
        while(a > 1) {
            a--;
            list1 = list1->next;
        }
        
        while(b != 0) {
            b--;
            tmp = tmp->next;
        }
        
        list1->next = list2;
        
        while(list2->next != nullptr) list2 = list2->next;
        
        list2->next = tmp->next;
        return head;
         
    }
};
int main()
{
    cout<<"hello😂";
    return 0;
}