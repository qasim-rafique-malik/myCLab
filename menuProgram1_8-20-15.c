#include<stdio.h> //header file
#include<conio.h> //header file
int mainMenu(); //function prototype

void main(){ //Strat main body
	
int userInt;

userInt = mainMeun();
printf("User entered %d",userInt);


	
}//end main body

/*
	Delaretion of function mainMeun

	This function will show menu to the user 
	and take input from the user 
	and return user input to calling funtion
*/
int mainMeun(){ // mainMeun function body start
	int returnVar;
	printf("Mian Menu \n");
	printf("\t For Balance Inquire Press 1\n");
	printf("\t For Withdraw Cash Press 2\n");
	printf("\t For Update Balance Press 3\n");
	printf("\t For exit Press 4\n");
	printf("\t Waiting For Your Response:");
	
	scanf("%d", &returnVar); //storing user data in variable 
	 
	//user input validation will come here
	return returnVar; //return to calling function
	
} // mainMeun function body end
