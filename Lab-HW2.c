#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numDigits(int input);

int main(){
    int n, count, number, remainder, sum=0, temp;
    int foundCount = 0;

    for (number = 1; foundCount < 20; number++) {
        temp = number;
        n = numDigits(number);
        sum = 0;

        for (temp = number; temp != 0; temp /= 10) {
            remainder = temp % 10;
            count = n;
            while(count > 1) {
                remainder *= temp % 10;
                count--;
            }
            sum += remainder;
        }

        if (sum == number) {
            printf("%d is an Armstrong number.\n", number);
            foundCount++;
        }else {
            printf("%d is not an Armstrong number. \n" , number);
    
        }
    }
    return 0;
}

int numDigits(int input) {
    int count = 0;
    while(input > 0) {
        count++;
        input = input / 10;
    }
    return count;
}
