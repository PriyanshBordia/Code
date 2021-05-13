void printGivenLevel(struct node *root, int level)
{
    if (root == NULL)
        return;

    if (level == 1)
        printf("%d ", root->data);

    else if (level > 1)
    {
        printGivenLevel(root->left, level - 1);
        printGivenLevel(root->right, level - 1);
    }
}

void printLevelOrder( struct node *root) 
{  
    for (int i = 1; i < height(root))
        printGivenLevel(root, i);
}

int height(struct node *root)
{
    if (root == NULL)
        return 0;
    
    else
    {
        int lHeight = height(root->left);
        int rHeight = height(root->right);

        if (lHeight > rHeight)
            return lHeight + 1;
        else
            return rHeight + 1;
    }
}