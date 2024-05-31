#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;
};

struct node *top=NULL;

void enqueue(int veri)
{
    struct node *eklenecek=(struct node*)malloc(sizeof(struct node));
    if(eklenecek==NULL)
    {
        printf("stack overflow");
        return;
    }
    eklenecek->data=veri;
    eklenecek->next=top;
    top=eklenecek;
}

void dequeue()
{
    if(top !=NULL)
    {
        struct node * temp;
        temp=top;
        top=top->next;
        free(temp);
        return;
    }
    printf("stack empty\n");
}

int peek()
{
    return top->data;
}



void yazdir()
{
    struct node*q;
    q=top;
    printf("\n");
    while(q!=NULL)
    {
        printf(" %d <=",q->data);
        q=q->next;
    }
    printf("NULL ");
}

int main()
{
    int secim;
    while(1==1)
    {
    printf("\n1-push");
    printf("\n2-pop");
    printf("\n3-peek");
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

    case 3:
        printf("top degeri %d",peek());
        break;
    }


    }


}

