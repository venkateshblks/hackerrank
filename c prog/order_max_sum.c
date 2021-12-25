// Rohan's friend gave him a array of positive integers of size N and asked him to pick K integers from that array such that their sum is maximum.

// Note-0 : The integers in the output must follow the same order in input

// Input Format

// First line consists two space sepeated integers, N and K
// second line contains N space separated integers.

// Constraints

// 1<= N <= 10^9
// 1<= K <= N

// Output Format

// positive interger denoting maximum sum

// Sample Input 0

// 7 1
// 10 9 1 3 2 8 3
// Sample Output 0

// 10
// Sample Input 1

// 50 13
// 6821 8593 2538 3892 2266 3388 7577 4119 7161 2039 1497 5543 1584 1658 6716 1422 399 4819 1624 8811 4568 9489 9272 2621 754 7119 2689 6801 3236 3432 8939 9176 7284 8795 6504 4904 4504 9129 2614 152 7855 825 8730 8252 377 3495 3527 2304 3472 7480
// Sample Output 1

// 8593 7577 8811 9489 9272 8939 9176 8795 9129 7855 8730 8252 7480 





#include<stdio.h>

void quicksort(int number[25],int first,int last){

int i, j, pivot, temp;

if(first<last){

pivot=first;

i=first;

j=last;

while(i<j){

while(number[i]<=number[pivot]&&i<last)

i++;

while(number[j]>number[pivot])

j--;

if(i<j){

temp=number[i];

number[i]=number[j];

number[j]=temp;

}

}

temp=number[pivot];

number[pivot]=number[j];

number[j]=temp;

quicksort(number,first,j-1);

quicksort(number,j+1,last);

}

}

int main(){
    
 //  int k,i,j;
  // scanf("%d %d",&n,&k);
//   for(i=0;i<n;i++){
//       scanf("%d",&ar[i]);
       
//   }

int i, n,k, number[100],num[100],num1[100],j;



scanf("%d %d",&n,&k);

printf("Enter %d elements: ", n);

for(i=0;i<n;i++){

scanf("%d",&number[i]);
// quicksort(number,0,n-1);
    
}

for(i=0;i<n;i++){
   num[i]=number[i];
}

quicksort(number,0,n-1);

//printf("The Sorted Order is: ");

//  for(i=n-1;i>n-k-1;i--){

// printf("%d ",number[i]);

// // num1[i]=number[i];
//  }
for(int p=0;p<n;p++){
for(j=n-1;j>n-k-1;j--){
    if(num[p]==number[j]){
    printf("%d ",number[j]);
 }}}
return 0;
}
