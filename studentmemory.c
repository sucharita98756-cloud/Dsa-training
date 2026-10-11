#include<stdio.h>
#include<stdlib.h>
struct student{
    int id;
    char name[60];
    float marks;
};
int main()
{
struct student s[3];
for(int i=0;i<3;i++){
    printf("enter id :");
    scanf("%d",&s[i].id);
    printf("enter name :");
    scanf("%s",s[i].name);
    printf("enter marks :");
    scanf("%d",&s[i].marks);}
for(int i=0;i<3;i++){   
     printf("enter id :%d/n",s[i].id);
     printf("enter name :%s/n",s[i].name);
     printf("enter marks :%f/n",s[i].marks);
}
return 0;
}



