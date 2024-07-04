#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rawscore;
    printf("Enter your rawscore:\n");
    scanf("%d",&rawscore);
    printf("your rawscore is: %d\n",rawscore);
    int blu=568;
    int*mimi=&blu;
    printf("%p\n",&blu);// this enters the address of the variable blu with value 568
    printf("%d\n",blu);//this enters the value of the int variable(568)
    printf("%d",*mimi);//

}
