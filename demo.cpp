#include <bits/stdc++.h>
using namespace std ; 

class tree{

    public : 
    int data  ;
    tree* left ; 
    tree * right; 

    tree(int x  )
    {
        data =  x; 
        left == NULL ;
        right == NULL;
    }

}; 

void print(tree * node)
{
    if(node == NULL)
    return ; 

    print(node->left) ; 
    cout << node->data <<"  "  ; 
    print(node->right) ; 

    return ; 
}

int main()
{
    int c ; 
    cin >> c ; 
    cout << "value of c is " << c << endl ;
    tree* t1= new tree(0) ; 
    t1->left = new tree(10) ; 
    t1->right = new tree(20) ; 
    t1->left->left = new tree(30)  ; 
    t1->left->right = new tree(40)  ;
    t1->right->left = new tree(50) ; 

    print(t1) ; 
    
    
}