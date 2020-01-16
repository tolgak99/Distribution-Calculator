#include <stdio.h>
#include <math.h>

int fact(int);
double power (double,int);

int main (void){

double prob,sumprob,dbinom,first,a1,a2,all,num;

printf("Enter question number: ");
scanf("%lf",&all);
printf("Enter how many question number: ");
scanf("%lf",&num);
printf("Enter probability: ");
scanf("%lf",&prob);


first= (fact(all)/(fact(num)*(fact(all-num))));
a1=power(prob,num);
a2=power ( (1-prob) , (all-num));
sumprob=a1*a2;
dbinom=first*sumprob;
printf("%lf\n",dbinom);


return(0);
}

int fact (int a){
	int i,factorial=1;

	for(i=1; i<=a; ++i)
        {
            factorial *= i;              
        }

	return(factorial);
}

double power (double prob , int pow){
	double result=1;

	for (pow; pow>0; pow--)
{
result = result * prob;
}
	return(result);

}
