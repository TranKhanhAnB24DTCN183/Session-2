#include <stdio.h>

int main() {
   
    float PI = 3.14; 
    float radius = 3.0; 
   
       float circumference = 2 * PI * radius; 
       float area = PI * radius * radius;  
    
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}

