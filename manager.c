#include <stdio.h>
#include "manager.h"

// 상품들의 리스트의 목차를 보여주는 함수
void product_list_contents()
{
    printf("No. 이름\t\t 무게 가격 표준가격 평점\n");
    printf("=================================================\n");
}

// 상품들의 리스트 전체를 사용자에게 보여주는 함수
void list_products(Product* p, int count)
{
    product_list_contents();	

    for(int i=0; i<count; i++)
    {
        if(p[i].weight != -1)
	{
	    printf("%2d ", i+1);
            read_products(p[i]);
	}
    }
    printf("\n");
}

// 삭제 전이나 수정 전, list_product()를 통해 상품의 리스트를 보여주고 삭제하거나 수정할 상품의 번호를 입력받아 반환하는 함수
int select_product_no(Product* p, int count)
{
    int s_product;

    list_products(p, count);

    printf("=> 작업할 상품의 번호를 선택해주세요. ");
    scanf("%d", &s_product);

    return s_product;
}
