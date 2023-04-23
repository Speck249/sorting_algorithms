#include <sort.h>
#include <stdio.h>
/**
*bubble_sort - sorts int array in ascending order
*@array: first parameter
*@size_t: second parameter
*/

void bubble_sort(int *array, size_t size)
{
size_t n, count;
int temp;

if (array != NULL || size != 0)
{
for (; n < size - 1; n++)
{
for (count = 0; count < size - n - 1; count++)
{
if (array[count] > array[count + 1])
{
temp = array[count + 1];
array[count + 1] = array[count];
array[count] = temp;
print_array(array, size);
}
}
}
}
}
