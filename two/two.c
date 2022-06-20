/*Write a C program to calculate the sum of two integers. Make a file named “in.txt” and take input from that file using command prompt / terminal and show output in that command prompt.
*/

#include<stdio.h>

int main(){
    int sum = 0;
    for(int i=0;i<2;i++){
        int a;
        scanf("%d",&a);
        sum += a;
    }

    printf("Total => %d",sum);

    return 0;
}
