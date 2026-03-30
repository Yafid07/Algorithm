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

## Important Rules

* ❌ No built-in sorting functions are used
* ✅ All algorithms are implemented manually

---

## Algorithms Implemented

### 1. Insertion Sort

A simple, intuitive algorithm that builds the sorted array one element at a time by inserting elements into their correct positions.

### 2. Merge Sort

A divide-and-conquer algorithm that recursively splits the array into halves and merges them in sorted order.

### 3. Quick Sort

An efficient sorting algorithm that selects a pivot element and partitions the array into smaller and larger elements around the pivot.

---

## Experimental Setup

Each algorithm is tested with randomly generated integer datasets of the following sizes:

* 10¹ (10 elements)
* 10² (100 elements)
* 10³ (1,000 elements)
* 10⁴ (10,000 elements)
* 10⁵ (100,000 elements)

---

## How to Run the Program

### Step 1: Compile the Code

```bash
g++ main.cpp -o sort
```

### Step 2: Run the Program

```bash
./sort
```

---

## 📈 Output Format

For each execution, the program displays:

* Student Name
* Student ID
* Algorithm Name
* Input Size
* Execution Time (in microseconds)

---

## 📂 Project Files

* `main.cpp` → Implementation of all sorting algorithms
* `README.md` → Project documentation and instructions

---

## 📑 Expected Report (Submission Requirement)

In addition to the code, a PDF report should include:

### 1. Algorithm Descriptions

Explain the logic and working principles of each sorting algorithm in your own words.

### 2. Experimental Results

Provide a table showing execution times (in seconds or microseconds) for all dataset sizes.

### 3. Visual Proof

Include screenshots of program output for the 10⁵ dataset clearly showing your name and student ID.

### 4. Complexity Analysis

| Algorithm      | Best Case  | Average Case | Worst Case |
| -------------- | ---------- | ------------ | ---------- |
| Insertion Sort | O(n)       | O(n²)        | O(n²)      |
| Merge Sort     | O(n log n) | O(n log n)   | O(n log n) |
| Quick Sort     | O(n log n) | O(n log n)   | O(n²)      |

### 5. Discussion

Analyze and compare performance differences between the algorithms and explain how the observed results relate to theoretical time complexities.

---

## Grading Breakdown

| Component                            | Marks   |
| ------------------------------------ | ------- |
| Correct implementation of algorithms | 30      |
| Runtime experiment and results       | 20      |
| Complexity analysis                  | 20      |
| Discussion and explanation           | 20      |
| Code quality and GitHub submission   | 10      |
| **Total**                            | **100** |

---

## Requirements

* C++ Compiler (e.g., `g++`)
* IDE or Terminal (CodeBlocks, VS Code, etc.)

---

## 📌 Notes

* Ensure your GitHub repository is public and prop
