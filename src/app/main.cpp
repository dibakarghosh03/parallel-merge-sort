#include <iostream>
#include <vector>
#include <chrono>
#include "sorting/mergeSort.hpp"
#include "sorting/parallelMergeSort.hpp"

int main(int argc, char *argv[]) {

    const int SIZE = 1000000;
    std::vector<int> nums1(SIZE);
    std::vector<int> nums2(SIZE);

    for(int i=0; i<SIZE; i++) {
        nums1[i] = rand()%SIZE;
    }

    for(int i=0; i<SIZE; i++) {
        nums2[i] = rand()%SIZE;
    }


    MergeSort* mergeSort = new MergeSort(&nums1);
    auto start = std::chrono::high_resolution_clock::now();
    mergeSort->sort();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> mergeSortDuration = end - start;
    std::cout << "Merge Sort Duration: " << mergeSortDuration.count() << std::endl;
    delete mergeSort;
    

    ParallelMergeSort* parallelMergeSort = new ParallelMergeSort(&nums2);
    start = std::chrono::high_resolution_clock::now();
    parallelMergeSort->sort();
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> parallelMergeSortDuration = end - start;
    std::cout << "Parallel Merge Sort Duration: " << parallelMergeSortDuration.count() << std::endl;
    delete parallelMergeSort;


    return 0;
}