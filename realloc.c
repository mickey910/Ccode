#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size = 0;

    printf("�}�C���סG");
    scanf("%d", &size);
    int *arr1 = calloc(size, sizeof(int));

    printf("���w�����G\n");
    for(int i = 0; i < size; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d" , arr1 + i);
        printf("arr1+%d  = %p\n", i,arr1+i);
    }

    printf("��ܤ����G\n");
    for(int i = 0; i < size; i++) {
        printf("arr1[%d] = %d\n", i, *(arr1 + i));
    }

    int *arr2 = realloc(arr1, sizeof(int) * size * 2);
    printf("��ܤ����G\n");
    for(int i = 0; i < size * 2; i++) {
        printf("arr2[%d] = %d\n", i, *(arr2 + i));
    }

    printf("arr1 ��}�G%p\n", arr1);
    printf("arr2 ��}�G%p\n", arr2);

    free(arr2);

    return 0;
}
