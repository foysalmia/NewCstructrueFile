/*Write a C program to calculate the sum of two integers. Make a file named “out.txt” and get output in that file using command prompt / terminal and take input in that command prompt.
*/

#include<stdio.h>

int main()
{
    int sum=0;
    for(int i=0;i<2;i++){
        int a;
        scanf("%d",&a);
        sum +=a;
    }
    printf("Sum => %d",sum);

    return 0;
}
