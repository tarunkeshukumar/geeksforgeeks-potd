// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        // your code goes here
        unordered_map<int,int> m;
        Node *temp = head;
        m[temp->data]++;
        while(temp->next){
            if(m[temp->next->data]++)
                temp->next = temp->next->next;
            else
                temp=temp->next;
        }
        return head;
    }
};
