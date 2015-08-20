#include<stdio.h>

int* arrElements(int size);

int main()
{
    int ifoundit=0;
    int *array,e,result,i,n;

    printf("Enter number of elements:");
    scanf("%d",&n);

    array = (int*) arrElements(n);
    e = (int)element();
    printf("%d\n",e);

    for(i=0;i<n;i++)
    {
        printf("%d\n",*(array+i));
    }

    for(i=0;i< (sizeof(array)/sizeof(int)); i++)
    {
        if(e == array[i])
        {
            ifoundit=1;
            printf("The element is found at the positon:%d\n",i+1);
            break;
        }
    }

    if(ifoundit==0)
    {
        printf("The element is not present\n");
    }
}

int element()
{
    static int x;
    printf("enter the number\n");
    scanf("%d",&x);
    return x;
}

int* arrElements(int size)
{
    int i=0;
    static int elements[10];
    for(i=0;i<size;i++)
    {
        scanf("%d", &elements[i]);
    }
    return elements;
}
