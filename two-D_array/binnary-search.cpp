// Concept (MOST IMPORTANT)

// Isko 1D array jaisa treat karte hain

// 🧠 Mapping Trick

// Agar:

// rows = n
// cols = m


// Then:

// mid index (1D) = (start + end) / 2

// Row = mid / m

// Col = mid % m

// 👉 Ye core concept hai
// Binary Search Steps

// start = 0

// end = (n*m) - 1

// Find mid

// Convert mid → (row, col)

// Compare with target

// ⏱ Time Complexity:
// O(log(n*m))