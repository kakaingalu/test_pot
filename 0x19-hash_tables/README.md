# 0x19. C - Hash tables
## About
An introductory project on:
- Hash functions
- How to use hash tables
- Dealing with collisions
## Requirements
- Ubuntu 14.04
- gcc 4.8.4
## File Descriptions
**[hash_tables.h](hash_tables.h)** - header file containing all function prototypes and the definitions for types `hash_node_t`, `hash_table_t`, `shash_node_t`, and `shash_table_t`.

### Mandatory
**[0-hash_table_create.c](0-hash_table_create.c)** - function that creates a hash table.

**[1-djb2.c](1-djb2.c)** - hash function that implements the djb2 algorithm.

**[2-key_index.c](2-key_index.c)** - function that returns the index of a key.

**[3-hash_table_set.c](3-hash_table_set.c)** - function that adds an element to the hash table.

**[4-hash_table_get.c](4-hash_table_get.c)** - function that retrieves a value associated with a key.

**[5-hash_table_print.c](5-hash_table_print.c)** - function that prints a hash table.

**[6-hash_table_delete.c](6-hash_table_delete.c)** - function that deletes a hash table.

### Advanced
**[100-sorted_hash_table.c](100-sorted_hash_table.c)** - all functions from mandatory section rewritten for sorted hash tables.
