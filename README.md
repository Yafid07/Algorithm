# CSE 2422: Algorithms – Assignment 1

## Sorting Algorithms and Empirical Runtime Analysis

### Author

**Name:** Tajrian Chowdhury
**Student ID:** C243026

---

## Project Overview

This project focuses on the implementation and empirical runtime analysis of three classical sorting algorithms. The objective is to compare their performance as input sizes increase and to observe how theoretical time complexities align with real-world execution times.

---

## Core Objectives

* Implement three sorting algorithms from scratch:

  * Insertion Sort
  * Merge Sort
  * Quick Sort
* Perform empirical runtime analysis using different input sizes
* Analyze how execution time scales with increasing data
* Display structured output for performance comparison

---

## Algorithms Implemented

### 1. Insertion Sort

A simple, intuitive algorithm that builds the sorted array one element at a time by inserting elements into their correct positions.

### 2. Merge Sort

A divide-and-conquer algorithm that recursively splits the array into halves and merges them in sorted order.

### 3. Quick Sort

An efficient sorting algorithm that selects a pivot element and partitions the array into smaller and larger elements around the pivot.

---

## How to Run the Program

### Step 1: Compile the Code

```bash
g++ Test.cpp -o sort
```

### Step 2: Run the Program

```bash
./sort
```

---

## Output Format

For each execution, the program displays:

* Student Name
* Student ID
* Algorithm Name
* Input Size
* Execution Time (in microseconds)

---

## Project Files

* `Test.cpp` → Implementation of all sorting algorithms
* `README.md` → Project documentation and instructions

---
### 5. Discussion

Analyze and compare performance differences between the algorithms and explain how the observed results relate to theoretical time complexities.

---
## Requirements

* C++ Compiler (e.g., `g++`)
* IDE or Terminal (CodeBlocks, VS Code, etc.)

---
