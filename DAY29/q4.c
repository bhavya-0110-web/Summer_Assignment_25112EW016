#include <stdio.h>
#include <string.h>

typedef struct
{
    int product_id;
    char product_name[50];
    float price;
    int quantity;
} Product;

void addProducts(Product p[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nProduct %d\n", i + 1);

        printf("Enter Product ID: ");
        scanf("%d", &p[i].product_id);

        printf("Enter Product Name: ");
        scanf(" %[^\n]", p[i].product_name);

        printf("Enter Price: ");
        scanf("%f", &p[i].price);

        printf("Enter Quantity: ");
        scanf("%d", &p[i].quantity);
    }
}

void displayProducts(Product p[], int n)
{
    printf("\n------ Inventory ------\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nProduct ID   : %d\n", p[i].product_id);
        printf("Product Name : %s\n", p[i].product_name);
        printf("Price        : %.2f\n", p[i].price);
        printf("Quantity     : %d\n", p[i].quantity);
    }
}

void searchProduct(Product p[], int n)
{
    int id;

    printf("Enter Product ID to search: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(p[i].product_id == id)
        {
            printf("\nProduct Found\n");
            printf("Product Name : %s\n", p[i].product_name);
            printf("Price        : %.2f\n", p[i].price);
            printf("Quantity     : %d\n", p[i].quantity);
            return;
        }
    }

    printf("Product not found.\n");
}

void updateQuantity(Product p[], int n)
{
    int id, qty;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(p[i].product_id == id)
        {
            printf("Enter New Quantity: ");
            scanf("%d", &qty);

            p[i].quantity = qty;

            printf("Quantity updated successfully.\n");
            return;
        }
    }

    printf("Product not found.\n");
}

void sellProduct(Product p[], int n)
{
    int id, qty;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(p[i].product_id == id)
        {
            printf("Enter Quantity to Sell: ");
            scanf("%d", &qty);

            if(qty <= p[i].quantity)
            {
                p[i].quantity -= qty;
                printf("Sale successful.\n");
                printf("Remaining Quantity: %d\n", p[i].quantity);
            }
            else
            {
                printf("Insufficient stock.\n");
            }
            return;
        }
    }

    printf("Product not found.\n");
}

int main()
{
    Product p[100];
    int n = 0, choice;

    do
    {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Products\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Sell Product\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of products: ");
                scanf("%d", &n);
                addProducts(p, n);
                break;

            case 2:
                displayProducts(p, n);
                break;

            case 3:
                searchProduct(p, n);
                break;

            case 4:
                updateQuantity(p, n);
                break;

            case 5:
                sellProduct(p, n);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}