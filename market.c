#include <stdio.h>
#include "saver.h"

int main(void)
{
    #ifdef DEBUG
        printf("Debug: %s %s %s %d\n", __DATE__ , __TIME__, __FILE__, __LINE    __);
    #endif

    Product product[100];
    int choice;
    int count = 0;
    int curcount = count;
    int s_product;

    count = load_data(product);
    if(count)
    {
        printf("로딩 성공!\n");
        curcount = count;
    }
    else
        printf("저장된 데이터가 없습니다.\n");

    while(1)
    {
        choice = select_menu();

        if(choice == 0)
            break;
        else if(choice == 1)
        {
            if(count > 0)
                list_products(product, curcount);
            else
                printf("입력한 정보가 없습니다!\n\n");
        }
        else if(choice == 2)
            count += create_product(&product[curcount++]);
        else if(choice == 3)
	{
	    s_product = select_product_no(product, curcount);
            update_product(&product[s_product-1]);
	}
        else if(choice == 4)
        {
            s_product = select_product_no(product, curcount);
            count -= delete_product(&product[s_product-1]);
        }
        else if(choice == 5)
        {
            save_data(product, curcount);
        }
    }

    return 0;
}

