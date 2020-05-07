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

