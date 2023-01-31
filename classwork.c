#include <stdio.h>
int main() {    
/*1.You are given two float number print the addition and multiplication of two 
number.
float a,b,c;
scanf("%f",&a);
scanf("%f",&b);
c=a+b;
printf("%.1f",c);
c=a*b;
printf("\n%.1f",c);*/
/*2.You are given a number n, print the number is +ve ,-ve or 0.
int n;
scanf("%d",&n);
if (n>0)
printf("+");
else if(n==0)
printf("0");
else
printf("-");
    return 0;*/
/*3.You are given two number x,y print the greater number.
int a,b;
scanf("%d%d",&a,&b);
if(a>b)printf("%d",a);
else printf("%d",b);*/
/*4.You are given three number x,y,z. print the smallest number.
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if (a<b && a<c)printf("%d",a);
else if (b<a && b<c)printf("%d",b);
else printf("%d",c);*/
/*5. You are given a number n. print the value of factorial n!
int n,fact=1;
scanf("%d",&n);
for(int i=n;i>0;i--){
     fact*=i;
}
printf("%d",fact);*/
/*6. You are given a number n. Print the all even number upto n.
int n;
scanf("%d",&n);
for(int i=0;i<=n;i+=2){
    printf("%d ",i);
    }*/
/*7.You are given n number n. Print the given number is prime or not prime
#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    int num, count, limit, prime, inum;  
  
    printf("Enter the limit\n");  
    scanf("%d", &limit);  
  
    printf("Prime Numbers from 2 To %d are\n", limit);  
  
    for(num = 2; num <= limit; num++)  
    {  
        prime = 1;  
        inum  = sqrt(num);  
        for(count = 2; count <= inum; count++)  
        {  
            if(num % count == 0)  
            {  
                prime = 0;  
                break;  
            }  
        }  
  
        if(prime)  
            printf("%d\n", num);  
    }  
  
    return 0;  
} 
    
}*/
/*8. You are given a number n. Print the reverse of a given number.
int a,b,c,d;
    scanf("%d", &a);
    
    b=a;
    while(b>0){
        c=c*10+b%10;
        
        b=b/10;

    }
    printf("%d",c);
    return 0;*/
/*9. Print the below pattern.
1
1 3
1 3 5 7
1 3 5 7 9
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int a=1; 
    for(int j=1;j<=i;j++){
        
        printf("%d ",a);
        a+=2;
        
    }printf("\n");
}*/
/*10. Print the below pattern.
A
B B
C C C
D D D D
E E E E E
int n;
scanf("%d",&n);

for(int i=1;i<=n;i++){
char a="h"-38;
    for(int j=1;j<=i;j++){
      printf("%c ",a++);
      
    }printf("\n");
}*/
/*11.Print the bellow pattern .
*
  *
    *
      *
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
     
    for(int j=1;j<=i;j++){
        if(i==j){
            printf("*");
        }
       else{
        printf("   ");
       }
        
    }printf("\n");
}*/
/*12.
Nobita scored good marks in his previous test, so his mom gave him x candies. Now,
he wants to distribute the candies amongst his n friends(including himself).
He wants to distribute the candies equally for which he can either ask her mom for
more candies or can return her extra candies.
He will do this in such a way that the number of candies that he takes or returns
to his mom is minimum. Can you help him?
Input Format
First line contains an integer T-denoting the number of test cases.
Next T lines contain two space separated integer x and n.
Constraints
1 <= T <= 10^5
1 <=x,n <=10^9
Output Format
Print a single integer equal to minimum candies returned.
int m;
scanf("%d",&m);
for(int i=0;i<m;i++){
    int k,n;
    scanf("%d %d", &k, &n);
    int rem=k%n;
    if(rem!=0){
        printf("%d\n",rem);
    }   else{
    printf("0\n");
}
}*/
}
