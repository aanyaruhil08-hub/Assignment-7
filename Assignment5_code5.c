/* Bank Transaction Menu
Write a C program to implement a menu-driven banking system with the following options:
•	Check balance 
•	Deposit money 
•	Withdraw money 
•	Calculate annual simple interest 
•	 Exit 
Requirements
•	Initialize the account with a balance of ₹5,000. 
•	Use a loop to display the menu repeatedly until the user selects Exit. 
•	Use a switch-case statement to perform the selected operation. */

#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000.0;
    float amount, rate, interest;

    while (1)
    {
        printf("\n------ BANK MENU ------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Calculate Annual Simple Interest\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Current Balance = ₹%.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ₹");
                scanf("%f", &amount);

                if (amount > 0)
                {
                    balance += amount;
                    printf("Deposit successful.\n");
                    printf("New Balance = ₹%.2f\n", balance);
                }
                else
                {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ₹");
                scanf("%f", &amount);

                if (amount > 0 && amount <= balance)
                {
                    balance -= amount;
                    printf("Withdrawal successful.\n");
                    printf("Remaining Balance = ₹%.2f\n", balance);
                }
                else
                {
                    printf("Insufficient balance or invalid amount.\n");
                }
                break;

            case 4:
                printf("Enter annual interest rate (in %%): ");
                scanf("%f", &rate);

                interest = (balance * rate * 1) / 100;

                printf("Annual Simple Interest = ₹%.2f\n", interest);
                break;

            case 5:
                printf("Thank you for using the banking system.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

