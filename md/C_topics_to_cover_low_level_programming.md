# ✅ **THE ULTIMATE C LOW-LEVEL MASTERY CHECKLIST**

## **1. Memory & Data Layout**

You understand:

* **Stack vs Heap** (when each is used, what lives where)
* **How a function call uses the stack**
  (stack frame, return address, local vars)
* **Pointers** (single, double, void*, function pointers)
* **Pointer arithmetic** (why adding 1 does not add 1 byte)
* **Array vs pointer differences**
* **How structs are laid out in memory**
* **Alignment & padding** (why `sizeof(struct)` is often bigger than you think)
* **Memory fragmentation**
* **What a segmentation fault *really* means**

If you can *predict* memory layout of a struct, you're on the right track.

---

## **2. Manual Memory Management**

You fully understand:

* `malloc`, `calloc`, `realloc`, `free`
* What happens if you forget `free`
* What happens if you double-free
* What happens if you `free` memory you didn't allocate
* **Lifetime**: when memory becomes invalid
* **Dangling pointers** vs null pointers
* **Buffer overflows** and why they’re dangerous
* **Valgrind basics** (or similar memory debugging tools)

If you can read code and spot memory bugs, you’re past beginner level.

---

## **3. How C Maps to the Machine**

You understand:

* How C expressions turn into assembly-like operations
* What the compiler does *not* protect you from
* What “undefined behavior” is (and why it exists)
* Endianness (big vs little)
* The cost of function calls
* The cost of copying structs vs passing pointers
* How the CPU reads and writes memory (load/store model)

If you can look at C code and predict its approximate assembly, you’re learning low-level correctly.

---

## **4. Compile-Time & Build Process**

You understand:

* How a **C compiler** works (preprocessing → compilation → assembly → linking)
* Header files and the `.h` / `.c` split
* Static vs dynamic libraries (`.a` vs `.so` / `.dll`)
* The meaning of linker errors
* How `#include` actually works

If you understand how the **preprocessor** works (`#define`, macros), you’re above most beginners.

---

## **5. C’s Type System (low-level view)**

You know:

* `char`, `int`, `long`, etc. and their typical sizes
* Signed vs unsigned issues
* Casts (explicit + implicit)
* Why C strings are null-terminated
* Function pointers (this is key!)

If you can explain why `char *` is used for strings and what happens during a cast, you’re thinking low-level.

---

## **6. OS-Level Understanding**

You should at least know the basics of:

* File I/O using `open`, `read`, `write`, `close`
* What a file descriptor actually *is*
* How syscalls work (you don’t need mastery yet)
* How processes and memory mapping relate to your program

You don’t need to be an OS dev — just enough to understand the relationship between C and the OS.

---

## **7. Undefined Behavior, Safety, and Pitfalls**

You can identify and explain:

* Typical sources of UB (e.g., out of bounds, uninitialized vars, invalid pointers)
* Sequence points (not required to master, but useful)
* Why C lets you shoot yourself in the foot **on purpose**

Being aware of pitfalls is a huge part of “real” C learning.

---

# ⭐ **If you can do these, you are no longer a beginner.**

You are doing *systems-level* C, not “toy C.”

---

# 🔥 Bonus Level (true low-level mastery)

These are optional but highly valuable:

* Implement your own `malloc` (simple version)
* Write a tiny programming language interpreter in C
* Parse ELF/PE files (executables)
* Write a small shell (command interpreter)
* Use `gdb` to watch the stack change during function calls
* Understand calling conventions (cdecl, sysv, etc.)

If you get even halfway through these, you’re well beyond “I know C.”
