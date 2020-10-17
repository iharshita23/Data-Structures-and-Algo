//P of LL with insertion, deletion, del LL, get nth node of LL, Lsearch of LL//
//Func() used are LLprint that prints LL, LLPush Push Node at begin, LLinsert insert node at specific index specific data provided correct(not out of scope to LL)
//LLDelete Del the entire LL, LLsearch Linearly Search Node provided proper Data return -1 if not found, LLGetLen return Length of LL
#include<bits/stdc++.h>
using namespace std;
class Nodelist
{public:
    int data;
    Nodelist* next;
};
void LLPrint(Nodelist** Head){
Nodelist* t=*Head;
cout<<"|";
while(t->next!=NULL){
    cout<<t->data<<"|--|";
    t=t->next;
}cout<<t->data<<"|";

}
void LLPush(Nodelist** Head, int data){
Nodelist* temp= new Nodelist();
temp->data=data;
temp->next=*Head;
*Head=temp;
}
void LLinsert(Nodelist** Head, int index, int data){
    Nodelist* temp= new Nodelist();
temp->data=data;
temp->next=*Head;
if(index==1){
*Head=temp;

}
else{
Nodelist*p =*Head;
for(int i=0;i<index-2;i++){p=p->next;}
temp->next=p->next;
p->next=temp;

}
}
void LLDelete(Nodelist** Head){
Nodelist* current = *Head;
Nodelist* next;

while (current != NULL)
{
    next = current->next;
    free(current);
    current = next;
}

*Head = NULL;
}
int LLSearch(Nodelist** Head, int key){
Nodelist* Rotr= *Head;
int count=1;
while(Rotr->next!=NULL){
    if(key==Rotr->data) return count;
    else {Rotr=Rotr->next;count++;}
    }
    return -1;

}
int LLGetlen(Nodelist** Head){
int count=0;
Nodelist*p=*Head;while(1){
if(p->next==NULL){return count+1;}
while(p->next!=NULL){count++;p=p->next;}
}
}
void LLReverse(Nodelist** Head){
Nodelist* p=*Head;Nodelist *q;
q=p->next;



}



int main(){
Nodelist* Head=NULL;
LLPush(&Head, 2);
LLPush(&Head, 3);
LLPush(&Head, 5);
LLPrint(&Head); cout<<endl;
LLinsert(&Head,1,7);
LLinsert(&Head,3,11);
LLinsert(&Head,2,13);
LLPrint(&Head); cout<<endl;
LLPush(&Head, 17);
LLPrint(&Head); cout<<endl;
cout<<LLSearch(&Head,11)<<endl;
cout<<LLGetlen(&Head)<<endl;
return 0;}
