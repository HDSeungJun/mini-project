#include "manager.h"

// 상품의 리스트를 파일에 저장하는 함수
void save_data(Product* p, int count);

// 프로그램을 실행한 직후, 파일에 저장된 데이터가 있다면 구조체에 저장하는 함수, 상품의 개수를 반환
int load_data(Product* p);
