#include <stdio.h>
#include <stdlib.h>
#include "tree.h"


/* function main begins program execution */

 int main( void )
 {
     int i; /* counter to loop from 1-10 */
     int item; /* variable to hold random values */
    TreeNodePtr rootPtr = NULL; /* tree initially empty */


     printf( "The numbers being placed in the tree are:\n" );

     /* insert random values between 0 and 14 in the tree */
     for ( i = 1; i <= 10; i++ ) {
         item = rand() % 15;
         printf( "%3d", item );
         insertNode( &rootPtr, item );
     }/* end for */


     /* traverse the tree preOrder */
     printf( "\n\nThe preOrder traversal is:\n" );
     preOrder( rootPtr );
     /* traverse the tree inOrder */
     printf( "\n\nThe inOrder traversal is:\n" );
     inOrder( rootPtr );
     /* traverse the tree postOrder */
     printf( "\n\nThe postOrder traversal is:\n" );
     postOrder( rootPtr );
   //  TreeNodePtr temp = deleteNode(rootPtr, 10);
   //  printf("\n%d is root\n",temp->data);
     return 0; /* indicates successful termination */
 } /* end main */

