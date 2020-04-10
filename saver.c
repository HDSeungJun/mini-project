#include <stdio.h>
#include "saver.h"

// 상품의 리스트를 파일에 저장하는 함수
void save_data(Product* p, int count)
{
    FILE* fp = fopen(PRODUCT, "wt");

    fprintf(fp, "별점\t무게\t가격 표준가격 이름\n");

    for(int i=0; i<count; i++)
        fprintf(fp, "%d\t%4d \t%d %d\t%s\n", p[i].rating, p[i].weight, p[i].price, p[i].s_price, p[i].name);
    
    fclose(fp);
}

// 프로그램을 실행한 직후, 파일에 저장된 데이터가 있다면 구조체에 저장하는 함수, 상품의 개수를 반환
int load_data(Product* p)
{
    FILE* fp = fopen(PRODUCT, "rt");
    char dummy[100];

    if(fp == NULL)
        return 0;

    int i = 0;
    fgets(dummy,sizeof(dummy),fp);
    while(!feof(fp))
    {
        fscanf(fp, "%d %d %d %d %[^\n]s", &p[i].rating, &p[i].weight, &p[i].price, &p[i].s_price, p[i].name);
        i++;
    }

    fclose(fp);

    return i-1;
}
