#include <stdio.h>

int main(void) {
  double a, b;
  char op;
  printf("enter a : ");
  scanf("%lf", &a);
  printf("enter b : ");
  scanf("%lf", &b);
  printf("taille de a est : %lu et le taille de b est : %lu ",sizeof(a), sizeof(b));
  printf("\nenter operator :");
  scanf(" %c",&op);
  if (op == '+'){
    printf("%lf+%lf = %lf",a ,b , a+b);
  } else if (op == '-'){
       printf("%lf-%lf = %lf",a ,b , a-b);
  }else if (op == '*'){
       printf("%lf*%lf = %lf",a ,b , a*b);
  }else if (op == '/'){
    if (b != 0){
       printf("%lf/%lf = %lf",a ,b , a/b);
    }else printf("error");
  }else if (op == '%'){
    if (b != 0){
       printf("%lf mod %lf = %lf",a ,b , a/b);
    }else printf("error");
  }
  /*switch(op){
    case '+' :
           printf("%lf+%lf = %lf",a ,b , a+b);
           break;
    case '-' :
           printf("%lf-%lf = %lf",a ,b , a-b);
           break;
    case '*' :
           printf("%lf*%lf = %lf",a ,b , a*b);
           break;
    case '/' :
           if (b != 0){
            printf("%lf / %lf = %lf",a ,b , a/b);
           } else printf("error");
           break;
    case '%' :
           if (b != 0){
            printf("%lf mode %lf = %lf",a ,b , a%b);
           }else printf("error");
           break;
     
  }
  */
  return 0;
}
