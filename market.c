#include <stdio.h>
#include "manager.h"

int main(void)
{
    #ifdef DEBUG	
	printf("Debug: %s %s %s %d\n", __DATE__ , __TIME__, __FILE__, __LINE__);
    #endif

    Product product[100];
    int choice;
    int count = 0;
    int curcount = count;
    int s_product;
    int d_check;

    while(1)
    {
        choice = select_menu();

        if(choice == 0)
	{
	    printf("종료되었습니다!\n");
            break;
	}
        else if(choice == 1)
        {
            if(count > 0)
	    {
                list_products(product, curcount);
	    }
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
            printf("=> 정말로 삭제하시겠습니까? [삭제: 1] ");
	    scanf("%d", &d_check);
	    if(d_check == 1)
	   	 count -= delete_product(&product[s_product-1]);
            else
		printf("삭제가 취소되었습니다.\n");
	}
    }

    return 0;
}

