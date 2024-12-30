# Simple-2D-Arrays-Manager
 This source allows you to manage 2D arrays

## Example useage
```pawn

#include <open.mp>
#include <2DArrayManager>

new Houses[100][7][150];

/*
 * `100`: we have 100 houses
 * `7`: we have 7 sublist for houses
 * `150`: we can add set number up to 148
 * why 148? becouse 149 is the number of items in list
 */

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

    // loop each value of Houses[3][5][150]
2DArray_Foreach(value : Houses[3][5][150]) {

	printf("Value %i", value); // output: 25, 14

}
}
```
## Available Functions

#### 2DArray_Add
>* **Parameters:**
>	* `name`: array[][][slot]
>	* `value`: Value of array
>* **Returns:**
>	* true if Success
>	* false if Failure

#### 2DArray_Remove
>* **Parameters:**
>	* `name`: array[][][slot]
>	* `value`: Value of array
>* **Returns:**
>	* true if Success
>	* false if Failure

#### 2DArray_Contains
>* **Parameters:**
>	* `name`: array[][][slot]
>	* `value`: Value you want to check
>* **Returns:**
>	* true if Exists
>	* false if not Exists

#### 2DArray_Count
>* **Parameters:**
>	* `name`: array[][][slot]
>* **Returns:**
>	* Number of item in array

#### 2DArray_Foreach (New)
>* **Parameters:**
>	* `name`: array[][][slot]
>* **Returns:**
>	* Loop each array value
