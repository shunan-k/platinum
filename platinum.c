/* platinum.c -- your weight in platinum */
#include <stdio.h>

int main(void){
    float weight;       /* 你的体重         */
    float value;        /* 相等重量的白金价值*/
    printf("Are you worth your weight in platinum?\n");
    printf ("Let's check it out.\n");
    printf("Please enter your weight in pounds:");
    
    /* 获取用户的输入      */
    scanf("%f", &weight);
    
    /* 假设白金的价格是每盎司$1700 */
    /* 14.5833用于把英镑常衡盎司转换为金衡盎司 */
    value  = 1700.0 * weight * 14.5833;

    printf("Your weight in platinum worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");


    printf("----------------------------------------\n");

    /* 以十进制，八进制，十六进制打印十进制数100*/
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dex = %d; octal = %#o; hex = %#x\n", x, x, x);


    printf("----------------------------------------\n");

    /* 超出系统允许的最大int值*/
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d, %d, %d", i, i + 1, i + 2);
    printf("%u, %u, %u\n", j, j + 1, j + 2);




    return 0;
}
