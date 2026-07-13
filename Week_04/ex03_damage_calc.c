#include <stdio.h>
#include <math.h>
int main()
{
    float player_attack = 80, enemy_defence = 25, Hit_Number;
    printf("=== COMBAT SIMULATOR ===\n");

    printf("Player attack: %.2f\n", player_attack);
    printf("Enemy defence: %.2f\n", enemy_defence);

    printf("Enter the number of hits: ");
    scanf("%f", &Hit_Number);

    float damage = (player_attack - enemy_defence)* Hit_Number;
    printf("Total damage: %.2f\n", damage);

    printf("=== COMBAT SIMULATOR ===\n");

    printf("Player attack: %.2f\n", player_attack);
    printf("Enemy defence: %.2f\n", enemy_defence);
    printf("Enter the number of hits: ");
    scanf("%f", &Hit_Number);
    float total_damage = (float)ceil(damage * 1.5f);
    printf("Total damage with critical hit: %.2f *** CRITICAL HIT! x1.5 ***\n ", total_damage);
    return 0;
}
