# Simple-2D-Arrays-Manager
 This source allows you to manage 2D arrays

## Example useage
```pawn

#include <open.mp>
#include <2DArrayManager>

new Houses[100][7][150]; 

main() {

    2DArray_Add(Houses[3][5][150], 25); // Add 25 to Houses[3][5].
    2DArray_Add(Houses[3][5][150], 14);
    2DArray_Add(Houses[3][5][150], 65);

    printf("Number of items in Houses[3][5]: %i", 2DArray_Count(Houses[3][5][150]));

    printf("Item 6 exists in Houses[3][5]? %i", iIter_Contains(Houses[3][5][150], 6) ? ("Yes"):("No"));
    printf("Item 65 exists in Houses[3][5]? %i", iIter_Contains(Houses[3][5][150], 65) ? ("Yes"):("No"));

    iIter_Remove(Houses[3][5][150], 65);

    printf("Number of items in Houses[3][5]: %i", 2DArray_Count(Houses[3][5][150]));

    printf("Item 65 exists in Houses[3][5]? %i", iIter_Contains(Houses[3][5][150], 65) ? ("Yes"):("No"));

}
```

#### 2DArray_Add
>* **Parameters:**
>	* `name`: array [ x ] [ y ] [ maximum ]
>* **Returns:**
>	* true or false
