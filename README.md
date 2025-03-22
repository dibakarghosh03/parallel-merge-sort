# Merge Sort vs Parallel Merge Sort

This project implements two variations of the Merge Sort algorithm:

- **Merge Sort**: A simple, traditional sorting algorithm with a time complexity of O(n log n).
- **Parallel Merge Sort**: A parallelized version of Merge Sort using threads to improve performance on multi-core systems.

## Performance Comparison

This program compares the performance of both sorting algorithms by measuring the time taken to sort a vector of `10,000,000` random integers.

## Files

- `main.cpp`: The entry point of the program where Merge Sort and Parallel Merge Sort are compared.
- `sorting/mergeSort.hpp` & `sorting/mergeSort.cpp`: Implementation of the Merge Sort algorithm.
- `sorting/parallelMergeSort.hpp` & `sorting/parallelMergeSort.cpp`: Implementation of the Parallel Merge Sort algorithm.

## Requirements

- C++11 or higher
- A C++ compiler with thread support (e.g., GCC or Clang)

## How to Build and Run

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/merge-sort-vs-parallel-merge-sort.git
    ```

2. Navigate to the project directory and compile:
    ```bash
    g++ main.cpp sorting/mergeSort.cpp sorting/parallelMergeSort.cpp -o merge_sort_comparison -pthread
    ```

3. Run the program:
    ```bash
    ./merge_sort_comparison
    ```
