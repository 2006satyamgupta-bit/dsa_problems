#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if (root == nullptr)
            return true;

        queue<TreeNode*> q;
        q.push(root);

        bool check = true;

        while (!q.empty()) {
            int s = q.size();

            for (int i = 0; i < s; i++) {
                TreeNode* f = q.front();

                // Check left child
                if (f->left != nullptr) {
                    if (check == false)
                        return false;

                    q.push(f->left);
                }
                else {
                    check = false;
                }

                // Check right child
                if (f->right != nullptr) {
                    if (check == false)
                        return false;

                    q.push(f->right);
                }
                else {
                    check = false;
                }

                q.pop();
            }
        }

        return true;
    }
};