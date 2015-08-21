//header files block start
#include<stdio.h> 
#include<conio.h>
#include<string.h>
//header files block end
//functions prototype block start
int mainMenu();
int authUser();
 

//function prototype block end
void main(){ //Strat main body
	
	int userVal;
	int authVarification;
	while(1)
	{// while body start
		fflush(stdin);
		authVarification = authUser();
		if(authVarification)
		{// if body start
			system("cls");
			userVal = mainMeun();
			switch(userVal){ // switch body start
				case 1:
					printf("i am in case one");
					break;
				case 2:
					printf("i am in case two");
					break;
				case 3:
					printf("i am in case three");
					break;
				case 4: 
					printf("i am in case 4");
					break;
				default:
					printf("i am in defualt");
			
			
			} // switch body end
		}// if body end
		else
		{//  else body start
			system("cls");
			printf("You Entered Wrong Pin Number\n");
		}// else body end
		
	}// while body end	
	printf("i am  in main body");
	
}//end main body

/*
	Declaretion of function authUser
	
	This function will check that the coming user
	is Authorized or not
*/
int authUser(){
	int pinNumber = 1100;
	int userPin;
	printf("Please Enter your Pin Number: ");
	scanf("%d",&userPin);
	if(userPin == pinNumber)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


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
	
	return returnVar; //return to calling function
	
} // mainMeun function body end






