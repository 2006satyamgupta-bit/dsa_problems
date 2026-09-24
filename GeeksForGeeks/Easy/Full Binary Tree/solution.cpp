/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isFullTree(Node* root) {
        // code here
        if(root == nullptr){
            return true;
        }
        if(root->left == nullptr && root->right==nullptr){
            return true;
        }
        
        if(root->left!=nullptr && root->right!=nullptr){
            return isFullTree(root->left) && isFullTree(root->right);
        }
        
        return false;
    }
};