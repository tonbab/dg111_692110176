#include <stdio.h>
int main()
{
    int max_HP, Damage, is_poisoned = 0, attack_count;

    printf("Enter your max HP: ");
    scanf("%d", &max_HP);

    printf("Damage Taken: ");
    scanf("%d", &Damage);

    printf("Enter poisoned (0/1): ");
    if (scanf("%d", &is_poisoned) != 1)
        return 1;

    printf("Enter your attack count: ");
    scanf("%d", &attack_count);

    int hp = max_HP - Damage;

    if (hp <= 0)
    {
        printf("=== Character Status ===\n");
        printf("You are dead.\n");
    }
    else if (hp > 0 && hp <= max_HP / 4)
    {
        printf("=== Character Status ===\n");
        printf("You are in critical.\n");
    }
    else if (hp > max_HP / 4 && hp <= max_HP / 2)
    {
        printf("=== Character Status ===\n");
        printf("You are POISONED\n");
    }
    else if (hp > max_HP / 2 && hp < max_HP)
    {
        printf("=== Character Status ===\n");
        printf("NORMAL + Ultimate!.\n");
    }
    else
    {
        printf("=== Character Status ===\n");
        printf("You are at full health.\n");
    }
}