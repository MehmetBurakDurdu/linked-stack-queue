#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;
};

struct node *front;
struct node *rear;

void enqueue(int veri)
{
    struct node *eklenecek=(struct node*)malloc(sizeof(struct node));
    if(rear==NULL)
    {
        rear=eklenecek;
        rear->data=veri;
        rear->next=NULL;
        front=rear;
    }
    else

    {
        rear->next=eklenecek;
        eklenecek->data=veri;
        eklenecek->next=NULL;
        rear=eklenecek;
    }
}

void dequeue()
{
        struct node * temp;
        temp=front;
        if (rear=NULL &&front==NULL)
        {
            printf("\nempty");
        }
        else if(front->next==NULL)
        {
            free(front);
            front=NULL;
            rear=NULL;
        }
        else
        {
            temp=temp->next;
            front=temp;
        }
}

void yazdir()
{
    struct node*temp;
    temp=front;

    if(front==NULL && rear==NULL)
    {
        printf("\nqueue bos");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("->%d",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main()
{
    int secim;
    while(1==1)
    {

        printf("\n1-enqueue");
        printf("\n2-dequeue");
        printf("\nseciminiz nedir?");
        scanf("%d",&secim);

        switch(secim)
        {
        case 1:
            printf("\n bir sayi giriniz");
            scanf("%d",&secim);
            enqueue(secim);
            yazdir();
            break;

        case 2:
            dequeue();
            yazdir();
            break;
        }


    }
}
