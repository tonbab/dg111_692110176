#include <stdio.h>
int main() {
// ประกาศและกาหนดค่าตัวแปร
char ชื่อตัวละคร[] = "Dragon Knight";
int HP_สูงสุด  = 150;
int Attack_Power = 75;
int Defense = 40;
int Level = 1;  

// แสดงค่าและขนาด
printf(" === สร้างตัวละคร ===\n");
printf("ชื่อตัวละคร     : %s \n", ชื่อตัวละคร,
sizeof(ชื่อตัวละคร));
printf("Attack Power : %d \n", Attack_Power,
sizeof(Attack_Power));
printf("HP สูงสุด      : %d \n", HP_สูงสุด,
sizeof(HP_สูงสุด));
printf("Level        : %d \n", Level,  
sizeof(Level));
printf("Defense      : %d \n", Defense,
sizeof(Defense));


printf(" === สรุปข้อมูลตัวละคร ===\n");
printf("Name       : %s \n", ชื่อตัวละคร,
sizeof(ชื่อตัวละคร));
printf("Level      : %d \n", Level,  
sizeof(Level));
printf("HP         : %d \n", HP_สูงสุด,
sizeof(HP_สูงสุด));
printf("ATK        : %d \n", Attack_Power,
sizeof(Attack_Power));
printf("DEF        : %d \n", Defense,
sizeof(Defense));
return 0;
}