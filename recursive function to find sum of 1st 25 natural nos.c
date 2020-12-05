// sum of 1st 25 natural numbers
#include<stdio.h>
int sum(int);
int main()
{
    int n=10;
    printf("%d",sum(n));

}
int sum(int n)
{


while(n)
{

return (n+sum(n-1)); //10+9+8+...1
}
}
