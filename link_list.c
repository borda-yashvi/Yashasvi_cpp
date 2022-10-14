#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void head_count(struct node *head)
{
    int cnt=0;
    if(head==NULL)
    {
        printf("\n list empty");
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\n %d",ptr->data);
        cnt++;
        ptr=ptr->next;
    }
}
void insert_first(struct node **head_ref,int new_data1)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->next=*head_ref;
    temp->data=new_data1;
    *head_ref=temp;
}
void insert_last(struct node **head_ref,int new_data)
{
    struct node *ptr=*head_ref;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->data=new_data;
    if(*head_ref==NULL)
    {
        *head_ref=temp;
        return;
    }
    while(ptr->next!=NULL)
     ptr=ptr->next;
     ptr->next=temp;
     return;
}
void delete_first(struct node **head)
{
   struct node *ptr=*head;
   if(*head==NULL)
   {printf("\n empty !");}
   else
   {
          *head=ptr->next;
          //free(ptr);
          //return;
   }
}   
void delete_last(struct node **head)
{
    struct node *ptr=*head;
    if(*head==NULL)
    {
        printf("empty!");
    }
    else if(ptr->next==NULL)
    {
        free(ptr);
        return;
    }
    while(ptr->next->next!=NULL)
    ptr=ptr->next;
    ptr->next=NULL;
    return;
}
void middle_insert(struct node **head,int pos,int n_data)
{
    struct node *ptr=*head;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    struct node *n_node=*head;
    temp->data=n_data;
   while(ptr->data!=pos)
   {
    ptr=ptr->next;
   }
   n_node=ptr->next;
   ptr->next=temp;
   temp->next=n_node;
   return;
}
void middle_delete(struct node **head,int key)
{
   struct node *temp=*head,*prev;
   if(temp!=NULL&&temp->data==key)
   {
        *head=temp->next;
        free(temp);
        return;
   }
   while(temp!=NULL&&temp->data!=key)
   {
        prev=temp;
        temp=temp->next;
   }
   if(temp==NULL)
   return;
   prev->next=temp->next;
   free(temp);
}
int main()
{
    struct node *head=NULL;
     int ch,new_data1,new_data,new,box,data,pos,n_data;
     do
     {
        printf("\n 1.first_insert\n 2.last_insert\n 3.first_delete\n 4.last_delete\n 5.middle_insert\n 6.middle_delete\n 7.show\n 0.exit\n");
        printf("\nenter your choice :");
        scanf("%d",&ch);
       switch(ch)
        {
            case 1:
            printf("enter first_insert=");
            scanf("%d",&new_data1);
            insert_first(&head,new_data1);
            break;

            case 2:
            printf("enter last_insert=");
            scanf("%d",&new_data);
            insert_last(&head,new_data);
            break;

            case 3:
            delete_first(&head);
            break;

            case 4:
            delete_last(&head);
            break;

            case 5:
            printf("enter middle_insert position =");
            scanf("%d",&pos);
            printf("enter middle_insert=");
            scanf("%d",&n_data);
            middle_insert(&head,pos,n_data);
            break;
            
            case 6:
            printf("enter middle_delete=");
            scanf("%d",&data);
            middle_delete(&head,data);
            break;
           
            case 7:
            head_count(head);
            break;

            case 0:
            exit(0);
            break;

            default:
            printf("wrong choice !");
            break;
        }
    }while(ch<=200);
    
}