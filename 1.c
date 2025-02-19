#include<stdio.h>
int main(void)
{
	float interest;
	float rate;
	int principal;
	int days;
	printf("%s","Enter loan principal(-1 to end):");
	scanf("%d",&principal);
	while (principal !=-1){
		printf("%s","Enter interest rate:");
		scanf("%f",&rate);
		printf("%s","Enter term of the load in days:");
		scanf("%d",&days);
		interest=(float) principal*rate*days/365;
		printf("The interest charge is %.2f\n",interest);
		
		printf("%s","Enter loan principal(-1 to end):");
		scanf("%d",&principal);
	}
	return 0;
}
