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

	if(root == NULL)
    {

        struct node* node = (struct node*)malloc(sizeof(struct node));

        node->data = data;

        node->left = NULL;
        node->right = NULL;
        return node;
    }
    else
    {
        struct node* cur;

        if(data <= root->data)
        {
            cur = insert(root->left, data);
            root->left = cur;
        }
        else
        {
            cur = insert(root->right, data);
            root->right = cur;
        }

    return root;
    }
}


struct node *lca( struct node *root, int v1, int v2 )
{
    struct node *temp = root;
    struct node *prev = root;

    while (temp != NULL)
    {
        if ((temp->data > v1 && temp->data < v2) || (temp->data > v2 && temp->data < v1))
            return temp;

        else if(root->data == v1 || root->data == v2)
            break;

        prev = temp;

        else if (temp->data < v1 && temp->data < v2)
            temp = temp->right;

        else
            temp = temp->left;
    }
}
