/*
Write a C program to take an integer array of size N as input and calculate the sum of all integers. You need to do this using files. That means, you will take input from a file, and give output into a file without using command prompt / terminal.
*/

#include<stdio.h>

void main(){
    FILE *input = fopen("input.txt","r");
    FILE *output = fopen("output.txt","w");
    int n;
    fscanf(input,"%d",&n);
    int arr[n];
    int sum =0;
    for(int i=0;i<n;i++){
        fscanf(input,"%d",&arr[i]);
        sum += arr[i];
    }

    fprintf(output,"Total => %d",sum);

}
