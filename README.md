# 🥖 Gebu Bakery Bread Ordering System (C Language)

A simple **console-based bread ordering system** written in C.  
It allows customers to order different types of bread (White Loaf, Wheat Loaf, Bun, and Croissant) with optional fillings.  
The program calculates subtotals, total cost, and applies a **special ice cream reward** for large self-pickup orders.  

---

## 📌 Features

✅ Menu display with bread types, prices, and filling options  
✅ Two order modes:
  - **Self-Collect** (eligible for ice cream if total ≥ RM50)
  - **Food Panda** (no ice cream reward)  
✅ Dynamic calculation of subtotals and total amount  
✅ Support for multiple bread types in a single order  
✅ Validates inputs and prevents ordering more fillings than bread quantity  
✅ Timestamp display at the start of the program  

---

## 🗂 Bread Types & Pricing

| Bread Type | Self-Collect Price | Food Panda Price | Filling Price |
|------------|-------------------|------------------|---------------|
| White Loaf | RM 5.00           | RM 5.50          | -             |
| Wheat Loaf | RM 5.50           | RM 6.00          | -             |
| Bun        | RM 2.00           | RM 2.50          | Chocolate RM 1.20, Coconut RM 1.50, Pandan RM 1.00, Chicken RM 1.75, Butter RM 1.00 |
| Croissant  | RM 3.00           | RM 3.50          | Same as Bun   |

**Note:** If total ≥ RM50 and order type is *Self-Collect*, customer gets a free ice cream.

---

## 🛠 Requirements

- A C compiler (e.g., `gcc`, `clang`, or any IDE like Code::Blocks, Dev-C++, or Visual Studio Code with C extension)
- Terminal/command prompt access

---

## ▶️ How to Compile & Run

1. **Clone or download this repository**  
   ```bash
   git clone https://github.com/yourusername/gebu-bakery-ordering.git
   cd gebu-bakery-ordering

2. Compile the program
gcc bread_order.c -o bread_order

3. Run the program
./bread_order

On Windows (MinGW):
gcc bread_order.c -o bread_order.exe
bread_order.exe


📖 Code Structure
Uses if-else and switch-case statements (no arrays or structs for simplicity)

Uses goto labels for re-prompting invalid inputs

Time display handled via <time.h>

Separate subtotal calculation for each bread type


🤝 Authors
Ibnu Ameerul Bin Abdul Halim

Pretty Malthasia Anak Lingeh

Created: 8/11/2021
Last Modified: 27/11/2021


📜 License
This project is for educational purposes.
You can freely use and modify it for learning C programming basics.