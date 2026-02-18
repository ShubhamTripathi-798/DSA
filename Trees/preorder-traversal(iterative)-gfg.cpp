// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        vector<int>ans;
        stack<Node*>st;
        st.push(root); //store root
        
        while(!st.empty())
        {
            Node* temp = st.top();
            st.pop();
            
            ans.push_back(temp->data); 
            
            if(temp->right){   //store the right child before
                st.push(temp->right);
            }
            
            if(temp->left){    //then left child
                st.push(temp->left);
            }
        }
        return ans;
        
    }
};