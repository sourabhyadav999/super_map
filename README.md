# super_map
super_map is an array/vector like standard template library dynamic size data structure with access to random memory possible having O(1) searching time even if element is present in multiple indexes.
# Functios
## insert(value)
This function is used to insert the value in the super_map. It is O(1).

## search_first(key)
Gives the first index where the key appears in O(1) time. Return type int.

## search_last(key)
Gives the last index where the key appears in O(1) time. Return type int.

## search_all(key)
Gives all indexes where the key appears in O(1) time in sorted manner. Return type vector.

## Delete(key) functions have to be implemented.

## Delete(index) functions have to be implemented.

## update(index,key) functions have to be implemented.

## operator[] (index)
operator [](index) is used to access the elements of the super_map given at that index
