#include <stdio.h>
#include <string.h>
#include "searcher.h"

// 상품을 어떤 방식으로 찾을 것인지 사용자에게 요청하고 입력받아 반환하는 함수  [1. 이름, 2. 무게, 3. 평점]
int search_product()
{
    int s;

    getchar();
    printf("상품 검색 방식 [1. 이름, 2. 가격, 3. 평점]: ");
    scanf("%d", &s);
    getchar();

    return s;
}
// 상품들을 이름으로 검색하여 일치하는 상품들을 보여주는 함수
void search_products_by_name(Product* p, int count)
{
    char s_product[50];
    int s_count=0;

    printf("검색할 상품의 이름을 입력하세요: ");
    scanf("%[^\n]s", s_product);

    product_list_contents();
    for(int i=0; i<count; i++)
        if(p[i].weight != -1)
            if(strstr(p[i].name, s_product))
            {
                printf("%2d ", i+1);
                read_products(p[i]);
                s_count++;
            }

    if(s_count==0)
        printf("=> 검색된 상품과 일치하는 상품이 없습니다.\n");
}

// 상품들을 가격으로 검색하여 일치하는 상품들을 보여주는 함수
void search_products_by_price(Product* p, int count)
{
    int s_product;
    int s_count=0;

    printf("검색할 상품의 가격을 입력하세요: ");
    scanf("%d", &s_product);

    product_list_contents();
    for(int i=0; i<count; i++)
        if(p[i].weight != -1)
            if(s_product == p[i].price)
            {
                printf("%2d ", i+1);
                read_products(p[i]);
                s_count++;
            }

    if(s_count==0)
        printf("=> 검색된 상품과 일치하는 상품이 없습니다.\n");
}

// 상품들을 평점으로 검색하여 일치하는 상품들을 보여주는 함수
void search_products_by_rating(Product* p, int count)
{
    int s_product;
    int s_count=0;

    printf("검색할 상품의 평점을 입력하세요: ");
    scanf("%d", &s_product);
    
    product_list_contents();
    for(int i=0; i<count; i++)
        if(p[i].weight != -1)
            if(s_product == p[i].rating)
            {
                printf("%2d ", i+1);
                read_products(p[i]);
                s_count++;
            }

    if(s_count==0)
        printf("=> 검색된 상품과 일치하는 상품이 없습니다.\n");
}
