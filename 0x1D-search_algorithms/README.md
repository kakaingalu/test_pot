# 0x1D. C - Search Algorithms
## About
An introductory project on:
- Search algorithms
- Time complexity
## Requirements
- Ubuntu 14.04
- gcc 4.8.4
## File Descriptions
**[search_algos.h](search_algos.h)** - header file containing all function prototypes and definitions for types `listint_t` and `skiplist_t`.

### Mandatory
**[0-linear.c](0-linear.c)** - function that searches for a value in an array of integers using the linear search algorithm.

**[1-binary.c](1-binary.c)** - function that searches for a value in a sorted array of integers using the binary search algorithm.

**[2-O](2-O)** - time complexity (worst case) of a linear search in an array of size n.

**[3-0](3-0)** - space complexity (worst case) of an iterative linear search algorithm in an array of size n.

**[4-0](4-0)** - time complexity (worst case) of a binary search in an array of size n.

**[5-0](5-0)** - space complexity (worst case) of a binary search in an array of size n.

**[6-0](6-0)** - space complexity of this function:
```C
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

### Advanced
**[100-jump.c](100-jump.c)** - function that searches for a value in a sorted array of integers using the jump search algorithm.

**[101-0](101-0)** - time complexity (average case) of a jump search in an array of size n, using `step = sqrt(n)`.

**[102-interpolation.c](102-interpolation.c)** - function that searches for a value in a sorted array of integers using the interpolation search algorithm.

**[103-exponential.c](103-exponential.c)** - function that searches for a value in a sorted array of integers using the exponential search algorithm.

**[104-advanced_binary.c](104-advanced_binary.c)** - function that searches for the first appearance of a value in a sorted array of integers using the binary search algorithm.

**[105-jump_list.c](105-jump_list.c)** - function that searches for a value in a sorted singly linked list of integers using the jump search algorithm.

**[106-linear_skip.c](106-linear_skip.c)** - function that searches for a value in a sorted skip list of integers.

**[107-0](107-0)** - time complexity (average case) of a jump search in a singly linked list of size n, using `step = sqrt(n)`.

**[108-0](108-0)** - time complexity (average case) of a jump search in a skip list of size n, with an express lane using `step = sqrt(n)`.
