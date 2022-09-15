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
        *head=ptr->next;
    }
    
}
int main()
{
    struct node *head=NULL;
     int ch,new_data1,new_data;
     do
     {
        printf("\n1.first_insert\n 2.last_insert\n 3.first_delete\n 4.last_delete\n 5.middle_insert\n 6.middle_delete\n 7.show\n 0.exit\n");
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
            insert_last(&head,new_data);
            printf("enter last_insert=");
            scanf("%d",&new_data);
            break;

            case 3:
            delete_first(&head);
            break;

            case 4:
            delete_last(&head);
            break;
/*
            case 5:
            insert_first(&head,0);
            printf("enter first_insert=");
            scanf("%d%d",&head,0);
            break;

            case 6:
            insert_first(&head,0);
            printf("enter first_insert=");
            scanf("%d%d",&head,0);
            break;*/
           
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