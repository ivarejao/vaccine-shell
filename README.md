# Vaccine Shell (VSH)
A custom shell interpreter implementation with signal handling and process management, featuring Zeca, a famous alligator character from Woody Woodpecker cartoons!

###### Operating Systems Assignment | Federal University of Espírito Santo

---

## Project Information

**Authors:**
- Fernando Azevedo Peres
- Igor Mattos dos Santos Varejão
- Luís Eduardo Freire da Câmara

**Date:** May 2021 (2020/2)

---

## Overview

The Vaccine Shell (VSH) is an educational shell interpreter written in C that demonstrates signal handling, process management, and process groups in Unix-like operating systems. The project implements a unique twist: when the shell receives `SIGUSR1` or `SIGUSR2` signals, it displays a humorous ASCII art of Zeca the alligator, with different behaviors depending on whether processes are running in the foreground or background.

### Key Concept: "Vaccination" Metaphor

The project cleverly uses a vaccination metaphor to explain signal handling behavior:

- **Foreground Processes (Perfectly Vaccinated):** When the shell is in the foreground, it has a perfect vaccination against `SIGUSR1` and `SIGUSR2`. Upon receiving these signals, it simply ignores them—no side effects, no messages displayed.

- **Background Processes (Unvaccinated):** When processes run in the background, they have no vaccine protection. Upon receiving `SIGUSR1` or `SIGUSR2`, they display Zeca's message as a "side effect" and the signal propagates through the entire process group, terminating all processes in that group.

---

## Features

- **Custom Shell Interpreter:** Full implementation of a command-line shell with support for foreground and background process execution
- **Signal Handling:** Robust handling of `SIGUSR1` and `SIGUSR2` with context-aware behavior
- **Process Management:** Management of process groups, background jobs, and suspended foreground processes
- **ASCII Art:** Display of Zeca the alligator when appropriate signals are received
- **Process Groups:** Proper implementation of process group control and signal propagation

---

## Project Structure

```
vaccine-shell/
├── Makefile              # Build configuration
├── README.md             # This file
├── imagens/              # ASCII art and reference images
│   ├── Implementacao.png # Final implementation screenshot
│   ├── Recebeu_Sinal.png # Signal reception example
│   └── Zeca.png          # Zeca character reference
└── src/
    ├── main.c            # Entry point
    ├── shell.c           # Shell main loop and command execution
    ├── shell.h           # Shell declarations
    ├── sinais.c          # Signal handling implementation
    ├── sinais.h          # Signal handling declarations
    ├── desenhos.c        # ASCII art drawing functions
    ├── desenhos.h        # ASCII art declarations
    ├── Lista.c           # Linked list implementation for process management
    ├── Lista.h           # Linked list declarations
    └── Corzinha.h        # Color support for terminal output
```

---

## Building and Running

### Requirements
- GCC compiler
- Linux/Unix operating system
- Standard C library

### Compilation

```bash
make
```

This generates an executable named `main`.

### Running the Shell

```bash
./main
# or
make run
```

## Implementation Details

### Signal Handling Architecture

The signal handling is implemented using `sigaction()` to establish robust signal handlers for `SIGUSR1` and `SIGUSR2`. The key distinction is:

1. **Foreground Processes:** Signal handlers simply return without taking action (vaccinated)
2. **Background Processes:** Signal handlers display Zeca and allow the signal to propagate through the process group

### Process Management

The shell maintains a linked list structure (`Lista`) to track:
- Active background process groups
- Suspended foreground processes
- Process group relationships

### Data Structures

- **Lista (Linked List):** Efficient management of process groups and job control
- **Process Groups:** Standard Unix process group structure for signal management

---

## Visual Reference

Below are visual examples of the shell in action:

### Final Implementation
Shows the complete shell interface with multiple processes and job control.

### Signal Reception Example
Demonstrates the behavior when the shell receives SIGUSR1 or SIGUSR2.

### Zeca Character
The iconic alligator character displayed as a side effect when background processes receive signals.

---

## Technical Highlights

- **POSIX Compliance:** Uses standard POSIX signal handling APIs
- **Process Groups:** Proper management of process groups and signal propagation
- **Job Control:** Full support for foreground/background job management
- **Memory Management:** Proper allocation and deallocation of process group structures
- **Robust Error Handling:** Graceful handling of edge cases and system errors

---

## Educational Value

This project serves as an excellent learning resource for:
- Understanding Unix/Linux signal handling mechanisms
- Learning process management and process groups
- Implementing custom shell interpreters
- Working with C and system-level programming
- Process lifecycle and job control concepts

---

## Notes

This is an educational project created for an Operating Systems course. It demonstrates practical implementation of concepts typically taught in university-level systems programming courses.

---

## License

Educational use - Federal University of Espírito Santo