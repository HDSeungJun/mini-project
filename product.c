#include <stdio.h>
#include "product.h"

// 사용자에게 어떤 작업을 할지 리스트를 보여주고 사용자로부터 작업 리스트의 번호를 입력받아 반환하는 함수
int select_menu()
{
    int choice;

    printf("1. 상품 보기\n");
    printf("2. 상품 추가\n");
    printf("3. 상품 수정\n");
    printf("4. 상품 삭제\n");
    printf("5. 상품 저장\n");
    printf("6. 상품 검색\n");
    printf("0. 작업 종료\n\n");
 
    printf("=> 작업할 리스트의 번호를 입력하세요: ");
    scanf("%d", &choice);

    return choice;
}

// 하나의 상품을 추가하는 함수, 추가되었다는 의미로 1을 반환한다.
int create_product(Product* p)
{   
    getchar();
    printf("상품의 이름: ");
    scanf("%[^\n]s", p->name);

    printf("상품의 무게 [gram 단위]: ");
    scanf("%d", &p->weight);

    printf("상품의 가격 [원 단위]: ");
    scanf("%d", &p->price);

    printf("상품의 평점 [1~5]: ");
    scanf("%d", &p->rating);

    printf("=> 상품이 추가되었습니다.\n\n");

    p->s_price = p->price*10/p->weight;

    return 1;
}

// 상품을 읽어오는 함수
void read_products(Product p)
{
        printf("%s\t %4d %4d %5d %4d\n", p.name, p.weight, p.price, p.s_price, p.rating);
}

// 상품을 수정하는 함수
void update_product(Product* p)
{
    getchar();
    printf("상품의 이름: ");
    scanf("%[^\n]s", p->name);

    printf("상품의 무게 [gram 단위]: ");
    scanf("%d", &p->weight);

    printf("상품의 가격 [원 단위]: ");
    scanf("%d", &p->price);

    printf("상품의 평점 [1~5]: ");
    scanf("%d", &p->rating);

    p->s_price = p->price*10/p->weight;

    printf("=> 해당  상품이 수정되었습니다.\n\n");
}

// 상품을 삭제하는 함수, 삭제 방식은 무게를 -1
int delete_product(Product* p)
{
    p->weight = -1;

    printf("=> 해당 상품이 삭제되었습니다.\n\n");
	
	return 1;
}

