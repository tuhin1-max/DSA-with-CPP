# 📚 Basic Data Structure
## Module 01: Time and Space Complexity

---

## ❓ Why We Need to Learn Time Complexity

একই problem দুইভাবে solve করা যায় — কিন্তু কোনটা **better code** সেটা বুঝতে Time Complexity জানা দরকার।

**উদাহরণ — 1 থেকে n পর্যন্ত sum বের করা:**

```cpp
// ❌ Approach 1 — Loop দিয়ে (Slow)
int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << sum;
}
// এই code এ n টা operation হয়
```

```cpp
// ✅ Approach 2 — Formula দিয়ে (Fast)
// sum = n * (n + 1) / 2
cout << sum;
// এই code এ মাত্র 1 টা operation হয়
```

> 💡 যখন **large input** দেওয়া হয়, loop দিয়ে করলে **Time Limit Exceeded (TLE)** হয়।  
> তাই আমাদের Time Complexity বিষয়টা বুঝতে হবে।

---

## 📖 What is Time Complexity?

Time Complexity হলো — **কোনো code রান করতে কতটা সময় লাগবে তার একটা পরিমাপ**, যেটা input এর উপর নির্ভর করে।

- কোনো একটা operation করতে কতটুকু সময় নেয় সেটা নির্দিষ্ট করে বলা যায় না (computer ভেদে আলাদা)
- Codeforces / Online Judge এ **1 second** এ প্রায় **10⁷ – 10⁸** টা operation হয়
- তাই আমরা time complexity দেখে বুঝি — solution টা TLE দেবে কিনা

---

## 📐 How to Calculate Time Complexity

### Asymptotic Notations

| Notation | Symbol | Case | অর্থ |
|----------|--------|------|------|
| **Omega** | Ω(n) | Best Case | সবচেয়ে ভালো অবস্থায় কতটা সময় লাগে |
| **Theta** | Θ(n) | Average Case | গড় অবস্থায় কতটা সময় লাগে |
| **Big O** | O(n) | Worst Case | সবচেয়ে খারাপ অবস্থায় কতটা সময় লাগে |

> 🔑 আমরা সবসময় **Big O (Worst Case)** দিয়ে কাজ করি।

---

### 📏 Rules to Calculate Time Complexity

#### Rule 1: Always take the Worst Case

```cpp
// উদাহরণ — Binary Search
// Array: [5, 7, 2, 9, 4]
// যদি 5 খুঁজি → 1st element এ পাবো → Best Case
// যদি 4 খুঁজি → শেষে পাবো → Worst Case
// আমরা সবসময় Worst Case ধরি
```

#### Rule 2: Ignore the Constant

```cpp
for (int i = 0; i < n; i++) {
    cout << "Hello";
}
// Complexity: O(n)  ✅
// O(2n) বা O(3n) লেখা হয় না — constant ignore করা হয়
```

```cpp
// Loop condition i < n-1 হলেও complexity O(n), O(n-1) না
for (int i = 0; i < n - 1; i++) {
    cout << "Hello";
}
// Complexity: O(n)  ✅
```

> 💡 যখন n → ∞ হয়, তখন constant গুলো কোনো পার্থক্য তৈরি করে না।  
> তাই real life এ এই নিয়ম কাজে লাগে।

---

## ⚡ Types of Time Complexity

### 1️⃣ Constant Complexity — O(1)

```cpp
int n;
cin >> n;          // O(1)
int x = n + 5;    // O(1)
```

> যতই বড় input দাও, সময় একই থাকে।

---

### 2️⃣ Linear Complexity — O(N)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;         // O(1)
    cin >> n;      // O(1)
    for (int i = 1; i <= n; i++) {  // O(n)
        cout << i << " ";
    }
    return 0;      // O(1)
}
// Total Complexity: O(n)
```

**Loop condition variations — সবই O(n):**
```
i <= 2n     → O(n)
i <= n/2    → O(n)
i <= n-5    → O(n)
i <= n+5    → O(n)
```
> constant ignore করা হয় বলে সবগুলোই O(n)।

---

### 3️⃣ Logarithmic Complexity — O(log N)

```cpp
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i *= 2) {  // i = i * 2
        cout << i << endl;
    }
}
```

**কেন O(log N)?**

```
2^0 = 1
2^1 = 2
2^2 = 4
2^3 = 8
...
2^k = n

তাহলে: k = log₂(n)  →  O(log n)
```

> 🔑 **Rule:** যখন loop এর increment/decrement **গুণ (×)** বা **ভাগ (÷)** দিয়ে হয়, তখন complexity **O(log N)**।

---

### 4️⃣ Square Root Complexity — O(√N)

```cpp
for (int i = 0; i <= sqrt(n); i++) {
    cout << i << endl;
}
// i * i = n হলে loop শেষ → O(√n)
```

---

### 5️⃣ Quadratic Complexity — O(N × N)

```cpp
// Nested loop — same size
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << "Hello";
    }
}
// Complexity: O(n × n) = O(n²)
// n = 3 হলে: 3×3 = 9 টা operation
```

```cpp
// Nested loop — different size
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << "Hello";
    }
}
// Complexity: O(n × m)
```

---

### 6️⃣ Linearithmic Complexity — O(N log N)

```cpp
for (int i = 1; i < n; i++) {           // O(n)
    for (int j = 1; j <= n; j *= 2) {   // O(log n)
        cout << "Hello";
    }
}
// Complexity: O(n log n)
```

---

## 📊 Best to Worst Complexity (Ranked)

> ধরো N = 10,000

| Rank | Complexity | Name | Operations (approx) |
|------|-----------|------|---------------------|
| 🥇 1st (Best) | O(1) | Constant | 1 |
| 🥈 2nd | O(log N) | Logarithmic | ~10 |
| 🥉 3rd | O(√N) | Square Root | ~100 |
| 4th | O(N) | Linear | 10,000 |
| 5th | O(N log N) | Linearithmic | ~100,000 |
| 6th (Worst) | O(N²) | Quadratic | 100,000,000 |

```
O(1) < O(log N) < O(√N) < O(N) < O(N log N) < O(N²)
```

> 💡 যত কম operation, তত ভালো solution।

---

## 🧠 How to Estimate Time from Complexity

- Online Judge / Codeforces এ **1 second** এ প্রায় **10⁷ – 10⁸** operation করা যায়
- তাই কোনো solution এর complexity দেখে বুঝতে পারবে সেটা TLE দেবে কিনা

**উদাহরণ — Binary Search:**
- n = 10⁵ input হলে, O(n²) করলে = 10¹⁰ operations → TLE ❌
- O(n log n) করলে = ~1.7 × 10⁶ operations → OK ✅

---

## 💾 Space Complexity

কোনো code চালাতে কতটুকু **memory** লাগবে তার পরিমাপ হলো Space Complexity।

```cpp
int n;
cin >> n;

int a[n];       // Space Complexity: O(n)
int a[n][n];    // Space Complexity: O(n × n) = O(n²)
```

---

## 📝 Quick Summary

| Topic | Key Point |
|-------|-----------|
| Time Complexity | Code কতক্ষণ চলবে তার পরিমাপ |
| Big O | Worst case — আমরা এটাই ব্যবহার করি |
| Rule 1 | সবসময় worst case নাও |
| Rule 2 | Constant ignore করো |
| O(log n) | Loop এ × বা ÷ থাকলে |
| O(n²) | Nested loop হলে |
| Space | Memory ব্যবহারের পরিমাপ |
| TLE | 10⁷–10⁸ এর বেশি operation হলে |

---

*📌 Module 01 শেষ। Next: Module 02 →*