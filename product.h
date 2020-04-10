#ifndef __proudct__
#define __product__

// 상품의 정보를 저장할 구조체
typedef struct _product
{
    char name[50];  //상품의 이름
    int weight;     //상품의 무게 (gram 단위)
    int price;      //상품의 가격 (원 단위)
    int s_price;    //상품의 표준가격(10g당)
    int rating;     //상품의 평점 (1~5)
} Product;

#define PRODUCT "product.txt"   // 파일 저장, 로드할 때 혼란을 막기 위해 product.txt를 PRODUCT로 지정

// 사용자에게 어떤 작업을 할 지 리스트를 보여주고 사용자로부터 작업 리스트의 번호를 입력받아 반환하는 함수
int select_menu();

// 하나의 상품을 추가하는 함수, 추가되었다는 의미로 1을 반환한다.
int create_product(Product* p);

// 상품들의 리스트를 한 줄씩 보여주는 함수, list_products()의 보조함수
void read_products(Product p);

// 상품들의 리스트의 목차를 보여주는 함수
//void product_list_contents();

// 상품들의 리스트 전체를 사용자에게 보여주는 함수
//void list_products(Product* p, int count);

// 삭제 전이나 수정 전, list_product()를 통해 상품의 리스트를 보여주고 삭제하거나 수정할 상품의 번호를 입력받아 반환하는 함수
//int select_product_no(Product p); 

// 상품을 수정하는 함수
void update_product(Product* p);

// selet_product_no()로부터 봔한받은 번호의 상품을 삭제하는 함수, 삭제 방식은 무게를 -1로 변경, 삭제되었다는 의미로 1을 반환
int delete_product(Product* p);

// 상품의 리스트를 파일에 저장하는 함수
//void save_data(Product* p, int count);

// 프로그램을 실행한 직후, 파일에 저장된 데이터가 있다면 구조체에 저장하는 함수, 상품의 개수를 반환
//int load_data(Product* p);

// 상품을 어떤 방식으로 찾을 것인지 사용자에게 요청하고 입력받아 반환하는 함수  [1. 이름, 2. 가격, 3. 평점]
//int search_product();

// 상품들을 이름으로 검색하여 일치하는 상품들을 보여주는 함수
//void search_products_by_name(Product*p, int count);

// 상품들을 가격으로 검색하여 일치하는 상품들을 보여주는 함수
//void search_products_by_price(Product*p, int count);

// 상품들을 평점으로 검색하여 일치하는 상품들을 보여주는 함수
//void search_products_by_rating(Product*p, int count);


#endif 
