//Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.
#include<stdio.h>
int main(){
    int salary;
    printf("enter salary:");
    scanf("%d",&salary);
    printf("salary after insurance premium:%d",salary-salary/10);
    salary=salary-(salary/10);
    printf("\nsalary after loan installment:%d",salary-salary/10);
}
