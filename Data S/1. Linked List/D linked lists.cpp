#include<bits/stdc++.h>
using namespace std;
class Dnode{
public:
    int Data;
    Dnode* prev;
    Dnode* next;
    };




void INathead(Dnode** Head , int data){
Dnode* temp= new Dnode();
temp->Data= data;
temp->prev=NULL;
temp->next=NULL;
if(*Head!=NULL){(*Head)->prev=temp;temp->next=*Head; *Head=temp;}
if(*Head==NULL){*Head=temp;}
}
void PrintDlist(Dnode** Head){
Dnode* P=*Head;
while(P->next!=NULL){
    cout<< P->Data<<"  " ;
    P=P->next;
} cout<<P->Data<<" "<<endl;
return ;
}
int main(){
Dnode* Head= NULL;
INathead(&Head, 55);
INathead(&Head, 35);INathead(&Head, 25);INathead(&Head, 2);
PrintDlist(&Head);
return 0;
}
