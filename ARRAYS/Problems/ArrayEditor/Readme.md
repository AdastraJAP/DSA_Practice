
 📂 Array Editor — OOP Array Operations Challenge

A C++ exercise designed to *master array fundamentals* — insertion, deletion, rotation, and reversal — using *object-oriented programming*.  
This project lets you *build two implementations* of an Array Editor:

1. *Manual shifting* using a raw dynamic array.  
2. **std::vector-based** implementation using STL.

---

## 📝 Problem Statement

Implement a class that maintains an integer array and supports the following operations:

| Op Code | Parameters         | Description                                    |
|---------|--------------------|------------------------------------------------|
| 1     | x                | Insert x at the *beginning*                |
| 2     | x                | Insert x at the *end*                      |
| 3     | i x              | Insert x at **position i** (0-based)       |
| 4     | —                  | Delete at *beginning*                        |
| 5     | —                  | Delete at *end*                              |
| 6     | i                | Delete at **position i** (0-based)           |
| 7     | k                | Rotate *right* by k positions              |
| 8     | l r              | Reverse the subarray from index l to r     |

⚠ If an operation is *invalid* (e.g., index out of range, delete from empty), it should be *skipped*.

