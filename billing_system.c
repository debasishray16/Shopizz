                                         /* SHOPPING  BILLING  SYSTEM  IN  C. */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void customer_data_input();
void customer_data_output();
void bill_data(int n);


struct item_list{
    char itm_name[100];
    float itm_cost;
};


struct buyer_data{
    char name[100];
    char address[200];
    int phn_number;
};


int main()
{

    int n;
    float tax = 0.18;
    float sum;

    struct item_list item[n];
    struct buyer_data data;

    printf("Enter the number of items:\t");
    scanf("%d\n", &n);

    if (n > 0){


        // Loop for taking item data.
        for (int i = 0; i < n; i++){
            printf("Enter item name:\t");
            scanf("%s\n", item[i].itm_name);
            printf("Enter item cost:\t");
            scanf("%f\n", &item[i].itm_cost);
            printf("---------------------\n");
        }


        // Loop for total bill amount.
        for (int i = 0; i < n; i++){
            sum = item[i].itm_cost * tax;
            sum = sum + item[i].itm_cost;
        }


        customer_data_input();


        // Display of bill
        bill_data(n);
        printf("Total Bill: %.2f", sum);


        // Customer information
        customer_data_output();
    }

    else{
        printf("You haven't buy anything from here.");
        printf("Thank you for coming here.");
    }
    return 0;
}



void customer_data_input(){
    struct buyer_data data;
    printf("Enter the Customer Name: ");
    scanf("%s\n", data.name);
    printf("Enter customer address: ");
    scanf("%s\n", data.address);
    printf("Enter phone number: ");
    scanf("%d\n", &data.phn_number);
}



void customer_data_output(){
    struct buyer_data data;
    printf("Name:\t\t%s\n", data.name);
    printf("Address:\t\t%s\n", data.address);
    printf("Phone Number:\t\t%d\n", data.phn_number);
}



void bill_data( int n ){
    struct item_list item[n];
    printf("Item Name\t\tItem Cost\n");
    for (int i = 0; i < n; i++){
        printf("%s\t\t%f\n", item[i].itm_name, item[i].itm_cost);
    }
}
