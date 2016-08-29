#include <stdio.h>
#include <stdlib.h>
struct student{
    int num;
    float score;
    struct student *next;
};
int n=0;
struct student *structLink(void){
    struct student *head,*p1,*p2;
    head=NULL;
    p1=p2=(struct student*)malloc(sizeof(struct student));
    scanf("%ld%f",&p1->num,&p1->score);
    printf("%ld\n%f\n",p1->num,p1->score);
    while(p1->num!=0){
        n=n+1;
        if(n==1) head=p1;
        else p2->next=p1;
        p2=p1;
        p1=(struct student*)malloc(sizeof(struct student));
        scanf("%ld%f",&p1->num,&p1->score);
        }
        p2->next=NULL;
        return(head);
};
int main()
{
    int i=0;
    struct student *head=structLink();
    for(i=0;i<n;i++){
        printf("%ld\n%f\n",head->num,head->score);
        head=head->next;
    }
}

