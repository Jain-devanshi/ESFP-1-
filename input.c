#include <stdio.h>
#include <string.h>

// Structure for storing information about a farm input product
struct product {
    int fertilizers;
    int pesticides;
    int irrigation_tools;
    int machinery;
    int seeds;
};

int main() {
    // Print the table of products
    struct product f;
    int total,ch;
    printf("Enter\n1 for fertilizers\n2 for pesticides\n3 for irrigation tools\n4 for machinery\n5 for seeds \n");
    scanf("%d",&ch);
    switch(ch){
	
    case 1:
    printf("Enter the quantity of fertilizers : \n");
    scanf("%d", &f.fertilizers);
    break;
    case 2:
    printf("Enter the number of pesticides: \n");
    scanf("%d", &f.pesticides);
    break;
    case 3:
    printf("Enter the number of irrigation tools: \n");
    scanf("%d", &f.irrigation_tools);
    break;
    case 4:
    printf("Enter the number of machinery: \n");
    scanf("%d", &f.machinery);
    break;
    case 5:
    printf("Enter the number of seeds: \n");
    scanf("%d", &f.seeds);
    break;
    default:
    printf("\nInvalid!\n");
    }
    total = (f.fertilizers * 500)+(f.pesticides * 250)+(f.irrigation_tools * 10000)+(f.machinery * 20000)+(f.seeds * 4000);
    printf("Total sum: %d", total);
    return 0;
}

