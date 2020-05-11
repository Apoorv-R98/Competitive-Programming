// Note: Try to solve this task in O(n) time, where n is the number of nodes in both trees, since this is what you would be asked to do in an interview.

// A tree is considered a binary search tree (BST) if for each of its nodes the following is true:

// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and the right subtrees must also be binary search trees.
// An empty tree (a tree with no nodes) is also considered to be BST.

// Given two binary search trees t1 and t2, return all values that are contained in both trees, sorted in ascending order.

// Example

// For
// t1 = {
//     "value": 2,
//     "left": {
//         "value": 1,
//         "left": null,
//         "right": null
//     },
//     "right": {
//         "value": 3,
//         "left": null,
//         "right": null
//     }
// }
// and

// t2 = {
//     "value": 3,
//     "left": {
//         "value": 2,
//         "left": null,
//         "right": null
//     },
//     "right": {
//         "value": 9,
//         "left": null,
//         "right": null
//     }
// }
// the output should be
// findCommonValues(t1, t2) = [2, 3];



vector<int>res,v1,v2;

void storeAllValues(Tree<int>*root,vector<int>&v){
    if(root==NULL){
        return;
    }

    storeAllValues(root->left,v);
    v.push_back(root->value);
    storeAllValues(root->right,v);
}

std::vector<int> findCommonValues(Tree<int> * t1, Tree<int> * t2) {

    storeAllValues(t1, v1);
    storeAllValues(t2, v2);

    int i=0,j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]==v2[j]){
            res.push_back(v1[i]);
            i++;
            j++;
        }else if(v1[i]<v2[j]){
            i++;
        }else{
            j++;
        }
    }
    return res;
}
