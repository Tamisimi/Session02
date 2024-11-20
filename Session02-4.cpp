#include <stdio.h>

int main() {
   float chieuDai = 5;
   float chieuRong = 4;
   float chuVi = 2 * (chieuDai + chieuRong);
   float dienTich = chieuDai * chieuRong;
   
   
    printf("Chieu dai cua hinh chu nhat: %2f\n", chieuDai);
	printf("Chi?u rong cua hinh chu nhat: %.2f\n", chieuRong); 
    printf("Chu vi cua hinh vuong: %.2f\n", chuVi);
    printf("Dien ttch cua hinh vuong: %.2f\n", dienTich); 
   
    
    return 0;
}
