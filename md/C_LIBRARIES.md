# ✅ **I. STANDARD C LIBRARIES (non-trivial & widely used)**

These come from the ISO C standard (C89/C99/C11/C18). I’m skipping trivial ones like `<iso646.h>`.

## **1. `<stdio.h>` — Input/Output**

* `fgets`, `fread`, `fwrite`, `fopen`, `printf`, buffering
* Non-trivial because: buffering, file modes, formatting, undefined behaviors

## **2. `<stdlib.h>` — Memory + Utilities**

* `malloc`, `free`, `realloc`, `qsort`, `bsearch`, `rand`
* Non-trivial: dynamic memory management, reallocation pitfalls, comparator functions

## **3. `<string.h>` — String & memory operations**

* `memcpy`, `memmove`, `strchr`, `strtok`, `strncmp`
* Non-trivial: undefined behavior on overlapping memory, `strtok` pitfalls

## **4. `<ctype.h>` — Character classification**

* `isalpha`, `isdigit`, `tolower`
* Non-trivial: locale-dependent behavior

## **5. `<math.h>` — Math functions**

* `sin`, `sqrt`, `pow`, `fabs`, `isnan`, `fpclassify`
* Non-trivial: FP precision, error handling, domain/range issues

## **6. `<time.h>` — Time & date**

* `time`, `difftime`, `clock`, `strftime`
* Non-trivial: time zones, leap seconds, platform differences

## **7. `<errno.h>` — Error codes**

* `errno`, error handling for system I/O & math
* Non-trivial: thread-local `errno`, side effects, stateful behavior

## **8. `<setjmp.h>` — Nonlocal jumps**

* `setjmp`, `longjmp`
* Non-trivial: used for error recovery, interacts poorly with stack unwinding

## **9. `<signal.h>` — Signal handling**

* `signal`, `raise`
* Non-trivial: async-signal safety, undefined behavior in handlers

## **10. `<pthread.h>` (POSIX) — Threads**

*(Not ISO C but essentially “standard” on Unix)*

* `pthread_create`, mutexes, condition variables
* Non-trivial: memory ordering, deadlocks, race conditions

## **11. `<stdint.h>` & `<inttypes.h>`**

* Fixed-width integers: `uint32_t`, format macros like `PRIu64`
* Non-trivial: portability, type widths, overflows

---

# ✅ **II. NON-STANDARD BUT VERY COMMON LIBRARIES**

These are the libraries real-world C developers use constantly.
I’ll categorize them by domain.

---

# 🔧 **A. System / POSIX libraries**

## **1. `<unistd.h>` — Core Unix API**

* `read`, `write`, `fork`, `pipe`, `exec`
* Non-trivial: blocking I/O, file descriptor lifecycle, process control

## **2. `<sys/socket.h>` + networking headers**

* sockets, TCP/UDP, `bind`, `connect`, `accept`
* Non-trivial: blocking vs non-blocking, partial writes, timeouts

## **3. `<sys/stat.h>`**

* File metadata, permissions
* Non-trivial: cross-platform permissions differences

## **4. `<fcntl.h>`**

* File descriptor flags (`O_NONBLOCK`, `O_CREAT`)
* Non-trivial: atomicity, locking, flags interactions

## **5. `<poll.h>` / `<sys/select.h>` / `epoll.h`**

* Multiplexing I/O
* Non-trivial: readiness vs completion, edge-triggered behavior, scaling problems

## **6. `<dlfcn.h>`**

* Runtime dynamic loading (`dlopen`, `dlsym`)
* Non-trivial: symbol visibility, RTLD flags, memory handling

---

# 🔢 **B. Cryptography Libraries**

These are complex, security-critical, and widely used:

## **1. OpenSSL (libcrypto, libssl)**

* TLS, hashing, signatures, ciphers
* Non-trivial: initialization, context management, error handling, version differences

## **2. libsodium**

* Modern crypto (secretbox, key exchange, signatures)
* Non-trivial but much simpler than OpenSSL

## **3. mbedTLS**

* Embedded TLS
* Non-trivial: configuration, build system, portability

---

# 📚 **C. Parsing & Serialization Libraries**

## **1. libxml2**

* XML DOM + SAX parser
* Non-trivial: memory management, tree traversal, encoding issues

## **2. json-c**, **jansson**

* JSON parsing
* Non-trivial: reference counting, object lifetime

## **3. protobuf-c / flatbuffers**

* Binary serialization
* Non-trivial: schema evolution, memory ownership

---

# 🧮 **D. Data Structures & Utilities**

C has no standard containers, so libraries fill the gap.

## **1. GLib**

* Hash tables, balanced trees, arrays, string utilities, memory pools
* Non-trivial: reference counting, ownership rules, error domains

## **2. uthash / utarray / utstring**

* Header-only hash tables & arrays
* Non-trivial: macros, type safety, memory management

## **3. sds (Simple Dynamic Strings)**

* Used in Redis
* Non-trivial: embedded metadata, over-allocation strategy

---

# 📡 **E. Networking Libraries**

## **1. libcurl**

* HTTP(S), FTP, sockets, async multi-interface
* Non-trivial: multi handles, callbacks, cleanup

## **2. libevent / libev / libuv**

* Event loops, I/O watchers, timers
* Non-trivial: concurrency models, callback lifetimes

---

# 🗄️ **F. Database Libraries**

## **1. SQLite (C API)**

* SQL engine in a library
* Non-trivial: statement lifecycle, concurrency, journaling modes

## **2. PostgreSQL libpq**

* Networked DB client
* Non-trivial: asynchronous mode, memory ownership

---

# 🖼️ **G. Graphics / Multimedia**

## **1. SDL2**

* Windowing, input, audio, rendering
* Non-trivial: lifecycle, event loop, platform differences

## **2. OpenGL (via `<GL/gl.h>`)**

* Hardware-accelerated graphics
* Non-trivial: state machine design, modern shader pipeline

## **3. FFmpeg libraries (libavcodec, libavformat)**

* Video/audio encoding, decoding
* Non-trivial: packet/stream lifetimes, timebases, codecs

---

# ⚙️ **H. Build & Utility libraries**

## **1. PCRE / PCRE2**

* Regular expressions
* Non-trivial: UTF-8, capture groups, memory

## **2. zlib**

* Compression
* Non-trivial: streaming API, buffers

## **3. libarchive**

* tar/zip/etc extraction/creation
* Non-trivial: memory ownership, readers/writers

---

# 🧱 **I. Embedded / Low-Level Utilities**

## **1. CMSIS / HAL (for ARM microcontrollers)**

* Startup code, registers, drivers
* Non-trivial: concurrency, interrupts, timing

## **2. lwIP**

* TCP/IP stack for embedded devices
* Non-trivial: threading model, buffers, zero-copy

---

# 📌 **Summary Mind-Map**

Here’s a compact mental map of the most important non-trivial libraries:

```
Standard C:
    stdio, stdlib, string, time, math
    pthreads (POSIX)
    errno, setjmp, signal

POSIX:
    unistd, sockets, poll/epoll, stat, fcntl, dlopen

Crypto:
    OpenSSL, libsodium, mbedTLS

Parsing:
    libxml2, json-c, protobuf

Data structures:
    GLib, uthash, sds

Networking:
    libcurl, libevent/libuv

Databases:
    SQLite, PostgreSQL (libpq)

Multimedia:
    SDL, OpenGL, FFmpeg

Compression & files:
    zlib, libarchive
```

This list covers **the vast majority of what professional C developers work with**.
