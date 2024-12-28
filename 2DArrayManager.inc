/*
    v0.0.1
    - author: Nikolai.

*/

stock bool:AddItemTo2DArray(const array[][][], x, y, max, value) {
    if (array[x][y][max-1] < max) { // Check if there's space to add (avoiding full sublist)
        for (new i = 0; i < max; i++) {
            if ( array[x][y][i] == 0 ) { // filter non empty items , 0 means empty
                array[x][y][i] = value; array[x][y][max-1]++; // Increment the counter for item count
                // printf("[DEBUG]: array[%i][%i][%i] value: %i", x, y, i, array[x][y][i]);
                return true; // Success
            }
        }
    }
    return false; // List is full, cannot add item
}
stock bool:RemoveItemFrom2DArray(const array[][][], x, y, max, value) {
    for (new i = 0; i < max; i++) { // searching in array
        if ( array[x][y][i] == value ) { // if item found set it to 0
            array[x][y][i] = 0; array[x][y][max-1]--;
            return true; // Success
        }
    }
    return false;
}
stock bool:isContainsItemIn2DArray(const array[][][], x, y, max, value) {
    for (new i = 0; i < max; i++) {
        if (array[x][y][i] == value) {
            return true; // Item exists
        }
    }
    return false; // Item not found
}
stock ItemsCountInList2DArray(const array[][][], x, y, max) return array[x][y][max-1];

/**
 * Useage: 2DArray_Add(iterator<>, value);
 *
 */
#define 2DArray_Add(%0[%1][%2][%3],%4) AddItemTo2DArray(%0, %1, %2, %3, %4)
/**
 * Useage: 2DArray_Remove(iterator<>, value);
 *
 */
#define 2DArray_Remove(%0[%1][%2][%3],%4) RemoveItemFrom2DArray(%0, %1, %2, %3, %4)
/**
 * Useage: 2DArray_Contains(iterator<>, value);
 *
 */
#define 2DArray_Contains(%0[%1][%2][%3],%4) isContainsItemIn2DArray(%0, %1, %2, %3, %4)
/**
 * Useage: 2DArray_Count(iterator<>);
 *
 */
#define 2DArray_Count(%0[%1][%2][%3]) ItemsCountInList2DArray(%0, %1, %2, %3)
