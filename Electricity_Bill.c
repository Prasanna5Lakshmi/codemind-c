#include<stdio.h>
void display(int units, float cost)
{
    float bill = units*cost,s_charge;
    printf("Units Consumed: %d
",units);
    printf("Cost per Unit: %.2f
",cost);
    printf("Bill: %.2f
",bill);
    if(bill > 400){
        s_charge = 0.15*bill;
        }
        else {
            s_charge = 0.00 *bill;
       }
       printf("Surcharge: %.2f
",s_charge);
       printf("Total Amount: %.2f",bill+s_charge);
}
int main()
{
 int units;
 float cost;
 scanf("%d", &units);
 
 if(units > 0 && units < 200){
 cost = 1.20;
 display(units, cost);
}
 else if (units >= 200 && units < 400 ){
    cost = 1.40;
     display(units, cost);
}
else if (units >= 400 && units < 600 ){
    cost =1.60;
     display(units, cost);
}
else if (units >= 600 && units < 800 ){
    cost =1.80;
     display(units, cost);
    }
    else if (units >= 800){
    cost =2.00;
     display(units, cost);
}
return 0;
}
