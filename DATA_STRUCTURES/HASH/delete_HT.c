#include"hash.h"

int destroy_HT(hash_t *arr, int size)
{
	for(int i = 0; i < size; i++){
		arr[i].value = -1;

		if(arr[i].link != NULL)
		{
			hash_t *temp = arr[i].link;
			while(arr[i].link != NULL)
			{
				temp = arr[i].link;
				arr[i].link = temp -> link;
				free(temp);
			}
		}
		arr[i].link = NULL;
	}
	return SUCCESS;
}
/* Another way : 
#include"hash.h"

int destroy_HT(hash_t *arr, int size)
{
        hash_t *temp = NULL;
        hash_t *temp1 = NULL;
        for(int i = 0; i < size; i++)
        {
            if(arr[i].value != -1)
            {
                temp = arr[i].link;
                arr[i].value = -1;
                arr[i].link = NULL;
            }
            //hast_t *temp1 = NULL;
            while(temp)
            {
                temp1 = temp -> link;
                free(temp);
                temp = temp1;
            }
        }
        return SUCCESS;
}
*/
