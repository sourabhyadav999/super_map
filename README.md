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


## operator[] (index)
operator [](index) is used to access the elements of the super_map given at that index




## Further Work: To Be Done

## Delete(key) functions have to be implemented.
### Type of Delete(key) functions
#### delete_first(key)
Delete the first occurance of the key, decrease all afterward indexes by 1
#### delete_last(key)
Delete the last occurance of the key, decrease all afterward indexes by 1
#### delete_all(key)
Delete all the occurances of the key, modify the remaining indexes such as they remain contionous

## Delete(index) functions have to be implemented.
### Type of Delete(index) functions
#### delete_index(index_)
Delete the element at index index_, decrease all afterward indexes by 1

## update(index_,key_) functions have to be implemented.
update the key at the index_ to new key value, i.e key_



