// Let's define a tree's diameter as the number of nodes on the longest path between any two nodes in the tree. 
// The longest path may or may not include the tree's root. Given a binary tree, find its diameter.
// In the diagrams in the examples below, the longest path is indicated by blue nodes.



int height(Tree<int>*t){
    if(t==NULL){
        return 0;
    }
    return 1+max(height(t->left),height(t->right));
}

int binaryTreeDiameter(Tree<int> * t) {
    if(t==NULL){
        return 0;
    }

    int lheight = height(t->left);
    int rheight = height(t->right);

    int ldiameter = binaryTreeDiameter(t->left);
    int rdiameter = binaryTreeDiameter(t->right);
  
    return max(lheight+rheight+1,max(ldiameter,rdiameter));
}

