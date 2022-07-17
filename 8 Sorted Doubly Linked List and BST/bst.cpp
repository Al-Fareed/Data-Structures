//Author Name: Al-Fareed
//Reg No: 210970049
// Date Of Creation:18-05-2022
// Program Name: Program To Create a BST and perform inoder preorder and postorder
#include <iostream>
using namespace std;
int num;
struct node
{
  int info;
  struct node *left;
  struct node *right;
};
node *p, *pre, *temp, *root;
void insert()
{
  p = new (node);
  cout << "\nenter number:";
  cin >> num;
  p->info = num;
  p->left = p->right = NULL;
  if (root == NULL)
  {
    root = p;
    return;
  }
  temp = root;
  while (temp != NULL)
  {
    pre = temp;
    if (num >= temp->info)
      temp = temp->right;
    else
      temp = temp->left;
  }
  if (num >= pre->info)
    pre->right = p;
  else
    pre->left = p;
}
void preorder(node *temp)
{
  if (temp != NULL)
  {
    cout << " " << temp->info;
    preorder(temp->left);
    preorder(temp->right);
  }
}
void inorder(node *temp)
{
  if (temp != NULL)
  {
    inorder(temp->left);
    cout << " " << temp->info;
    inorder(temp->right);
  }
}
void postorder(node *temp)
{
  if (temp != NULL)
  {
    postorder(temp->left);
    postorder(temp->right);
    cout << " " << temp->info;
  }
}
void display()
{
  if (root == NULL)
  {
    cout << "EMPTY TREE";
    return;
  }
  cout << "\nPreorder traversal:";
  preorder(root);
  cout << "\nInorder traversal:";
  inorder(root);
  cout << "\nPostorder traversal:";
  postorder(root);
}
int main()
{
  int n;
  int count = 0;
  do
  {
    cout << "\nMenu\n1.Insert tree\n2.display\n3.exit";
    cout << "\nenter your choice:";
    cin >> n;
    switch (n)
    {
    case 1:
      count++;
      insert();
      break;
    case 2:
      cout << "\nthe no. of nodes in bst:" << count;
      display();
      break;
    case 3:
      exit(0);
      break;
    default:
      cout << "invalid";
      break;
    }
  } while (1);
  return 0;
}
