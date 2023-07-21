// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        
        if(!head)
            return NULL;
        int i=0;
        struct node*cur = head;
        struct node*next = NULL;
        struct node*prev = NULL;
        
        while(cur != NULL && i<k){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        ++i;
    }
    if(next!= NULL)
        head->next = reverse(next,k);
    return prev;
    }
};
