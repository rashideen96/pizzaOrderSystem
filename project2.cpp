#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>

//.................................................................//
//Written by : Xyb3rw0rm...........................................//
//date : 16/8/16...................................................//


using namespace std;

int main(){
	
	int input;
	char character,choice,receipt;
	int order,quantity;
	float payment,balance;
	time_t now = time(0);
	char* dt=ctime(&now);
	const float set1=23.40;
	const float set2=30.50;
	const float set3=20.30;
	const float set4=25.20;
	
	
	system("cls");
	cout << "\n -----------Welcome to zan's pizza------------"<<endl;
	cout << "|                                             |"<<endl;
	cout << "|  Press Y to continue and press N to exit    |"<<endl;
	cout << "|                                             |"<<endl;
	cout << " ---------------------------------------------"<<endl;
	
	input:
	cout << "\nEnter input : ";
	cin >> character;
	
	switch(character){
		case 'Y' :
		case 'y' :
			goto menu;
			break;
		case 'N' :
		case 'n' :
			system("PAUSE");
			exit(EXIT_SUCCESS);	
			break;
		default :
			cout << "\nYou enter wrong input"<<endl;
			goto input;
			break;
					
	}
	
			menu:
			system("cls");	
			cout << "\n -----------------------------------------------------------"<<endl;
			cout << "|                            Menu                           |"<<endl;
			cout << " -----------------------------------------------------------"<<endl;
			cout << "\n ------------Set A----------\t ------------Set B----------"<<endl;
			cout << "| Pizza : Tropical Chicken  |\t| Pizza : Beef Pepperoni    |"<<endl;
			cout << "| Drink : Pepsi             |\t| Drink : Coca COla         |"<<endl;
			cout << "| Price : RM 23.40          |\t| Price : RM 30.50          |"<<endl;
			cout << " ---------------------------\t ---------------------------"<<endl;
			
			cout << "\n ------------Set C----------\t ------------Set D----------"<<endl;
			cout << "| Pizza : Deluxe Cheese     |\t| Pizza : Hawaiian Chicken  |"<<endl;
			cout << "| Drink : Sprite            |\t| Drink : 7up               |"<<endl;
			cout << "| Price : RM 20.30          |\t| Price : RM 25.20          |"<<endl;
			cout << " ---------------------------\t ---------------------------"<<endl;  
		
			choose:
			cout << "\nChoose set : ";
			cin >> choice;  
			
			
			switch(choice){
				case 'A' :
				case 'a' :	
					cout << "Quantity   : ";
					cin >> quantity; 
					system("cls"); 
					cout << "\nYou pick set : A"<<endl;
					cout << "\n ---------------------------"<<endl;
					cout << "| Pizza : Tropical Chicken  |"<<endl;
					cout << "| Drink : Pepsi             |"<<endl;
					cout << "| Price : RM 23.40          |"<<endl;
					cout << " ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "Quantity  : "<<quantity<<endl;
					cout << "Your total cost is RM "<<(set1*quantity)<<endl;
					do{
						cout << "\nPlease make your payment RM: ";
						cin  >> payment;
	
					if(payment>=(set1*quantity)){
		
						balance=payment-(set1*quantity);
						cout << fixed<<showpoint<<setprecision(2);
						cout << "\nYour balance is RM: " << balance;
					}
					
					else{
			
						cout<< "\nPayment not enough";
						}
					}while(payment< (set1*quantity));
					x:
					cout << "\n\nDo you want to print receipt? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						cout << "\n ------------------------------------------------"<<endl;
						cout << "|                  Zan's Pizza                   |"<<endl;
						cout << " ------------------------------------------------"<<endl;
						cout << endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "  Tel  : 03-339-31206     Fax   : 013-363-4357"<<endl;
						cout << "  Till : R3451            Order : M35042627"<<endl;
						cout << endl;
						cout << endl;
						cout << "  Cashier :  MIRUL"<<endl;
						cout << "  Shift   :  SHIFT-1"<<endl;
						cout << endl;
						cout << "\n ------------------------------------------------"<<endl;
						cout << "| Description      Qty     Price      Amount     |"<<endl;
						cout << " ------------------------------------------------"<<endl;
						cout << "  Set A "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "  Total "<<"                              "<<set1*quantity<<endl;
						cout << "  Cash "<<"                               "<<payment<<endl;
						cout << "  Balance "<<"                            "<<balance<<endl;
						cout << " ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "\nYou enter wrong input!!!"<<endl;
						goto x;
					}
					
					break;
				case 'B' :
				case 'b' :
					cout << "Quantity   : ";
					cin >> quantity;  
					system("cls");
					cout << "\nYou pick set : B"<<endl;
					cout << "\n ---------------------------"<<endl;
					cout << "| Pizza : Beef Pepperoni    |"<<endl;
					cout << "| Drink : Coca COla         |"<<endl;
					cout << "| Price : RM 30.50          |"<<endl;
					cout << " ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "Quantity  : "<<quantity<<endl;
					cout << "Your total cost is RM "<<(set2*quantity)<<endl;
					do{
					cout << "\n\nPlease make your payment RM: ";
					cin  >> payment;
	
					if(payment>=(set2*quantity)){
		
					balance=payment-(set2*quantity);
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\nYour balance is RM: " << balance<<endl;
		
					}
					else{
			
					cout<< "\nPayment not enough";
					}
					}while(payment<(set2*quantity));
					y:
					cout << "\n\nDo you want to print receipt? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						cout << "\n ------------------------------------------------"<<endl;
						cout << "|                  Zan's Pizza                   |"<<endl;
						cout << " ------------------------------------------------"<<endl;
						cout << endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "  Tel  : 03-339-31206     Fax   : 013-363-4357"<<endl;
						cout << "  Till : R3451            Order : M35042627"<<endl;
						cout << endl;
						cout << endl;
						cout << "  Cashier :  MIRUL"<<endl;
						cout << "  Shift   :  SHIFT-1"<<endl;
						cout << endl;
						cout << "\n ------------------------------------------------"<<endl;
						cout << "| Description      Qty     Price      Amount     |"<<endl;
						cout << " ------------------------------------------------"<<endl;
						cout << "  Set B "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "  Total "<<"                              "<<set1*quantity<<endl;
						cout << "  Cash "<<"                               "<<payment<<endl;
						cout << "  Balance "<<"                            "<<balance<<endl;
						cout << " ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "\nYou enter wrong input!!!"<<endl;
						goto y;
					}	
					break;
				case 'C' :
				case 'c' :	
					cout << "Quantity   : ";
					cin >> quantity;  
					system("cls");
					cout << "\nYou pick set : C"<<endl;
					cout << "\n ---------------------------"<<endl;
					cout << "| Pizza : Deluxe Cheese     |"<<endl;
					cout << "| Drink : Sprite            |"<<endl;
					cout << "| Price : RM 20.30          |"<<endl;
					cout << " ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "Quantity  : "<<quantity<<endl;
					cout << "Your total cost is RM "<<(set3*quantity)<<endl;
					do{
					cout << "\n\nPlease make your payment RM: ";
					cin  >> payment;
	
					if(payment>=(set3*quantity)){
		
					balance=payment-(set3*quantity);
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\nYour balance is RM: " << balance<<endl;
		
					}
					else{
			
					cout<< "\nPayment not enough";
					}
					}while(payment<(set3*quantity));
					z:
					cout << "\n\nDo you want to print receipt? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						cout << "\n ------------------------------------------------"<<endl;
						cout << "|                  Zan's Pizza                   |"<<endl;
						cout << " ------------------------------------------------"<<endl;
						cout << endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "  Tel  : 03-339-31206     Fax   : 013-363-4357"<<endl;
						cout << "  Till : R3451            Order : M35042627"<<endl;
						cout << endl;
						cout << endl;
						cout << "  Cashier :  MIRUL"<<endl;
						cout << "  Shift   :  SHIFT-1"<<endl;
						cout << endl;
						cout << "\n ------------------------------------------------"<<endl;
						cout << "| Description      Qty     Price      Amount     |"<<endl;
						cout << " ------------------------------------------------"<<endl;
						cout << "  Set C "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "  Total "<<"                              "<<set1*quantity<<endl;
						cout << "  Cash "<<"                               "<<payment<<endl;
						cout << "  Balance "<<"                            "<<balance<<endl;
						cout << " ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "\nYou enter wrong input!!!"<<endl;
						goto z;
					}	
					break;
				case 'D' :
				case 'd' :	
					cout << "Quantity   : ";
					cin >> quantity;  
					system("cls");
					cout << "\nYou pick set D"<<endl;
					cout << "\n ---------------------------"<<endl;
					cout << "| Pizza : Hawaiian Chicken  |"<<endl;
					cout << "| Drink : 7up               |"<<endl;
					cout << "| Price : RM 25.20          |"<<endl;
					cout << " ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "Your total cost is RM "<<(set4*quantity)<<endl;
					do{
					cout << "\nPlease make your payment RM: ";
					cin  >> payment;
	
					if(payment>=(set4*quantity)){
		
					balance=payment-(set4*quantity);
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\nYour balance is RM: " << balance<<endl;
		
					}
					else{
			
					cout<< "\nPayment not enough";
					}
					}while(payment<(set4*quantity));
					s:
					cout << "\n\nDo you want to print receipt? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						cout << "\n ------------------------------------------------"<<endl;
						cout << "|                  Zan's Pizza                   |"<<endl;
						cout << " ------------------------------------------------"<<endl;
						cout << endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "  Tel  : 03-339-31206     Fax   : 013-363-4357"<<endl;
						cout << "  Till : R3451            Order : M35042627"<<endl;
						cout << endl;
						cout << endl;
						cout << "  Cashier :  MIRUL"<<endl;
						cout << "  Shift   :  SHIFT-1"<<endl;
						cout << endl;
						cout << "\n ------------------------------------------------"<<endl;
						cout << "| Description      Qty     Price      Amount     |"<<endl;
						cout << " ------------------------------------------------"<<endl;
						cout << "  Set D "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "  Total "<<"                              "<<set1*quantity<<endl;
						cout << "  Cash "<<"                               "<<payment<<endl;
						cout << "  Balance "<<"                            "<<balance<<endl;
						cout << " ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "\nYou enter wrong input!!!"<<endl;
						goto s;
					}	
					break;
				default : 
					cout << "\nSet not Available"<<endl;
					goto choose;
					break;
				}
				
				inmenu:
				cout << "\n\nMenu : "<<endl;
				cout << endl;
				cout << "1. Order again"<<endl;
				cout << "2. Exit"<<endl;
				
				cout << "\nEnter choice :";
				cin >> input;
				
				switch(input){
					case 1 :
						goto menu;
						break;
					case 2 :
						cout << "\n -----------------------------"<< endl;
						cout << "| Thank you please come again |"<<endl;
						cout << " -----------------------------"<<endl;
						system("PAUSE");
						exit(EXIT_SUCCESS);	
						break;
					default :
						cout << "\nYou enter wrong input"<<endl;
						goto inmenu;
						break;	
				}
			
		  
	}

