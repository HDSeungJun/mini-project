#include "product.h"

// 상품들의 리스트의 목차를 보여주는 함수
void product_list_contents();

// 상품들의 리스트 전체를 사용자에게 보여주는 함수
void list_products(Product* p, int count);

// 삭제 전이나 수정 전, list_product()를 통해 상품의 리스트를 보여주고 삭제하거나 수정할 상품의 번호를 입력받아 반환하는 함수
int select_product_no(Product* p, int count); 
