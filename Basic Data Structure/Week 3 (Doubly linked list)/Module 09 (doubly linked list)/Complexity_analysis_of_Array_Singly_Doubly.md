# 📊 Data Structure Operations - Time Complexity Comparison

> Comparison of all operation's complexity between **Array**, **Singly Linked List** and **Doubly Linked List**

---

## 🔢 Time Complexity Table

| Operation              | Array  | Singly Linked List | Doubly Linked List |
|------------------------|--------|--------------------|--------------------|
| Insert at Head         | O(N)   | O(1)               | O(1)               |
| Insert at Tail         | O(1)   | O(1)               | O(1)               |
| Insert at any Position | O(N)   | O(N)               | O(N)               |
| Delete at Head         | O(N)   | O(1)               | O(1)               |
| Delete at Tail         | O(1)   | O(N)               | O(1)               |
| Delete at any Position | O(N)   | O(N)               | O(N)               |

---

## 📝 Key Observations

- **Insert at Head** → Array is slow `O(N)` because shifting is needed; both linked lists are `O(1)`
- **Insert at Tail** → All three are `O(1)` (assuming tail pointer is maintained)
- **Delete at Tail** → Doubly is faster `O(1)` than Singly `O(N)` because of the `prev` pointer
- **Delete at Head** → Both linked lists win with `O(1)` vs Array's `O(N)`
- **Any Position ops** → All three require `O(N)` traversal

---

## 🧠 Quick Summary

| Structure          | Best Use Case                                      |
|--------------------|----------------------------------------------------|
| **Array**          | Random access by index, cache-friendly operations  |
| **Singly LL**      | Simple list, memory-efficient, frequent head ops   |
| **Doubly LL**      | Bidirectional traversal, frequent tail/head delete |

---

> 💡 **Note:** `O(1)` = Constant time | `O(N)` = Linear time (depends on size)