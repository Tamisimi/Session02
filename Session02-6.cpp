#include <stdio.h>

int main() {
   const float PI = 3.14;
   float banKinh = 4;
   float chuVi = 2 * PI * banKinh;
   float dienTich = PI * banKinh * banKinh;
   
	printf("banKinh cua hinh tron: %.2f\n", banKinh); 
    printf("Chu vi cua hinh tron: %.2f\n", chuVi);
    printf("Dien ttch cua hinh tron: %.2f\n", dienTich); 
   
    
    return 0;
}
