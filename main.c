#include <stdio.h>


int main()
{
    int arr_ele, operation,index,option,search,found,n,smallest,largest;
    int array[500]={};
    printf("\x1b[33mHow many elements? :\x1b[0m ");
    scanf("%d",&arr_ele);
    for (int i=0; i<arr_ele; i++) {
        printf("Enter the values: ");
        scanf("%d",&array[i]);
    }
    printf("\x1b[33mEnter operations (1-5) or 0 to exit\n\n\x1b[0m");

    do{
        printf("1. Insert\n2. Update\n3. Delete\n4. Display\n5.Search a number\n6. Find the smallest or largest number\n0.Exit\n\n");
        printf("\x1b[35mChoose the option:\x1b[0m ");
        scanf("%d", &operation);

        switch(operation) {

    case 1: //Insert an element
        printf("\x1b[36mInserting a number into the array\x1b[0m\n");
        printf("Enter the index number : ");
        scanf("%d",&index);
        printf("Enter the value: ");
        scanf("%d",&array[index]);
        break;
    case 2: //Update
      printf("\x1b[36mUpdating a number in the array\x1b[0m\n");
      printf("Enter the index that you want to update: ");
      scanf("%d",&index);
      printf("Enter your value:");
      scanf("%d\n\n",&array[index]);
      break;

    case 3: //Delete
        printf("\x1b[36mDeleting a number from the array\x1b[0m\n");
        printf("The number of index that you want to delete: ");
        scanf("%d",&index);
            for(int i=index;i<arr_ele;i++){
                array[i]=array[i+1];
                }
        break;

    case 4: //Display
        printf("\x1b[36mDisplaying the array\x1b[0m\n");
        printf("1. View array\n2. View a specific index\nEnter-");
        scanf("%d",&option);
        if (option==1)
            printf("The array is :[ ");
            for(int i=0; i<arr_ele; i++)
                {
                printf("%d ",array[i]);
                    }
            printf("]\n");
        if (option==2) {
            printf("Number of index: ");
            scanf("%d",&array[index]);
            printf("The value of index %d is: %d\n",index,array[index]);
        }
        break;

    case 5: //Search
        printf("\x1b[36mSearching for a number\x1b[0m\n");
        printf("Enter number that you want to search: ");
        scanf("%d",&search);
        for (int i=0; i<500; i++) {
            if (array[i]==search){
                printf("The element is found at index %d\n",i);
                found=1;
                break;
            }
        } if (found==0) {
            printf("Not found");
                }
        break;

     case 6: // Smallest and largest
         printf("\x1b[36mFinding the smallest and largest number\x1b[0m\n");

                if (n > 0) {
                    smallest = largest = array[0];
                    for (int i = 1; i < n; i++) {
                        if (array[i] > largest) {
                            largest = array[i];
                        }
                        if (array[i] < smallest) {
                            smallest = array[i];
                        }
                    }
                    printf("The smallest number is: %d\n", smallest);
                    printf("The largest number is: %d\n", largest);
                } else {
                    printf("Array is empty!\n");
                }
                break;

            case 0:
                printf("\x1b[32mExiting program\n\x1b[0m\a");
                break;

            default:
                printf("\x1b[31mInvalid Operation\nplease choose the option between 0-6\n\x1b[0m\a");
                break;
        }

    } while (operation != 0);

    return 0;
}
