/*Do the above problem but this time with test cases. You need to take a test case as input and run the program until the test case ends. Also you need to store all the outputs into a file in such a way that the file contains all sums of those test cases.

For example:
Input:
3
5
1 2 3 4 5
4
2 5 1 4
6
5 8 1 7 50 2

Output: The file contains
Case 1: 15
Case 2: 12
Case 3: 73
*/

#include<stdint.h>
#include<stdio.h>

void main(){
    FILE *output = fopen("output.txt","a");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        int arr[a];
        int sum = 0;
        for(int j=0;j<a;j++){
            scanf("%d",&arr[j]);
            sum += arr[j];
        }
        fprintf(output,"Total => %d\n",sum);
    }

    fclose(output);

}
