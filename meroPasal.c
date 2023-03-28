/*                 ______________________________________________
                   /                                           /
                  /  Project work on Online Fruit store.      /
                 /     Submitted to: PRARUP Sir              /  
                / Created by:         NIKHIL Rana           /  
               /      ASIAN COLLEGE OF HIGHER STUDIES      /
              /___________________________________________/
*/                  
#include<Stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
  void notice(const char s[])
   {
    printf("\t\t\t\t------------- %s -------------\n\n",s);
    printf("\t\t\t*********************************************************\n\n\n\n");
   }
  void changeColor(const char color[])
   {
    char variable[17]="color ";
    strcat(variable,color);
    system(variable);
   }
    void changeToDefaultColor()
	{
     changeColor("0f");
     }
     void asciiArt()
	 {
    changeColor("0b");
printf("\n\n\n\t\t\t     __  __        ___ ___    __        __   __  \n");
     printf("\t\t\t    |__ |__)  |  |  |   |    |__  |__| |  | |__) \n");
     printf("\t\t\t    |   |  \\  |__| _|_  |     __| |  | |__| |    \n\n \n \n");
      }

main()
{
   int i,more;
   int array[20];
   int watermelon=150, pineapple=180, apple=350, grape=200, banana=120, orange=130;
   int orangej=400, pomogranate=600, sugarcane=300, pineapplej=400;
   int choice=0, quantity, totalbill=0, bill;
   char name[20], add[20];
                asciiArt();
   printf("\n\n\n\n \t\t\t*************************************************\n \t\t\t*\tWELCOME TO  NIKHIL FRUIT STORE \t*\n");
   printf(" \t\t\t*************************************************\n\n \n \n\n\n\n\n\nPress ANY KEY to continue...");
   getch();
   
   system("cls");
    FILE * fp;
    fp= fopen("name","a");
    for(i=0;i<1;i++)
    {
    printf("Could you please say us your full name sir/madam?\n \n", i);
    scanf("%[^\n]", &name);	
     }
   
    system("cls");
    asciiArt();
    notice("MENU");
    start:
     printf("\n \nHello %s, you can place your order here and we will deliver you your order within few minutes.\n",name);
     printf("\nService available \n\n1. Fruits \t\t\t 2. Juice\n");
     printf("3. Exit(0) \t\t   \n \n");
		for(i=0;i<1;i++)
		{
        printf("choose your suitable service: ");
   		scanf("%d", &choice);
       
    switch(choice)
        {
         case 1: //after selecting fruit
		system("cls");
		asciiArt();
		notice("Fruits");        
       
		printf("Fruits Available right now:\n\n1. Watermelon per kg  |Rs.%d|\t\t\t4. Pinepple per kg  |Rs.%d|\n",watermelon,pineapple);
        printf("2. Apple per kg       |Rs.%d|\t\t\t5. Grape per kg     |Rs.%d|\n",apple,grape);
        printf("3. Banana per dozen   |Rs.%d|\t\t\t6. Orange per kg    |Rs.%d|\n",banana,orange);
        printf("7. Go back to menu                              0. To exit\n\n");

         FILE * fp;
        fp=fopen("fruit","a");
        do
		{
	     printf("\nPlace your order:",i);
	     i++;
         scanf("%d",&choice);
    switch(choice) //choosing fruit and the quantity of the product
        {
         case 1:
           printf("Quantity:");
           scanf("%d",&quantity);
           bill =watermelon *quantity;
           totalbill += bill;
           fprintf(fp,"Watermelon\n");
           break;

          case 2:
            printf("Quantity:");
            scanf("%d",&quantity);
            bill =apple *quantity;
            totalbill += bill;
            fprintf(fp,"Apple\n");
            break;

          case 3:
            printf("Quantity:");
            scanf("%d",&quantity);
            bill =banana *quantity;
            totalbill += bill;
            fprintf(fp,"Banana\n");
            break;

           case 4:
            printf("Quantity:");
            scanf("%d",&quantity);
            bill =pineapple *quantity;
            totalbill += bill;
            fprintf(fp,"Pinepple\n");
            break;

           case 5:
            printf("Quantity:");
            scanf("%d",&quantity);
            bill =grape *quantity;
            totalbill += bill;
            fprintf(fp,"Grape\n");
            break;

           case 6:
            printf("Quantity:");
            scanf("%d",&quantity);
            bill =orange *quantity;
            totalbill += bill;
            fprintf(fp,"Orange\n");
            break;

           case 7:
            system("cls");
            goto start;

           case 0:
            printf("");
            break;

           default:
	        printf("*** Error:  This is not on the menu. ***\n");
            break;
           }
        }
         while(choice!=0);
         break;


    case 2:  
       system("cls");
       asciiArt();
       notice("Juice");      
        printf("1. Sugarcane per litre       |Rs. %d|\t\t4. Pomogranate per litre |Rs. %d|\n",sugarcane,pomogranate);
        printf("2. Orange juice per litre    |Rs. %d|\t\t5. Grape per litre       |Rs. %d|\n",orangej, grape);
        printf("3. Pineapple juice per litre |Rs. %d|\t\t\n",pineapplej);
        printf("7. Go back to menu                              0. To exit\n\n");
        
     fp=fopen("juice","a");
        do
		{
		 printf("\nPlace your order:");
		 i++;
         scanf("%d",&choice);
         switch(choice)
          {
            case 1:
             printf("Quantity:");
             scanf("%d",&quantity);
             bill = sugarcane *quantity;
             totalbill += bill;
             fprintf(fp,"Sugarcan\n");
             break;

            case 2:
            printf("Quantity:");
            scanf("%d",&quantity);
            bill =orangej *quantity;
            totalbill += bill;
            fprintf(fp,"Orange\n");
            break;
            
			case 3:
            printf("Quantity:");
            scanf("%d",&quantity);
            bill = pineapplej *quantity;
            totalbill += bill;
            fprintf(fp,"Pinepple\n");
            break;

            case 4:
            printf("Quantity:");
            scanf("%d",&quantity);
            bill = pomogranate *quantity;
            totalbill += bill;
            fprintf(fp,"Pomogranate\n");
            break;

            case 5:
            printf("Quantity:");
            scanf("%d",&quantity);
            bill =grape *quantity;
            totalbill += bill;
            fprintf(fp,"Grape\n");
            break;

            case 7:
            system("cls");
            goto start;

            case 0:
            printf("");
            break;
            
            default:
	        printf("*** Error:  This is not on the menu. ***\n");
            break;

            }
        }  
            while(choice!=0);
            break;
        
		
		case 3:  
       exit(0);
       
       default: 
       printf("*** Error:  This is not on the menu. ***\n");
       getch(); 
       system("cls");
       goto start;
	   break;
       
		
			
    }
       printf("Your total bill is %d",totalbill);
       getch();
       system("cls");
       printf("\nHey, Enter your exact address to deliver the product: ");
       scanf("\n%s", &add);
       printf("\n\n\n\nThanks for the address. We will deliver our product at %s",add);
   }
 }


