#include <stdio.h>
int operations(int a,int b)
{
    int c=a+b;
    printf("a+b=%d \n",c);
    int d=a-b;
    printf("a-b=%d \n",d);
    int e=a*b;
    printf("axb=%d \n",e);
    int f=a/b;
    printf("a/b= %d",f);

}
int main()
{
    int a,b;
    printf("Enter two values for a and b \n");
    scanf("%d %d",&a,&b);
    operations(a,b);
}
