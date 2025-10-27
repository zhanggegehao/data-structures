//关于多项式加减
#include<stdio.h>
#define MAXSIZE 1000 //多项式的最大长度
typedef struct 
{   /* data */
    float p; //系数
    int e;   //指数
}Polynomial;
 
typedef struct 
{
    Polynomial *elem; //多项式的基地址
    int length;      //多项式的当前长度
}SqList;
