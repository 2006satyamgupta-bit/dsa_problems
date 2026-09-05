/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
public:
    Node* insertAtPos(Node* head, int p, int x) {

        Node* newNode = new Node(x);

        Node* temp = head;
        int cnt = 0;

        while (temp != nullptr && cnt < p) {
            temp = temp->next;
            cnt++;
        }

        if (temp == nullptr) {
            return head;
        }

        Node* front = temp->next;

        newNode->next = front;
        newNode->prev = temp;

        temp->next = newNode;

        if (front != nullptr) {
            front->prev = newNode;
        }

        return head;
    }
};