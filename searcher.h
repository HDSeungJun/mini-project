#include "saver.h"

// 상품을 어떤 방식으로 찾을 것인지 사용자에게 요청하고 입력받아 반환하는 함수  [1. 이름, 2. 가격, 3. 평점]
int search_product();

// 상품들을 이름으로 검색하여 일치하는 상품들을 보여주는 함수
void search_products_by_name(Product*p, int count);

// 상품들을 가격으로 검색하여 일치하는 상품들을 보여주는 함수
void search_products_by_price(Product*p, int count);

// 상품들을 평점으로 검색하여 일치하는 상품들을 보여주는 함수
void search_products_by_rating(Product*p, int count);
