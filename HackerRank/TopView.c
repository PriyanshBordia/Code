#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {

    int data;
    struct node *left;
    struct node *right;

};

struct node* insert( struct node* root, int data ) {

	if(root == NULL) {

        struct node* node = (struct node*)malloc(sizeof(struct node));

        node->data = data;

        node->left = NULL;
        node->right = NULL;
        return node;

	} else {

		struct node* cur;

		if(data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;
		} else {
            cur = insert(root->right, data);
            root->right = cur;
		}

		return root;
	}
}

/* you only have to complete the function given below.
node is defined as

struct node {

    int data;
    struct node *left;
    struct node *right;

};

*/
int stack[100];
int top = 0;

void push(int a)
{
    stack[top++] = a;
}

void pop()
{
    printf("%d ", stack[--top]);
}

void topView( struct node *root)
{
    if (root == NULL)
        return;

    else
    {
        struct node *temp = root->left;
        while (temp != NULL)
        {
            push(temp->data);
            temp = temp->left;
        }

        while (top != 0)
            pop();

        while (root->right != NULL)
        {
            printf("%d ", root->data);
            root = root->right;
        }
        printf("%d ", root->data);
    }
}
