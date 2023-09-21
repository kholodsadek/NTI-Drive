
#ifndef _TREE_H_
#define _TREE_H_

/* self-referential structure */
struct treeNode {
    struct treeNode *leftPtr; /* pointer to left subtree */
    int data; /* node value */
    struct treeNode *rightPtr; /* pointer to right subtree */
}; /* end structure treeNode */


 typedef struct treeNode TreeNode; /* synonym for struct treeNode */
 typedef TreeNode* TreeNodePtr; /* synonym for TreeNode* */ /* TreeNodePtr <=> struct treeNode*  */

 /* prototypes */
 void insertNode( TreeNodePtr *treePtr, int value  ); // change
 void inOrder( TreeNodePtr treePtr );
 void preOrder( TreeNodePtr treePtr );
 void postOrder( TreeNodePtr treePtr );


 TreeNodePtr minValueNode(TreeNodePtr node);
 TreeNodePtr deleteNode(TreeNodePtr root, int key);



#endif // _TREE_H_



