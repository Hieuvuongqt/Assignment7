#include <stdio.h>
int main(){
	int menu,out = 0,grandTotal = 0;
	do{	
		printf("1. Choose your food\n");
		printf("2. Choose your drink\n");
		printf("3. Check bill and pay\n");
		printf("4. Exit\n");
		printf("Please select menu:");
		scanf("%d",&menu);
		switch(menu){
			case 1: {
				int food,back=0;
				do{
					printf("1. Chicken and rice\n");
					printf("2. Pho\n");
					printf("3. Swan and rice noodle\n");
					printf("4. Go back to menu selection\n");
					printf("Please choose a dish:\n");
					scanf("%d",&food);
					switch(food){
						case 1:{
							grandTotal += 70000;
							printf("You have selected Chicken and rice, please wait a few minutes\n");
							back = 1;
							break;
						}
						case 2:{
							grandTotal += 60000;
							printf("You have selected Chicken and rice Pho, please wait a few minutes\n");
							back = 1;
							break;
						}
						case 3:{
							grandTotal += 50000;
							printf("You have selected Swan and rice noodle, please wait a few minutes\n");
							back = 1;
							break;
						}
						case 4: back = 1;break;
						default: printf("Please choose a dish\n");
					}
				}while(back==0);
				break;
			}
			case 2:{
				int food,back=0;
				do{
					printf("1. Coffee\n");
					printf("2. Juice\n");
					printf("3. Softdrink\n");
					printf("4. Quay lai chon menu\n");
					printf("Vui long chon mon an:\n");
					scanf("%d",&food);
					switch(food){
						case 1:{
							grandTotal += 25000;
							printf("You have selected Coffee, please wait a few minutes\n");
							back = 1;
							break;
						}
						case 2:{
							grandTotal += 30000;
							printf("You have selected Juice, please wait a few minutes\n");
							back = 1;
							break;
						}
						case 3:{
							grandTotal += 20000;
							printf("You have selected Softdrink, vui long cho trong it phut\n");
							back = 1;
							break;
						}
						case 4: back = 1;break;
						default: printf("Please choose a drink\n");
					}
				}while(back==0);
				break;
			}
			case 3:{
				if(grandTotal > 0){
					printf("Total payment: %d\n",grandTotal);
					printf("Thank you!\n");
					out = 1;
				}
				break;
			}
			case 4: {
				if(grandTotal >0){
					printf("Total payment: %d\n Please pay before leaving!\n",grandTotal);
				}else{
					
					out = 1;
				}
				break;
			}
			default: printf("Please choose the correct function\n");
		}
	}while(out == 0);
}
