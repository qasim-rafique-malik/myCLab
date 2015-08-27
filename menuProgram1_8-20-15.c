//header files block start
#include<stdio.h> 
#include<conio.h>
//header files block end
//functions prototype block start
int mainMenu();
int authUser();
void BalanceInquire(int *userBalance);
int withdrawCash(int *userBalance);
void cashDeposit(int *);
//function prototype block end

void main(){ //Strat main body
	
	int userVal;
	int authVarification;
	int fail 				= 0; 
	int treminatorVar 		= 0;
	int noCLS				= 0;
	int userAmountArray[2]	= {2000,500};
	
	while(fail < 3 && treminatorVar == 0){// while body start
		fflush(stdin);
		authVarification 		= authUser();	
		if(authVarification){// if body start
			system("cls");
			while(treminatorVar == 0){// while body start
			
				fflush(stdin);	
				userVal = mainMeun();
				
				switch(userVal){ // switch body start
				
					case 1:
						system("cls");
						BalanceInquire(userAmountArray);
						break;
					case 2:
						
						system("cls");
						if(userAmountArray[1] <= 0){
							printf("you have reached maximum trasaction please take you card and try after 24 hour ");
							noCLS = 1;
							treminatorVar = 1;
						}
						else{
							withdrawCash(userAmountArray);
							system("cls");
						}
						break;
						
					case 3:
						system("cls");
						cashDeposit(userAmountArray);
						system("cls");
						break;
					case 4: 
						system("cls");
						treminatorVar = 1;
						break;
					default:
						system("cls");
						printf("You have entered Invalid number\n");
						break;
				
				} // switch body end
				
			}// while body end
		}// if body end	
		else{//else body start
		
			system("cls");
			printf("You Entered Wrong Pin Number\n");
			fail++;	
								
		}// else body end
	}// while body start
	if(fail == 3){ // fail if start
	
	system("cls");
	printf("You have entered wrong pin thrice so we have taken you card for scurity \nplease visit your branch to take your card back");
	
	}//fial if end
	if(noCLS == 1){
		printf("\nThank You");
	}else{
		system("cls");
		printf("Thank You");
	}
	/*if(treminatorVar == 1){
		system("cls");
		printf("Thank You");
	}*/
	
	
	
}//end main body

/*
	Declaretion of function authUser
	
	This function will check that the coming user
	is Authorized or not
*/
int authUser(){
	int pinNumber = 1100;
	int userPin;
	printf("Welcome to the first self ATM\n \n");
	printf("Please Enter your Pin Number: ");
	scanf("%d",&userPin);
	if(userPin == pinNumber){
		return 1;
	}
	else{
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

/*
	Delaretion of function BalanceInquire

	This fucntion will show user his/her total Ammount
	and the maximum Ammount that he can Withdraw in 24 hours
*/
void BalanceInquire(int *userBalance ){ // BalanceInquire function body start
	printf("You Total ammount is %d\n",*userBalance);
	userBalance++;
	printf("Maximum you Can withdraw %d\n",*userBalance);	
} // BalanceInquire function body end

/*
	Delaretion of function withdrawCash
	
	This function will detect the amount from total amount
	
*/

int withdrawCash(int *userBalance){ //function withdrawCash body start
	int option[6] = {50,100,200,300,400,500};
	int userVar;
	int userMaxTotal = *userBalance;
	userBalance++;
	int userMinTotal = *userBalance;
	userBalance--;
	int termintorVar = 0;
	printf("50\t 100\n");
	printf("200\t 300\n");
	printf("400\t 500\n");
	
	while(termintorVar == 0){//while body start
	
		fflush(stdin);
		scanf("%d", &userVar);
		
		if(userMinTotal >= userVar){//if body start
		
			switch(userVar){//switch body start
				
				case 50:
					
					*userBalance 	= *userBalance-50;
					userBalance++;
					*userBalance 	= *userBalance-50;
					printf("Please take your cash and Press any key to return main menu");
					getch();
					termintorVar	= 1;
					break;
					
				case 100:
					
					*userBalance 	= *userBalance-100;
					userBalance++;
					*userBalance 	= *userBalance-100;
					printf("Please take your cash and Press any key to return main menu");
					getch();
					termintorVar	= 1;
					break;
					
				case 200:
					
					*userBalance 	= *userBalance-200;
					userBalance++;
					*userBalance 	= *userBalance-200;
					printf("Please take your cash and Press any key to return main menu");
					getch();
					termintorVar	= 1;
					break;
					
				case 300:
					
					*userBalance 	= *userBalance-300;
					userBalance++;
					*userBalance 	= *userBalance-300;
					printf("Please take your cash and Press any key to return main menu");
					getch();
					termintorVar	= 1;
					break;
					
				case 400:
					
					*userBalance 	= *userBalance-400;
					userBalance++;
					*userBalance 	= *userBalance-400;
					printf("Please take your cash and Press any key to return main menu");
					getch();
					termintorVar	= 1;
					break;
					
				case 500:
					
					*userBalance 	= *userBalance-500;
					userBalance++;
					*userBalance 	= *userBalance-500;
					printf("Please take your cash and Press any key to return main menu");
					getch();
					termintorVar	= 1;
					break;
					
				default:
					printf("You have entered wrong option please try again");
						
			}//switch body start
		}//if body end
		else{//else body start
			system("cls");
			printf("The amount is greater then the maximum amount you can withdraw\n");
			printf("50\t 100\n");
			printf("200\t 300\n");
			printf("400\t 500\n");
			printf("Please try again:");
		}//else body end
		
	}//while body end
	return 1;	
}//function withdrawCash body end

/*
	Declaration of function cashDeposit
	
	This fucntion will add amount to total amount
*/
void cashDeposit(int *userBalance){//function cashDeposit body start
	int userVar;
	printf("Please enter the amount: ");
	
	scanf("%d",&userVar);
	*userBalance 	= *userBalance+userVar;
	printf("Your balance is updated press any key to return main meun\n");
	getch();
}//function cashDeposit body end

 








