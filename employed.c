#include<stdio.h>

struct employ{
    int id;
    char name[60];
    float salary;
    float pf;
    float totalbonus;
};
int main(){ 
    struct employ E[3];
for(int i=0;i<3;i++){
    printf("enter id :");
    scanf("%d",& E[i].id);
    printf("enter name :");
    scanf("%s",E[i].name);
    printf("enter  salary :");
    scanf("%f",&E[i].salary);
}
printf("enter salary report");
for(int i=0;i<3;i++){   
     printf(" id is:%d\n",E[i].id);
     printf(" name is :%s\n",E[i].name);
     printf("  salary with out bouns os:%f\n",E[i].salary);
     printf("total  salary :%f\n",E[i].totalbonus);
      if(E[i].salary >=10000){
        E[i].pf=10000*0.05;
    }
    else if(E[i].salary < 5000){
        printf("medical facility");
    }
    E[i].totalbonus= E[i].pf+E[i].salary;

}
return 0;
}
