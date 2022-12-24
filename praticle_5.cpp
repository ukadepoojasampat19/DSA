#include<iostream>
using namespace std;


void inorder(struct node* root);
node* search(struct node* root,int val);
node* delete_bst(struct node* root,int num);
node* inorder_succ(struct node* root);
int height(struct node* root);
void leaf_node(struct node* root);
node*  mirror_image(struct node* root);
struct node
{
    int data;
    struct node* left;
    struct node* right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};


node* create_bst(struct node* root,int key)
{
    if(root == NULL)
    {
        return new node(key);
    }
    if(key < root->data)
    {
        root->left=create_bst(root->left,key);
    }
    else{
        root->right=create_bst(root->right,key);
    }

    return root;
}

int main()
{
    int number;
    struct node* root=NULL;
    // cin>>number;

    root=create_bst(root,5);
    create_bst(root,8);
    create_bst(root,4);
    create_bst(root,6);
    create_bst(root,1);
    create_bst(root,2);
    create_bst(root,7);
    create_bst(root,9);
    create_bst(root,10);
    create_bst(root,3);
 
    inorder(root);

//    searching in binary search tree
    node* store;

    if((store=search(root,5)) == NULL)
    {
        cout<<"\nElement does not exits.";
    }
    else{
        cout<<"\nElement exists.";
    }

    // to delete the element from the the bst tree.

    delete_bst(root,6);
    cout<<"\n";
    inorder(root);

    cout<<"\n to find out the height of the tree\n";

    cout<<height(root);
   
    cout<<"\nto print the leaf node of the tree.\n";

    leaf_node(root);
   
    cout<<"\n mirror image\n";

    mirror_image(root);
    cout<<"\n";
    inorder(root);

    //   int choice;
    //  do
    //  {
    //     cout<<"1.insert the element into the stack.\n";
    //     cout<<"2.display the tree.\n";
    //     cout<<"3.search an element into the stack.\n";
    //     cout<<"4.delete an element from the stack.\n";
    //     cout<<"5.depth of the tree.\n";
    //     cout<<"6.to print the leaf node.\n";
    //     cout<<"7.to print the mirror image of the tree.\n";
    //     cout<<"8.tre traversal.\n"
    //     cout<<"9.Exits\n";

    //     cin>>choice;

    //     switch(choice)
    //     {
    //         case 1:
    //         {
    //             cout<<"INSERTION.\n";
    //             cout<<"Enter the number you want to insert.\n";
    //             cin>>number;
    //             if(root == NULL)
    //             {
    //                 root=create_bst(root,number);
    //             }
    //             else{
    //                 create_bst(root,number);
    //             }
    //             cout<<"\n";
    //             break;
                

    //         }
    //         case 2:
    //         {
    //             inorder(root);
    //             cout<<"\n";
    //             break;
    //         }
    //         case 3:
    //         {
    //             node* store;

    //             if((store=search(root,5)) == NULL)
    //             {
    //                 cout<<"\nElement does not exits.";
    //             }
    //             else{
    //               cout<<"\nElement exists.";
    //             }
    //             cout<<"\n";
    //             break;
    //         }
    //         case 4:
    //         {
    //             cout<<"\nElement that you want to delete.\n";
    //             cin>>number;
    //             delete_bst(root,number);
    //             cout<<"\n";

    //             break;
    //         }
    //            case 5:
    //            {
    //                cout<<"\n DEPTH \n";
    //                cout<<height(root);
    //                cout<<"\n";
    //                break;
    //            }
                //case 6:
    //             {
    //                 cout<<"\nLEAF_NODE\n";
    //                 leaf_node(root);
                    //    break;
    //             }    
    //          case 7:
                // {
                //     cout<<"\n MIRROR IMAGE \n";
                //     mirror_image(root);
                //     break;
                // }
                // case 8:
                // {
                //     cout<<"\n TREE TRAVERSAL BY INORDER \n";
                //     inorder(root);
                //     break;
                // }
    
    
    //     }
       
    //  } while (choice !=9);
     
    return 0;
}

node*  mirror_image(struct node* root)
{
    struct node* temp;
    if(root == NULL)
    {
        return 0;
    }

    temp=root->left;
    root->left=root->right;
    root->right=temp;

    return root;
}

void leaf_node(struct node* root)
{
    if(root == NULL)
    {
        return ;
    }
    if(root->left == NULL && root->right == NULL)
    {
        cout<<root->data<<"\t";
    }

    leaf_node(root->left);
    leaf_node(root->right);

    return;

}

int height(struct node* root)
{
    int h;
    // step 1.
    if(root == NULL)
    {
        return 0;
    }
    //step 2.
    int left=height(root->left); /*return zale now it will movw toward right*/
    int right=height(root->right);

    // step 3.

    if(left >right)
    {
        h=1+ left;
    }
    else{
        h=1+right;
    }

    return h;


}

void inorder(struct node* root)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

node* search(struct node* root,int val)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(val == root->data)
    {
        return root;
    }
    if(val < root->data)
    {
        root->left=search(root->left,val);
    }
    else{
        root->right=search(root->right,val);
    }
}

node*  delete_bst(struct node* root,int num)
{
    if(num < root->data)
    {
        root->left=delete_bst(root->left,num);
    }
    else if(num > root->data)
    {
        root->right=delete_bst(root->right,num);
    }
    else
    {
        if(root->left == NULL)
        {
            node* temp=root->right;
            free(root);

            return temp;
        }
        else if(root->right == NULL)
        {
            node*temp=root->left;
            free(root);

            return temp;
        }
        else{
            
            // node having two child.

            node* temp=inorder_succ(root->right);
            root->data=temp->data;
            root->right=delete_bst(root->right,temp->data);


        }

        return root;
    }

    
}



node* inorder_succ(struct node* root)
{
    node* curr=root;
    while(curr->left != NULL)
    {
        curr=curr->left;
    }

    return curr;
}
