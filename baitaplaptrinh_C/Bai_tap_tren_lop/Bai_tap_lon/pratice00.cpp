// #include<bits/stdc++.h> 
// using namespace std ; 
// typedef struct Node{
//     int info ;  
//     Node *pNext ;  
// }NODE ;  
// typedef struct List{
//     Node *pHead ; 
//     Node *pTail ;  
// }LIST ; 
// void init(LIST &a)
// {
//     a.pHead = a.pTail = NULL  ; 
// }
// Node *createNewNode(int data)
// {
//     Node *p = new Node ;  
//     p->info = data ; 
//     p->pNext = NULL ; 
//     return  p ;  
// }
// void addhead(LIST &a,Node *p)
// {
//     if(a.pHead == NULL)
//             a.pHead = p ;  
//     else 
//     {
//           p->pNext = a.pHead ;  
//          a.pHead =  p  ;    
//     }
// }
// void InputHead(LIST &a)
// {
//     int True = 1 ; 
//      int n,x  ; 
//      cout<<"Nhap so luong phan tu muon them vao List: "<<endl  ; 
//      cin>>n ;  
//      for(int i=0;i<n;i++)
//      {
//         cout<<endl<<"Nhap gia tri X muon them vao: " ; 
//         cin>>x;
//         Node *p = createNewNode(x) ;  
//         addhead(a,p) ;   
//      }  
// }
// void displayList(LIST a)
// {
//     cout<<"Phan tu can xuat: " ;  
//     for(Node *p  =a.pHead ;  p; p=p->pNext)
//     {
//         cout<<p->info<<"\t" ;  
//     }
// }
// void SortDown(LIST &a)
// {
//     for(Node *p = a.pHead ; p ; p=p->pNext)
//     {
//         for(Node *q = p->pNext ;  q ; q=q->pNext )
//         {
//             if(p->info < q->info)
//             {
//                 int tmp = p->info  ;  
//                 p->info = q->info ;  
//                 q->info = tmp ;  
//             }
//         }
//     }
// }
// int deleteNodeX(LIST &a, int x)
// {
//     Node *tmp = NULL ;  
//     for(Node *p = a.pHead;p;p=p->pNext)
//     {
//         if(p->info == x)
//         {
//             if(tmp == NULL )
//             {
//                  tmp = a.pHead ;  
//                 a.pHead= a.pHead->pNext ;  
//                 delete(tmp) ; 
//                  return 1;  
//             }else
//             {
//                     tmp->pNext = p->pNext ; 
//                 Node *q =  p ;   
//                 delete(q) ;  
//                 return 1; 
                
//             }
//         }
//         tmp = p ;   
//     }
//     return 0 ;  
// }
// void inssertLast(LIST &a,int x)
// {
//     Node *q = createNewNode(x) ;  
//     Node *tmp =  NULL ; 
//     for(Node *p = a.pHead ;p ; p =p->pNext)
//     {
//             tmp = p ;  
//     }
//     tmp->pNext = q ;  
    
// }
// void insssertFirst(LIST &a,int x)
// {
//     Node *q = createNewNode(x) ;  
//     q->pNext = a.pHead ;  
//          a.pHead =   q ;    

// }
// void findXThenInsertLEFT(LIST &a)
// {
//     int x ; 
//     cout<<endl<<"nhap x: " ; 
//     cin>>x ; 
//     Node *tmp = NULL ;  
//     for(Node *p = a.pHead ; p;p=p->pNext)
//     {
//         if(p->info == x)
//         {
//                 if(tmp == NULL )
//                 {
//                     cout<<"Nhap x: ";  
//                     cin>>x ; 
//                     insssertFirst(a,x) ;  
//                     return ;  
//                 }else
//                 {
//                     Node *q =  p  ;  
//                     cout<<endl<<"Nhap gia tri cho x: "; 
//                     cin>>x ; 
//                     Node *aa = createNewNode(x) ; 
//                     tmp->pNext  =  aa ;  
//                     aa->pNext =  p ;  
//                     return ;  
//                 }        
//         }
//         tmp = p  ;  
        
//     }
// }
// void findXThenInsertRIGHT(LIST &a)
// {
//         int x;  
//         cout<<"Nhap x: ";
//         cin>>x ; 
//         for(Node *p = a.pHead ; p;p=p->pNext)
//         {
//                 if(p->info == x)
//                 {
//                     cout<<endl<<"Nhap gia tri can chen:" ; 
//                     cin>>x ;  
//                     Node *tmp = createNewNode(x) ; 
//                     Node *q = p->pNext ;  
//                 p->pNext = tmp ;  
//                 tmp->pNext = q;   
//                 return ;  
//                 }
//         }
// }
// int main()
// {
//     LIST a ; 
//     int x ; 
//     init(a) ; 
//     InputHead(a) ; 
//     displayList(a); 
//     SortDown(a) ;  
//     cout<<endl<<"Mang sau khi sap xep: " ; 
//     displayList(a); 
//     // cout<<endl<<"Nhap x de xoa no: ";  
//     // cin>>x ; 
//     // deleteNodeX(a,x) ;  
//     // displayList(a) ;  
//     //     cout<<endl<<"Sau khi them phan tu: ";  
//     // inssertLast(a,8) ; 
//     // displayList(a) ;  
//         findXThenInsertRIGHT(a) ;    
//         displayList(a) ; 
// }


// #include<bits/stdc++.h>
// using namespace std ;  
// typedef struct Node{
//     int info ;  
//     Node *pLeft ;
//     Node *pRight ;    

// }NODE ; 
// typedef Node* TREE ;  
// void initTree(TREE &pRoot)
// {
//    pRoot = NULL ;  
// }
// Node *createNewNode(int x)
// {
//     Node *p = new Node ;  
//   p->info = x ; 
//   p->pLeft = p->pRight = NULL ;  
//   return p ;  
// }
// int InsertNode(TREE &root,int x)
// {
//     if(root == NULL)
//     {
//         root = createNewNode(x) ;
//         return 1 ; 
//     }else if( root->info == x )
//         return 0  ; 
//     else if(root->info > x)
//         return InsertNode(root->pLeft,x);  
//         else return InsertNode(root->pRight,x) ;  
// }
// void taoCay(TREE &root)
// {
//     int x ,f ; 
//     initTree(root) ; 
//      do{
//         cout<<"Nhap x" ; 
//         cin>>x ;  
//         f = InsertNode(root,x) ;
//      }while(f) ; 
// }
// // Xuat cay: 
// void LNR(TREE  root)
// {
//     if(root)
//     {
//         LNR(root->pLeft); 
//         cout<<root->info<<"\t";  
//         LNR(root->pRight) ;  
//     }
// }
// void LRN( TREE root)
// {
//     if(root)
//     {
//         LRN(root->pLeft) ;  
//         LRN(root->pRight) ;
//         cout<<root->info<<"\t" ;
//     }
// }
// void NLR(TREE root)
// {
//     cout<<root->info<<"\t" ; 
//     NLR(root->pLeft) ; 
//     NLR(root->pRight) ; 
// }
// void NodeThayThe(TREE &a,TREE &p)
// {
//     if(p->pLeft)
// }
// int main()
// {
//     TREE a  ;  
//     initTree(a);  
//     taoCay(a) ; 
//     LNR(a) ; 
// }



#include <bits/stdc++.h>

//cau a:
typedef struct buukien
{
	char ID[10];
	char name[20];
	int weight;
}BK;

typedef struct node
{
	BK info;
	node *next;
}NODE;


typedef struct list
{
	NODE* pHead;
	NODE* pTail;
}LIST;


//khoi tao danh sach
void init(LIST &a)
{
	a.pHead = a.pTail = NULL;
}

NODE* createNode(BK x)
{
	NODE *p = new NODE;
	p->info =x ; 
    p->next = NULL ;   
    
	return p;
}
//cau b:
void insertFirst(LIST &a, BK x)
{
	NODE* p = createNode(x);
	if(a.pHead==NULL)
	{
		a.pHead=p;
		return;
	}
	p->next=a.pHead;
	a.pHead=p;
}


//cau c:
int sumWeight(LIST a)
{
	int s=0;
	NODE * p  = a.pHead ;  
	while(p!=NULL)
	{
		s+=p->info.weight;
		p=p->next;
	}
	return s;
}