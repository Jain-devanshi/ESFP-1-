#include<stdio.h>

void home()

{

 printf("======================================================================================================================\n");
 printf("                                                NAME: DEVANSHI JAIN\n"                                   );
 printf("                                                BRANCH:CBA\n"                                            );
 printf("                                                ER-NO.:CBA20\n"                                          );
 printf("                                                ESFP-1 PROJECT\n"                                        );
 printf("                                                Agriculture\n"                                           );
 printf("                                               For year 2022-2023\n"                                           );
 printf("=======================================================================================================================\n");
}
 
char username[10], password[10];

//functions declaration
void login();
void print_menu();
void table();
void farmlandtype();
void crops();
void insecticides_and_pesticides();

 
int main()
{
	home();
    login();
    print_menu();
    //table();
    //farmlandtype();
    //crops();
    //insecticides_and_pesticides();
    
    return 0;
}

//login function
void login()
{
	printf("\n*******************");
    printf("\nEnter Username: ");
    scanf("%s", username);
    printf("Enter Password: ");
    printf("\n*******************");
    scanf("%s", password);
 
    if(strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0)
    {
        printf("\nLogin Successful!\n\n");
    }
    else
    {
        printf("\nWrong username or password!\n\n");
        login();
    }
}

//menu function
void print_menu()
{
    int choice;
 
    printf("\n-----Menu-----\n");
    printf("1. Ph Testing for soil\n");
    printf("2. Nature of FarmLand\n");
    printf("3. Insecticides and pesticides according to crop disease \n");
    printf("4. nature of crop and suitable vegetation \n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
 
    switch(choice)
    {
        case 1:
            printf("\npH level of soil\n");
            table();
            break;
        case 2:
            printf("\nNature of Farmland\n");
            farmlandtype();
            break;
        case 3:
            printf("\nInsecticides and pesticides\n");
            insecticides_and_pesticides();
            
            break;
        case 4:
            printf("\nCrops According to vegetataion:\n");
            crops();
            break;
        default:
            printf("\nInvalid Choice!\n");
    }
}
void table() 
{
    int value;
    printf("Enter ph value: ");
    scanf("%d", &value);

    printf("\nSoil PH Values\n");
    printf("-------------------------------\n");
    printf("| PH Value     |  Soil Type    |\n");
    printf("-------------------------------\n");

    int i, j;
    for(i=0;i<value;i++)
	{
        for(j=0;j<value;j++)
        {
            if(i==0 && j==0)
            {
                printf("| 0-3.5    |  Highly Acidic |\n");
            }
            else if(i==0 && j==1)
            {
                printf("| 3.6-5.5  |  Moderately Acidic |\n");
            }
            else if(i==0 && j==2)
            {
                printf("| 5.6-6.5  |  Neutral|\n");
            }
            else if(i==0 && j==3)
            {
                printf("| 6.6-7.5  |  Moderately Alkaline |\n");
            }
            else if(i==0 && j==4)
            {
                printf("| 7.6-8.5  |  Highly Alkaline |\n");
            }
        }
    }
    printf("-------------------------------\n");
}
void farmlandtype()
{
	
   char landtype;
   printf("Please choose one of the following types of land: \n");
   printf("1. Arable land\n");
   printf("2. Pasture land\n");
   printf("3. Forest land\n");
   printf("4. Wetland\n");
   printf("Enter your choice: ");
   scanf("%d", &landtype);
   
   switch (landtype)
   {
      case 1:
         printf("The farmland type is arable land. Arable land is land that can be used for agricultural purposes such as crops, vegetables, and other plants.\n");
         break;
      case 2:
         printf("The farmland type is pasture land. Pasture land is land that is used for grazing animals such as sheep, cows, and horses.\n");
         break;
      case 3:
         printf("The farmland type is forest land. Forest land is land that is covered in trees and other vegetation.\n");
         break;
      case 4:
         printf("The farmland type is wetland. Wetland is land that is covered in water or is marshy and is usually home to waterfowl and other wildlife.\n");
         break;
      default:
         printf("Invalid input. Please choose one of the given options.\n");
   }
}
  
  void crops()
{
	
	int vegetation;
	
	printf("Choose the vegetation type : \n");
	printf("1. Tropical \n");
	printf("2. Temperate \n");
	printf("3. Desert \n");
	printf("4. Tundra \n");
	scanf("%d", &vegetation);
	
	switch(vegetation)
	{
		
		case 1:
			printf("Suggested Crops : Sugarcane, Coconut, Banana, Papaya, Pineapple, etc. \n");
			break;
			
		case 2:
			printf("Suggested Crops : Wheat, Rice, Maize, Barley, Potato, etc. \n");
			break;
			
		case 3:
			printf("Suggested Crops : Dates, Cotton, Peanuts, Sorghum, Millet, etc. \n");
			break;
			
		case 4:
			printf("Suggested Crops : Potato, Barley, Oats, Rye, Turnip, etc. \n");
			break;
			
		default:
			printf("Invalid Vegetation Type \n");
	}
}
 void insecticides_and_pesticides()
{
    // create a table that displays the crop numbers and names
    printf("Crop Number | Crop Name\n");
    printf("----------- | --------\n");
    printf("1           | Wheat\n");
    printf("2           | Rice\n");
    printf("3           | Maize\n\n");
    
    // prompt the user to input a crop number
    int crop_number;
    printf("Please enter a crop number: ");
    scanf("%d", &crop_number);
       
    switch (crop_number)
    {
        case 1: // Wheat
            printf("Insecticides: Lambda-cyhalothrin, Fipronil, Chlorpyrifos\n");
            printf("Pesticides: Glyphosate, Carfentrazone-ethyl, Diflufenican\n");
            break;
        case 2: // Rice
            printf("Insecticides: Chlorpyrifos, Lambda-cyhalothrin, Bifenthrin\n");
            printf("Pesticides: Quizalofop-p-ethyl, Carfentrazone-ethyl, Flufenacet\n");
            break;
        case 3: // Maize
            printf("Insecticides: Chlorpyrifos, Lambda-cyhalothrin, Bifenthrin\n");
            printf("Pesticides: Glyphosate, Carfentrazone-ethyl, Flufenacet\n");
            break;
    }
}




	
