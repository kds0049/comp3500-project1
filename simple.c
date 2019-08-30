#include <stdio.h>
#include <math.h>

int main () {
int array[10] = {1,2,3,4,5,6,7,8,9,10};
int i = 0;
double store;
double total = 0;

for (i = 0; i < 10; i++) {
store = array[i];
total = total + sqrt(store);
}
printf("The average of the square roots is %lf", (total/10));
}
