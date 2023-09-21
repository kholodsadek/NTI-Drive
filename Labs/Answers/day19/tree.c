#include <stdio.h>
#include <stdlib.h>
#include "tree.h"


void insertNode( TreeNodePtr *treePtr, int value )
 {
	 /* if tree is empty */
	 if ( *treePtr == NULL ) {
		 *treePtr =(TreeNode*) malloc( sizeof( TreeNode ) );

		 /* if memory was allocated then assign data */
		 if ( *treePtr != NULL ) {
			 ( *treePtr )->data = value;
			 ( *treePtr )->leftPtr = NULL;
			 ( *treePtr )->rightPtr = NULL;
		 } /* end if */
		 else {
		     printf( "%d not inserted. No memory available.\n", value );
		 } /* end else */
	 } /* end if */
	 else { /* tree is not empty */

		/* data to insert is less than data in current node */
		if ( value < ( *treePtr )->data ) {
			insertNode( &( ( *treePtr )->leftPtr ), value );
		} /* end if */
		/* data to insert is greater than data in current node */
		else if ( value > ( *treePtr )->data ) {
			insertNode( &( ( *treePtr )->rightPtr ), value );
		} /* end else if */
		else { /* duplicate data value ignored */
 			printf( "dup" );
 		} /* end else */
 	} /* end else */
 } /* end function insertNode */




/* begin inorder traversal of tree */
 void inOrder( TreeNodePtr treePtr ) // Left -> Root ->Right
 {

	/* if tree is not empty then traverse */
	if ( treePtr != NULL ) {
	inOrder( treePtr->leftPtr );
	printf( "%3d", treePtr->data );
	inOrder( treePtr->rightPtr );
	} /* end if */
} /* end function inOrder */
/* begin preorder traversal of tree */
void preOrder( TreeNodePtr treePtr )//Root -> left -> Right
{
	/* if tree is not empty then traverse */
	if ( treePtr != NULL ) {
		printf( "%3d", treePtr->data );
		preOrder( treePtr->leftPtr );
		preOrder( treePtr->rightPtr );
	} /* end if */
} /* end function preOrder */
/* begin postorder traversal of tree */
void postOrder( TreeNodePtr treePtr )
{
	 /* if tree is not empty then traverse */
	if ( treePtr != NULL ) {
		postOrder( treePtr->leftPtr );
		postOrder( treePtr->rightPtr );
		printf( "%3d", treePtr->data );
	} /* end if */
} /* end function postOrder */
/* Given a non-empty binary search
   tree, return the node
   with minimum key value found in
   that tree. Note that the
   entire tree does not need to be searched. */
TreeNodePtr minValueNode(TreeNodePtr node)
{
    TreeNodePtr current = node;

    /* loop down to find the leftmost leaf */
    while (current && current->leftPtr != NULL)
        current = current->leftPtr;

    return current;
}
/* Given a binary search tree
   and a key, this function
   deletes the key and
   returns the new root */
TreeNodePtr deleteNode(TreeNodePtr root, int key)
{
    // tree is empty
    if (root == NULL)
        return root;

    // If the key to be deleted
    // is smaller than the root's
    // key, then it lies in left subtree
    if (key < root->data) //3< 25             10      3
        root->leftPtr = deleteNode(root->leftPtr, key);

    // If the key to be deleted
    // is greater than the root's
    // key, then it lies in right subtree
    else if (key > root->data)
        root->rightPtr = deleteNode(root->rightPtr, key);

    // if key is same as root's key,
    // then This is the node
    // to be deleted
    else {
        // node with only one child or no child
        if (root->leftPtr == NULL) {
            TreeNodePtr temp = root->rightPtr;
            free(root);
            return temp;
        }
        else if (root->rightPtr == NULL) {
            TreeNodePtr temp = root->leftPtr;
            free(root);
            return temp;
        }

        // node with two children:
        // Get the inorder successor
        // (smallest in the right subtree)
        TreeNodePtr temp = minValueNode(root->rightPtr);

        // Copy the inorder
        // successor's content to this node
        root->data = temp->data  ;

        // Delete the inorder successor
        root->rightPtr = deleteNode(root->rightPtr, temp->data);
    }
    return root;
}

