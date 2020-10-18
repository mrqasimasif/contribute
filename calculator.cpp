//This program performs basic arithmatic operations
//Defining simple calculator
#include <iostream>

using namespace std;
//Defining function for arithmatic operations
double operation(double num1, double num2, char oper)
{
//Condition to check whether the inserted operator is true or not
   while (true)
    {
      if (oper == '+')   return num1 + num2;		//addition of two variables
      if (oper == '-') 	 return num1 - num2;		//subtraction
      if (oper == '*')   return num1 * num2;		//multiplication
      if (oper == '/')   return num1 / num2;		//division
      	//Remainder
      if (oper == '%')   return static_cast<int>(num1) / static_cast<int>(num2);
      cout << "!!wrong operator!!\nSelect one from the following (+,-,*,/) : ";
      cin >> oper;
    }
}

//Qasim yr pull request merge kr ly

int main()
{
	float op1, op2, result;
	char oper;
	cout << "The program is calculator of basic calculations ";
	cout << "Enter '+' for Addition\n";
	cout << "Enter '-' for Subtraction\n";
	cout << "Enter '*' for Multiplication\n";
	cout << "Enter '/' for Division\n";
	cout << "Enter '%' for Remainder\n";
	
	cout << "\nEnter 1st Operand : ";
	cin >> op1;
	cout << "\nEnter 2nd Operand : ";
	cin >> op2;
	cout << "\nEnter operator : ";
	cin >> oper;
	result = operation(n1, n2, oper);
	//printing the result of the selected expression
	cout << "This result of integer expression is : " << result << endl;
	system("pause");
	return 0;
}
#pragma once
//cbinary tree
#include<iostream>
#include"cNode.cpp"
using namespace std;
class cBinTree{
	
	cNode *root;
	int count;
	public:
		cBinTree(): root(NULL),count(0)
		{
		}
		cBinTree(cNode *&ptr):root(ptr),count(1)
		{
			ptr=root->left=root->right=NULL;
			
		}
		
		void insert(cNode *&ptr)
		{ cNode *rptr, *bptr;
				rptr=root;
			if(!root)
			root=ptr;
		
			else
			{ 	
				while(rptr)
				{
					bptr=rptr;
					if(rptr->data==ptr->data)   return;         //for dublicate key
					
					if(rptr->data<ptr->data)     rptr=rptr->right;
					else  rptr=rptr->left;
						
				}
				 	if(bptr->data<ptr->data)   bptr->right=ptr;
					else      bptr->left=ptr;
					
		}
			++count;
		ptr=ptr->left=ptr->right=NULL;
		}
		void preInOrder(cNode *root)
		{
			//	void printInOrder ();
			if(root)
			{
				preInOrder(root->left);
				root->print();
					preInOrder(root->right);
			}
		
		}
		void preOrder(cNode *root)
		{
			//	void printInOrder ();
			if(root)
			{
				root->print();
				preOrder(root->left);
				preOrder(root->right);
			}
		
		}	void postOrder(cNode *root)
		{
			//	void printInOrder ();
			if(root)
			{
				postOrder(root->left);
			
					postOrder(root->right);
						root->print();
			}
		
		}
				void reverseOrder(cNode *root)
		{
			//	void printInOrder ();
			if(root)
			{
					reverseOrder(root->right);
						root->print();
				reverseOrder(root->left);
			
			
					
			}
		
		}
		void printReverseOrder()
		{

			if(!root)   cout<<"\nIs Empty Tree!"<<endl;
			else reverseOrder(root);
		}
		void printPostOrder()
		{

			if(!root)   cout<<"\nIs Empty Tree!"<<endl;
			else postOrder(root);
		}
		
		void printPreOrder()
		{

			if(!root)   cout<<"\nIs Empty Tree!"<<endl;
			else preOrder(root);
		}
		
		void printInOrder()
		{

			if(!root)   cout<<"\nIs Empty Tree!"<<endl;
			else preInOrder(root);
		}
		void deleteNodes(cNode *root)
		{
			if(root)
			{
				deleteNodes(root->left);
				deleteNodes(root->right);
				delete root;
				
			}
		}
		~cBinTree()
		{
			deleteNodes(root);
			
		}
		int getDeg(cNode *root)
		{
			if(root)
			{
				if(root->left&&root->right)
				return 2;
				getDeg(root->left);
				getDeg(root->right);
			}
		}
		int getDegree()
		{
			int deg;
		//	int getDeg(cNode *root);
			if(!root)
			return 0;
			deg=getDeg(root);
			if(deg==2)
			return deg;
			return 1;
		}
			cNode * smallest(cNode *root)
		{
				if(root)
			{
			while(root->left!=NULL)
			{
		
				root=root->left;
					}
				
			}
			root->print();
				return root;
		
		}
	void getSmallerkey()
		{
		
				if(!root)   {
			cout<<"\nIs Empty Tree!"<<endl; }
		
				else 
				smallest(root);
			       
		}
			cNode * large(cNode *root)
		{
				if(root)
			{
			while(root->right!=NULL)
			{
		
				root=root->right;
					}
				
			}
				root->print();
				return root;
		
		}
	void getLargestkey()
		{
		
				if(!root)   {
			cout<<"\nIs Empty Tree!"<<endl; }
		
				else 
				large(root);
			       
		}
 cNode* DeleteNodeInBST(cNode* root,int data)
{
    if(root==NULL) return root;
    else if(data<=root->data) 
        root->left = DeleteNodeInBST(root->left, data);
    else if (data> root->data)
        root->right = DeleteNodeInBST(root->right, data);
    else
    {
        //No child
        if(root->right == NULL && root->left == NULL)
        {
            delete root;
            root = NULL;   
        }
        //One child 
        else if(root->right == NULL)
        {
            cNode* temp = root;
            root= root->left;
            delete temp;
        }
        else if(root->left == NULL)
        {
            cNode* temp = root;
            root= root->right;
            delete temp;
        }
        //two child
        else
        {
            cNode* temp = large(root->left);
            root->data = temp->data;
            root->left = DeleteNodeInBST(root->left, temp->data);
        }    return root;
    }
 
}
	
/*	int getLvl(cNode *root,int &lvl)
		{
			if(root)
			{
				getLvl(root->left,lvl);
				getLvl(root->right,lvl);
			}
			return lvl;
		}
		int getLevel()
		{
			int level=0;
			if(!root)
			return -1;
			level=getLvl(root,level);
			return level ;
		}*/
	cNode* search(cNode* root, int key) 
{ 
    // Base Cases: root is null or key is present at root 
    if (root == NULL || root->data== key) 
       return root; 
     
   
    if (root->data < key) 
       return search(root->right, key); 
  
     
    return search(root->left, key); 
} 
		};
		int main()
		{
			cBinTree tr;
			int o=76,l=90,u=6,b=100,c=45,r=3;
			cNode *p;
			p=new cNode(o);
			tr.insert(p);
			p=new cNode(l);
			tr.insert(p);
				p=new cNode(u);
			tr.insert(p);
			p=new cNode(b);
			tr.insert(p);
				p=new cNode(c);
			tr.insert(p);
				p=new cNode(r);
			tr.insert(p);
		//tr.root->print();
		cout<<"In order:";
		tr.printInOrder();
		cout<<"\nReverse Order:";
		tr. printReverseOrder();
			cout<<"\nPost Order:";
		tr.printPostOrder();
		cout<<"\nPre Order:";
		tr.printPreOrder();
		cout<<"\nDegree:";
cout<<tr.getDegree();
//cout<<"\nLevel:";
//cout<<tr.getLevel();
cout<<endl;
cout<<"Smallest Node:";
tr.getSmallerkey();
//cout<<tr.search(p, 76) ;
cout<<"\nLargest Node:";
tr.getLargestkey();
cout<<"\nWe are deleting 100"<<endl;
cout<<tr.DeleteNodeInBST(p,100);
cout<<endl;
tr.printInOrder();
		}
