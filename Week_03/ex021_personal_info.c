#include <stdio.h>
int main() {
// ประกาศและกาหนดค่าตัวแปร
char ชื่อ[] = "Somsak";
int อายุ = 20;
float gpa = 3.75f;
char วิชา[] = "Programming";
// แสดงค่าและขนาด
printf(" === ป้อนข้อมูล ===\n");
printf("ชื่อ : %s \n", ชื่อ,
sizeof(ชื่อ));
printf("อายุ : %d \n", อายุ,
sizeof(อายุ));
printf("GPA : %.2f \n", gpa,
sizeof(gpa));
printf("วิชา : %s \n", วิชา,
sizeof(วิชา));


printf(" === ข้อมูลส่วนตัว ===\n");
printf("ชื่อ : %s \n", ชื่อ,
sizeof(ชื่อ));
printf("อายุ : %dปี \n", อายุ,
sizeof(อายุ));
printf("GPA : %.2f \n", gpa,
sizeof(gpa));
printf("วิชา : %s \n", วิชา,
sizeof(วิชา));
return 0;
}