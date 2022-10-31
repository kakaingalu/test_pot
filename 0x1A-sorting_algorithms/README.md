# 0x1A. C - Sorting algorithms & Big O
## About
An introductory project on:
- Sorting algorithms
- Time complexity and Big O notation
- Stability
## Requirements
- Ubuntu 14.04
- gcc 4.8.4
## File Descriptions
**[sort.h](sort.h)** - header file containing the prototypes of almost all functions and the definition of type `listint_t`. 

**[print_array.c](print_array.c)** - function that prints an array.

**[print_list.c](print_list.c)** - function that prints a list.

**[deck.h](deck.h)** - header file containing the prototype for `sort_deck` and the definition of types `kind_t`, `card_t`, and `deck_node_t`.

**[print_deck.c](print_deck.c)** - function that prints a deck of cards.
### Mandatory
**[0-bubble_sort.c](0-bubble_sort.c)** - function that sorts an array of integers in ascending order using the bubble sort algorithm.

**[0-O](0-O)** - time complexities for the bubble sort algorithm in the best, average, and worst case scenarios.

**[1-insertion_sort_list.c](1-insertion_sort_list.c)** - function that sorts a doubly linked list of integers in ascending order using the insertion sort algorithm.

**[1-O](1-O)** - time complexities for the insertion sort algorithm in the best, average, and worst case scenarios.

**[2-selection_sort.](2-selection_sort.)** - function that sorts an array of integers in ascending order using the selection sort algorithm.

**[2-O](2-O)** - time complexities for the selection sort algorithm in the best, average, and worst case scenarios.

**[3-quick_sort.c](3-quick_sort.c)** - function that sorts an array of integers in ascending order using the quick sort algorithm with the Lomuto partition scheme.

**[3-O](3-O)** - time complexities for the quick sort algorithm with the Lomuto partition scheme in the best, average, and worst case scenarios.

**[4-O](4-O)** - time complexity of this function:
```C
void f(int n)
{
    printf("n = %d\n", n);
}
```

**[5-O](5-O)** - time complexity of this function
```C
void f(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("[%d]\n", i);
    }
}
```

**[6-O](6-O)** - time complexity of this function
```C
void f(int n)
{
    int i;

    for (i = 0; i < n; i += 98)
    {
        printf("[%d]\n", i);
    }
}
```

**[7-O](7-O)** - time complexity of this function
```C
void f(unsigned int n)
{
    int i;

    for (i = 1; i < n; i = i * 2)
    {
        printf("[%d]\n", i);
    }
}
```

**[8-O](8-O)** - time complexity of this function
```js
var factorial = function(n) {
    if(n == 0) {
        return 1
    } else {
        return n * factorial(n - 1);
    }
}
```

**[9-O](9-O)** - time complexity of this algorithm
```bash
foreach($numbers as $number)
{
    echo $number;
}
```

**[10-O](10-O)** - time complexity of this function
```C
void f(unsigned int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j = j * 2)
        {
            printf("[%d] [%d]\n", i, j);
        }
    }
}
```

**[11-O](11-O)** -  time complexity of this function
```C
void f(int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 1; j < n; j = j * 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
        else
        {
            for (j = 0; j < n; j = j + 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
    }
}
```

**[12-O](12-O)** - time complexity of this function
```C
int Fibonacci(int number)
{
    if (number <= 1) return number;

    return Fibonacci(number - 2) + Fibonacci(number - 1);
}
```

**[13-O](13-O)** - time complexity of this function
```python
def func(n):
    a=5
    b=6
    c=10
    for i in range(n):
        for j in range(n):
            x = i * i
            y = j * j
            z = i * j
    for k in range(n):
        w = a*k + 45
        v = b*b
    d = 33
```

**[14-O](14-O)** - time complexity of this function
```C
void f(int n)
{
     int i;
     int j;

     for (i = 0; i < n; i++)
     {
          for (j = i + 1; j < n; j++)
          {
               printf("[%d] [%d]\n", i, j);
          }
     }
}
```

**[15-O](15-O)** - time complexities of the following operations on an unsorted array:
- Accessing the nth element
- Inserting at index n
- Removing at index n
- Searching for an element in an array of size n
- Setting value at index n

**[16-O](16-O)** - time complexities of the following operations on a singly linked list:
- Accessing the nth element
- Inserting after the nth element (Considering you have a pointer to the node to insert)
- Removing the nth element (Considering you have a pointer to the node to remove)
- Searching for an element in a linked list of size n
- Setting the value of the nth element (Considering you have a pointer to the node to set the value of)

**[17-O](17-O)** - time complexities of the following operations on a doubly linked list:
- Accessing the nth element
- Inserting after the nth element (Considering you have a pointer to the node to insert)
- Removing the nth element (Considering you have a pointer to the node to remove)
- Searching for an element in a linked list of size n
- Setting the value of the nth element (Considering you have a pointer to the node to set the value of)

**[18-O](18-O)** - time complexities of the following operations on a python3 list:
- Accessing the nth element
- Inserting at index n
- Removing at index n
- Searching for an element in a Python list of size n
- Setting value at index n

**[19-O](19-O)** - time complexities of the following operations on a stack:
- push
- pop
- Searching for an element in a stack of size n

**[20-O](20-O)** - time complexities of the following operations on a queue:
- push
- pop
- Searching for an element in a queue of size n

**[21-O](21-O)** - time complexities of the following operations on a hash table:
- Searching for an element, best case
- Searching for an element, worst case
- Insertion, best case
- Insertion, worst case
- Deletion, best case
- Deletion, worst case

### Advanced
**[100-shell_sort.c](100-shell_sort.c)** - function that sorts an array of integers in ascending order using the shell sort algorithm.

**[101-cocktail_sort_list.c](101-cocktail_sort_list.c)** - function that sorts a doubly linked list of integers in ascending order using the cocktail shaker sort algorithm.

**[101-O](101-O)** - time complexities for the cocktail shaker sort algorithm in the best, average, and worst case scenarios.

**[102-counting_sort.c](102-counting_sort.c)** - function that sorts an array of integers in ascending order using the counting sort algorithm.

**[102-O](102-O)** - time complexities for the counting sort algorithm in the best, average, and worst case scenarios.

**[103-merge_sort.c](103-merge_sort.c)** - function that sorts an array of integers in ascending order using the top-down merge sort algorithm

**[103-O](103-O)** - time complexities for the top-down merge sort algorithm in the best, average, and worst case scenarios.

**[104-heap_sort.c](104-heap_sort.c)** - function that sorts an array of integers in ascending order using the sift-down heap sort algorithm

**[104-O](104-O)** - time complexities for the sift-down heap sort algorithm in the best, average, and worst case scenarios.

**[105-radix_sort.c](105-radix_sort.c)** - function that sorts an array of integers in ascending order using the LSD radix sort algorithm

**[105-O](105-O)** - time complexities for the LSD radix sort algorithm in the best, average, and worst case scenarios.

**[106-bitonic_sort.c](106-bitonic_sort.c)** - function that sorts an array of integers in ascending order using the bitonic sort algorithm

**[106-O](106-O)** - time complexities for the bitonic sort algorithm in the best, average, and worst case scenarios.

**[107-quick_sort_hoare.c](107-quick_sort_hoare.c)** - function that sorts an array of integers in ascending order using the quick sort algorithm with the Hoare partition scheme.

**[107-O](107-O)** - time complexities for the quick sort algorithm with the Hoare partition scheme in the best, average, and worst case scenarios.

**[1000-sort_deck.c](1000-sort_deck.c)** - function that sorts a deck of cards.
