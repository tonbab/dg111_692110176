#include <stdio.h>
int main()
{
    // ประกาศและกาหนดค่าตัวแปร
    char ชื่อตัวละคร[] = "Dragon Knight";
    int HP_สูงสุด = 150;
    int Attack_Power = 75;
    int Defense = 40;
    int Level = 1;

    // แสดงค่าและขนาด

    printf(" === CHARACTER SHEET ===\n");
    printf("╔══════════════════════════════════╗ \n");
    printf("║ %s                    ║\n", ชื่อตัวละคร,
           sizeof(ชื่อตัวละคร));
    printf("╠══════════════════════════════════╣ \n");

    printf("║Level   : %d                       ║\n", Level,
           sizeof(Level));
    printf("║HP      : %d                     ║\n", HP_สูงสุด,
           sizeof(HP_สูงสุด));
    printf("║ATK     : %d                      ║\n", Attack_Power,
           sizeof(Attack_Power));
    printf("║DEF     : %d                      ║\n", Defense,
           sizeof(Defense));
    printf("╠══════════════════════════════════╣ \n");
    printf("║HP Bar [████████████]             ║\n");
    printf("╚══════════════════════════════════╝ \n");
    return 0;
}