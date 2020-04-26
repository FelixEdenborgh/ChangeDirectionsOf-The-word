#include <stdio.h>
#include <stdlib.h>

int main()
{
    int decimal = 0, weight = 1, rem, binary, num;
    printf("Enter the binary number: \n");
    scanf("%d", &binary);

   num = binary;

    while(binary != 0){
        rem = binary % 10;
        decimal = decimal + rem*weight;
        binary = binary /10;
        weight = weight*2;
    }
    printf("Decimal equvalent of binary number %d is: %d", num, decimal);
    return 0;
}
