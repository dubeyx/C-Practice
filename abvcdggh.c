#include <stdio.h>
int foo(int i)
{

    int x=1,j=1;
    while(i)
    {

        x*=j;
        j++;
        if(j<5) continue;
        else break;
    }
    return x;
}

int main()
{

int x=3051,y;


do{
    y=x%10;
printf("%c",'A' +y);



}while((x=x/10)!=0);
return 0;


}
