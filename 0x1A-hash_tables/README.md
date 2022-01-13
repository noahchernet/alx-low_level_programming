0x1A. C - Hash tables
=====================

## Learning Objectives
- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work and how to use them
- What is a collision and what are the main ways of dealing with collisions 
in the context of a hash table
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

## Data structures used in this project
```
/**
* struct hash_node_s - Node of a hash table
*
* @key: The key, string
* The key is unique in the HashTable
* @value: The value corresponding to a key
* @next: A pointer to the next node of the List
  */
  typedef struct hash_node_s
  {
  char *key;
  char *value;
  struct hash_node_s *next;
  } hash_node_t;

/**
* struct hash_table_s - Hash table data structure
* 
* @size: The size of the array
* @array: An array of size @size
* Each cell of this array is a pointer to the first node of a linked list,
* because we want our HashTable to use a Chaining collision handling
  */
  typedef struct hash_table_s
  {
  unsigned long int size;
  hash_node_t **array;
  } hash_table_t;
```

## What is a hash table?
A hash table (hash map) is a data structure that implements an associative array 
abstract data type, a structure that can map keys to values. A hash table uses a 
hash function to compute an index, also called a hash code, into an array of 
buckets or slots, from which the desired value can be found. During lookup, the 
key is hashed and the resulting hash indicates where the corresponding value is 
stored.

![How a hash table works](https://upload.wikimedia.org/wikipedia/commons/thumb/7/7d/Hash_table_3_1_1_0_1_0_0_SP.svg/473px-Hash_table_3_1_1_0_1_0_0_SP.svg.png)
(Excerpt from Wikipedia)