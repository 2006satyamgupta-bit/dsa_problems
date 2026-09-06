/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        // code here
        if (head == nullptr) return nullptr;

               Node* temp = head;
               int cnt = 1;

               // Deleting head
               if (x == 1) {
                   head = head->next;

                   if (head != nullptr)
                       head->prev = nullptr;

                   delete temp;
                   return head;
               }
        
        
        while(temp!=nullptr){
            if(cnt==x) break;
            cnt++;
            temp = temp->next; 
        }
        if(temp==nullptr) return head;
        Node* back = temp-> prev;
        Node* front = temp->next;
        back->next = front;
        
        if(front!=nullptr){
            front->prev = back;
        }
        delete temp;
        return head;
    }
};