/*
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
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        
        Node* mover = head;
        
        if(head==nullptr){
            head = new Node(x);
        }else{
        while(mover->next!=nullptr){
            mover = mover->next;
        }
        
        mover-> next = new Node(x);
        }
        return head;
    }
};