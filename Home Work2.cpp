//
//  main.cpp
//  Home Work 2
//
//  Created by Ho Tsung Kai on 2019/3/20.
//  Copyright © 2019 Ho Tsung Kai. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int a,b,c;
    printf("請輸入您的出生年份（西元）：");
    scanf("%d",&a);
    printf("請輸入您出生的月份：");
    scanf("%d",&b);
    printf("請輸入您的日期：");
    scanf("%d",&c);
    printf("您的出生為西元 %d 年 %d 月 %d 日\n",a,b,c);
    return 0;
}
