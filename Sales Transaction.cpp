#include<iostream>
int main()
{
	//TAking number for code
	//Taking price to charge
	int number, price;
	
	//to make heading 
	printf("\t>>SIMPLE SALES TRANSACTION<<");
	printf("\nWelcome Sir!");
	
	//To show what we have in our shop
	printf("\nWe have the following items\n");
	printf("\nWhat would you like to buy?");
	
	//We have given the things we have in our shop
	//Made a table list of things
	list:
	printf("\n\t ________________________ ");
	printf("\n\t|Code |Descrtiption|Price|");
	printf("\n\t|  1  |   Pencil   | 20  |");
	printf("\n\t|  2  |  Notebook  | 40  |");
	printf("\n\t|  3  |   Erase    | 10  |");
	printf("\n\t|________________________|");
	
	//Ask to write a code number to buy specified thing in list
	printf("\n\nSelect an item : ");
	scanf("%d",& number);
	
	//Condition applied
	if(number == 1){
		//This will tell what customer have bought
		printf("\nYou have selected Pencil to buy");
		price = 20;
	}else if(number == 2){
		//This will tell what customer have bought
		printf("\nYou have selected Notebook to buy");
		price = 40;
	}else if(number == 3){
		//This will tell what customer have bought
		printf("\nYou have selected Eraser to buy");
		price = 10;
	}else{
		//This will tell input is true or false 
		printf("Invalid input, Please write number between 1-3");
		
	//End of 1st part
	
}
	
	//Start of part B of our project
	//In this we will calculate the total amount paid by customer based on quantity of items
	int iCode, quantity, totalBill;
	
	//Ask to enter a Item code
	printf("\n\nEnter Item code again : ");
	scanf("%d",& iCode);
	
	//Ask to enter quantity of bought thing
	printf("\nEnter Quantity : ");
	scanf("%d",& quantity);
	
	//Formula to calculate the total amount paid by customer based on quantity of items
	totalBill = price * quantity;
	
	//Here it will tell the total amount
	printf("Total Amount is = %d", totalBill);
	
	//End of 2nd part

	//Start of 3rd part in this part
	//It have to accept payment cash from customer and calculate customer's change  
	
	int change, priceBycus, cusHavenoMoney;;

	//Here we will see if chnage is need to give to customer or not
	printf("\n\nLet's Calculate the customer's change if there is need or not\n");

	//Repeat to clear the thing
	printf("\nItem Code is = %d", iCode);

	//Repeat to clear the thing
	printf("\nQuantity is = %d", quantity);
	
	//Ask to enter amount paid by customer
	printf("\nEnter Amount paid by the customer =");
	scanf("%d",& priceBycus);
	
	//condition applied to give customer his & her change
	//If pricebycus is less than totalbill it will ask to give more cash
	if(priceBycus < totalBill){
		printf("\nGive us more cash");
	//If pricebycus is greater than totalbill it will ask to give change
	}else if(priceBycus > totalBill){
		printf("\nGive change to Customer"); 
	}else{
		//Greetings
		printf("\nThanks for coming");
	}

		//formula which will show the change have to hand in to customer
		change = priceBycus - totalBill;
		
		change = totalBill - priceBycus;
	
	//will show the change have to hand in to customer
	printf("\n%d Rs", change);
	
	//Part 4 start
	//in this part we will ask the customer after buying 
	//IF he wants to buy anything or not 
	//If he wants than show list if not than ask to go2 
		
	int button;
	//Ask to customer that he wants to buy or not?
	printf("\nWould you like to buy any thing");
	//creating button
	printf("\nYes OR No");
	//Button 1 created to buy
	printf("\nPress (1) to Buy");
	//Button 2 created to exit
	printf("\nPress (2) to Exit");
  	
  	//Output by user
  	printf("\nPress button : ");
  	scanf("%d",& button);
  	
	//Condition applied made buttons
	if(button == 1){
		printf("\nShow the list");
		//goto statement which show list again if he wants to buy
		goto list;
	
	}else if(button == 2){
		//Otherwise program will be terminated
		printf("\nExit");
	}
}
