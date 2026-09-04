/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        Node* temp = head;
        if(head==nullptr) return nullptr;
        
        if(x==1){
            head = head->next;
            delete temp;
            return head;
        }
        
        x=x-1;
        while(temp->next!=nullptr){
        Node* prev = nullptr;
            while(x--){
            prev = temp;
            temp = temp-> next;
            }
            prev -> next = prev -> next->next;
            delete temp;
            
            return head;
        }
    }
};