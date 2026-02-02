# Vaccine Shell (VSH)
A custom shell interpreter implementation with signal handling and process management, featuring Zeca, a famous alligator character from Woody Woodpecker cartoons!

###### Operating Systems Assignment | Federal University of Espírito Santo

---

## Project Information

**Authors:**
- Igor Mattos dos Santos Varejão
- Fernando Azevedo Peres
- Luís Eduardo Freire da Câmara

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

## Visual Reference

Below are visual examples of the shell in action:

### Final Implementation
[](images/normal_example.png)
Shows the complete shell interface with multiple processes and job control.

### Signal Reception Example
[](images/signal_receiver.png)
Demonstrates the behavior when the shell receives SIGUSR1 or SIGUSR2, when the iconic alligator character is displayed.

## Notes

This is an educational project created for an Operating Systems course. It demonstrates practical implementation of concepts typically taught in university-level systems programming courses.