// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        stack<Node*>st;
        stack<bool>visited;
        vector<int>ans;
        
        st.push(root);
        visited.push(0);
        while(!st.empty())
        {
            Node* temp = st.top(); 
            st.pop();
            
            bool flag = visited.top();
            visited.pop();
            
            if(!flag){
                if(temp->right){
                    st.push(temp->right);
                    visited.push(0);
                }
                st.push(temp);
                visited.push(1);
                if(temp->left){
                    st.push(temp->left);
                    visited.push(0);
                }
                
            }
            else{
                ans.push_back(temp->data);
            }
        }
        return ans;
    }
};