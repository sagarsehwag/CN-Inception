
void printLevelWise(BinaryTreeNode<int> *root) 
{
    if(root == NULL)
    {
        return;
    }
    
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    
    while(pendingNodes.size() != 0)
    {
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        
        cout << front -> data << ":";
        
        if(front -> left != NULL)
        {
            cout << "L:" << front -> left -> data << ",";
            pendingNodes.push(front -> left);
        }
        else if(front -> left == NULL)
        {
            cout << "L:-1" << ",";
        }
        
        if(front -> right != NULL)
        {
            cout << "R:" << front -> right -> data ;
            pendingNodes.push(front -> right);
        }
        else if(front -> right == NULL)
        {
            cout << "R:-1";
        }
        
        cout << "\n";
    }

}
