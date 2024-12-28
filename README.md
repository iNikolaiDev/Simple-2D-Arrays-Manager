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

    // returns 3
    printf("Number of items in Houses[3][5]: %i", 2DArray_Count(Houses[3][5][150]));

    // returns No
    printf("Item 6 exists in Houses[3][5]? %i", 2DArray_Contains(Houses[3][5][150], 6) ? ("Yes"):("No"));

    // returns Yes
    printf("Item 65 exists in Houses[3][5]? %i", 2DArray_Contains(Houses[3][5][150], 65) ? ("Yes"):("No"));

    2DArray_Remove(Houses[3][5][150], 65);

    // returns 2
    printf("Number of items in Houses[3][5]: %i", 2DArray_Count(Houses[3][5][150]));

    // returns No
    printf("Item 65 exists in Houses[3][5]? %i", 2DArray_Contains(Houses[3][5][150], 65) ? ("Yes"):("No"));

}
```

#### 2DArray_Add
>* **Parameters:**
>	* `name`: array [ x ] [ y ] [ maximum ]
>	* `value`: value you want to add
>* **Returns:**
>	* true if Success
>	* false if Failure

#### 2DArray_Remove
>* **Parameters:**
>	* `name`: array [ x ] [ y ] [ maximum ]
>	* `value`: value you want to remove from array
>* **Returns:**
>	* true if Success
>	* false if Failure

#### 2DArray_Contains
>* **Parameters:**
>	* `name`: array [ x ] [ y ] [ maximum ]
>	* `value`: value you want to check
>* **Returns:**
>	* true if exists
>	* false if not exists

#### 2DArray_Count
>* **Parameters:**
>	* `name`: array [ x ] [ y ] [ maximum ]
>* **Returns:**
>	* Number of items in array
