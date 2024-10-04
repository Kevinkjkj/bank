#include<stdio.h>include >

int main(){
	int bookID,dueDate,returnDate,daysOverdue,fineRate,fineAmount;
	
	//Take inputs from the user
	printf("Enter Book ID:");
	scanf("%d",&bookID);
	printf("Eter Due Date(in YYYYYMMDD format):");
	scanf("%d",&dueDate);
	printf("Enter Return Date(in YYYYMMDD):");
	scanf("%d",&returnDate);
	
 //Calculate days overdue
 daysOverdue=returnDate-dueDate;
 
 //Determine the fine rate and calculate the fine amount
 if(daysOverdue<=0){ 
 fineRate=0;
 fineAmount=0;
 }else if(daysOverdue<=7){
	 fineRate=50;
	 fineAmount=daysOverdue*fineRate;
 }else if(daysOverdue<=14){
	 fineRate=100;
	 fineAmount=(daysOverdue-7)*fineRate+7*50;
 }else{
	 fineRate=200;
	 fineAmount=(daysOverdue-14)*fineRate+(14-7)*100+7*50;
 }
 
 //Display the results
 printf("\nBook ID:%d\n",bookID);
 printf("Due Date;%d\n",dueDate);
 printf("Return Date:%d\n",returnDate);
 printf("Days Overdue:%d\n",daysOverdue);
 printf("Fine Rate:%d\n",fineRate);
 printf("Fine Amount:%d\n",fineAmount);
 
 return 0;
	
 }