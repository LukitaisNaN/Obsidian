#include <stdio.h>
#include <stdbool.h>

struct bound_data {
    bool is_upperbound;
    bool is_lowerbound;
    bool exists;
    unsigned int where;
};

struct bound_data checkBound(int value, int arr[], unsigned int length){
   
    struct bound_data s1 = {true, true, false, -1};
    
    for (int i = 0; i < length; i++)
    {
        if (value > arr[i])
        {
            s1.is_lowerbound = false;
        }
        else if (value < arr[i])
        {
            s1.is_upperbound = false;
        }
        else if (arr[i] == value)
        {
            s1.exists = true;
            s1.where = i;
        }
    }
    
    return s1;
}

int main()
{
    int a = 0;
    int arrayLength = 0;
    
    printf("Valor a comparar\n");
    scanf("%d", &a);
    
    printf("Largo del array:\n");
    scanf("%d", &arrayLength);
    
    int array[arrayLength];

    for (int i = 0; i < arrayLength; i++)
    {
        int c = 0;
        printf("Valor para elemento en posicion %d:\n", i);
        scanf("%d",&c);
        array[i] = c; 
    }

    struct bound_data result = checkBound(a, array, arrayLength);

    if (result.is_upperbound)
    {
        printf("El valor es mayor o igual a todos los elementos del array\n");
    }
    else
    {
        printf("El valor no es mayor o igual a todos los elementos del array\n");
    }

    if (result.is_lowerbound)
    {
        printf("El elemento es menor o igual a todos los elementos del array\n");
    }
    else
    {
        printf("El elemento no es menor o igual a todos los elementos del array\n");
    }

    if (result.exists)
    {
        printf("Existe un elemento igual al ingresado en la lista, ubicado en la posicion %d\n", result.where);
    }
    
    

    return 0;
}