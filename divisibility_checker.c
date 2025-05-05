// OM NAMO VENKATESHAYA
// AUTHOR :- ABHINAY
/* PROGRAM : Write a program to check 
             whether a number is divisible 
             by 97 or not?
   you can take your favourable number instead of 97 also

*/ 

  #include <stdio.h>
  
  int main(){
  
    int number;

    printf ("enter the number :\n");
    scanf("%d",&number);

    if(number%97 == 0)
    {
        printf("given number is divisible by 97\n");
        printf("the qutionent is :%d\n",number/97);
    }
    else {
        printf("given number is not divisible by 97");
    }
    return 0;
  }
