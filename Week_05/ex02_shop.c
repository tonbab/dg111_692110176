#include <stdio.h>
int main()
{
    int choice;
    int price;
    int Gold = 1000;
        printf("====item shop====\n");
        printf("1.Health Potion - 50 Gold (+50 HP)\n");
        printf("2. Mana Potion - 80 Gold (+30 MP)\n");
        printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
        printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                price = 50;
                printf("You bought Health Potion for %d Gold\n", (int)price);
                printf("Your remaining: %d\n", Gold - (int)price);
                printf("+50 HP\n");
                printf("Item purchased successfully!\n");
                break;
            case 2:
                price = 80;
                printf("You bought Mana Potion for %d Gold\n", (int)price);
                printf("Your remaining: %d\n", Gold - (int)price);
                printf("+30 MP\n");
                printf("Item purchased successfully!\n");
                break;
            case 3:
                price = 500;
                printf("You bought Iron Sword for %d Gold\n", (int)price);
                printf("Your remaining: %d\n", Gold - (int)price);
                printf("+20 ATK\n");
                printf("Item purchased successfully!\n");
                break;
            case 4:
                price = 300;
                printf("You bought Leather Armor for %d Gold\n", (int)price);
                printf("Your remaining: %d\n", Gold - (int)price);
                printf("+15 DEF\n");
                printf("Item purchased successfully!\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    

    return 0;
}