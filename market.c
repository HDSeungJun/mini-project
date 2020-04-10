#include <stdio.h>
#include "searcher.h"

int main(void)
{
    #ifdef DEBUG
        printf("Debug: %s %s %s %d\n", __DATE__ , __TIME__, __FILE__, __LINE    __);
    #endif

    Product product[100];
    int choice;
    int count = 0;
    int curcount = 0;
    int s_product;
    int search;

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
        else if(choice == 6)
        {
            search = search_product();

            if(search == 1)
                search_products_by_name(product, curcount);
            else if(search == 2)
                search_products_by_price(product, curcount);
            else if(search == 3)
                search_products_by_rating(product, curcount);
            printf("\n");
        }
    }

    return 0;
}

