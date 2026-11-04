*This project has been created as part of the 42 curriculum by [nekreter](https://github.com/kneylo), margagab*

# push_swap

### [Description](#description) · [Content](#content) · [Instructions](#instructions) · [Resources](#resources) · [Testing](#testing)

## Description

This project is part of the cursus at 42 Lausanne. The goal is to sort a list of integers using two stacks (A and B), with the smallest possible number of operations.

The project is coded following the [42 Norm](https://github.com/42School/norminette).

The mandatory part consists of implementing a `push_swap` program that sorts integers using a limited set of operations on two stacks.

The available operations are:

- **Swap:** `sa`, `sb`, `ss` — swap the first two elements of a stack.
- **Push:** `pa`, `pb` — move the first element from one stack to the other.
- **Rotate:** `ra`, `rb`, `rr` — move the first element to the bottom of a stack.
- **Reverse rotate:** `rra`, `rrb`, `rrr` — move the last element to the top of a stack.

The program must output the sequence of operations needed to sort the numbers in ascending order in stack A, leaving stack B empty.

My implementation includes three different sorting algorithms and an adaptive strategy that automatically selects an algorithm depending on the initial disorder of the input.

The available strategies are:

- **Simple:** An algorithm designed for small inputs, using a straightforward approach.
- **Medium:** A chunk-based algorithm that divides the indexed numbers into smaller groups before rebuilding the sorted stack.
- **Complex:** A binary Radix Sort algorithm that sorts indexed numbers using their binary representation.
- **Adaptive:** Automatically chooses between the three algorithms based on the disorder of the input.

The project also includes an optional benchmarking feature (`--bench`) that displays information about the sorting process, including the initial disorder, selected strategy and number of operations.

For more information, refer to the `push_swap` subject available on the 42 Intra.

## Content

I divided the project into several directories, each handling a specific part of the `push_swap` program.

| File / Directory | Description |
| --- | --- |
| `main.c` | Entry point, initializes the stacks, parses arguments and selects the sorting algorithm |
| `include/push_swap.h` | Header file containing structures, enumerations and function prototypes |
| `src/stack/` | Stack creation, deletion, manipulation and utility functions |
| `src/moves/` | Implementation of all stack operations |
| `src/algo/simple.c` | Simple sorting algorithm |
| `src/algo/medium.c` | Chunk-based sorting algorithm |
| `src/algo/complex.c` | Binary Radix Sort implementation |
| `src/algo/adaptive.c` | Selects a sorting algorithm based on input disorder |
| `src/parser/` | Argument parsing, validation and algorithm flag handling |
| `src/disorder.c` | Calculates the initial disorder of the stack |
| `src/print_bench.c` | Displays benchmarking information |
| `libft/` | Custom C library used by the project |
| `Makefile` | Compilation and cleanup rules |

The available sorting strategies are:

| Strategy | Flag | Description |
| --- | --- | --- |
| Simple | `--simple` | Straightforward sorting approach |
| Medium | `--medium` | Chunk-based sorting |
| Complex | `--complex` | Binary Radix Sort |
| Adaptive | `--adaptive` | Automatically selects a strategy based on disorder |

The adaptive strategy uses the following thresholds:

| Input disorder | Selected strategy |
| --- | --- |
| Below 20% | Simple |
| Between 20% and 50% | Medium |
| 50% or above | Complex |

The supported stack operations are:

| Operation | Description |
| --- | --- |
| `sa` | Swap the first two elements of stack A |
| `sb` | Swap the first two elements of stack B |
| `ss` | Perform `sa` and `sb` simultaneously |
| `pa` | Push the first element of B onto A |
| `pb` | Push the first element of A onto B |
| `ra` | Rotate stack A upwards |
| `rb` | Rotate stack B upwards |
| `rr` | Perform `ra` and `rb` simultaneously |
| `rra` | Reverse rotate stack A |
| `rrb` | Reverse rotate stack B |
| `rrr` | Perform `rra` and `rrb` simultaneously |

## Instructions

If you want to use this `push_swap`, you'll need to clone the repository and compile the program.

The Makefile can be used to compile the project and clean the generated files.

- `make` or `make all` — compile the source files and create `push_swap.a`.
- `make exe` — compile the executable `push_swap`.
- `make g` — compile the executable with debug information.
- `make clean` — remove all object files (`.o`).
- `make fclean` — remove object files and the compiled library.
- `make ffclean` — remove object files, libraries and the executable.
- `make re` — clean everything and recompile the project.

Clone and compile the project:

```bash
git clone https://github.com/kneylo/push_swap.git
cd push_swap
make
make exe
```

Run the program with a list of integers:

```bash
./push_swap 4 67 3 87 23
```

You can also pass the numbers as a single string:

```bash
./push_swap "4 67 3 87 23"
```

Choose a specific sorting algorithm:

```bash
./push_swap --simple 4 67 3 87 23
./push_swap --medium 4 67 3 87 23
./push_swap --complex 4 67 3 87 23
./push_swap --adaptive 4 67 3 87 23
```

The adaptive strategy is selected by default, so you don't need to specify a flag.

Enable benchmarking to display additional information about the sorting process:

```bash
./push_swap --bench 4 67 3 87 23
```

You can combine the benchmarking option with a specific strategy:

```bash
./push_swap --bench --complex 4 67 3 87 23
```

The benchmark information is printed to the standard error output, keeping the sorting instructions on standard output.

## Resources

My main sources of information are these links down below, AI was used to create this README:

- [42 Cursus GitBook](https://42-cursus.gitbook.io/42cursus/)
- [Push_swap subject and algorithm explanations](https://github.com/42School)
- [Learn C](https://www.learn-c.org/)
- [Binary Radix Sort](https://en.wikipedia.org/wiki/Radix_sort)
- [Big O notation](https://en.wikipedia.org/wiki/Big_O_notation)
- [Stack Overflow](https://stackoverflow.com/)
- [Basic Markdown Syntax](https://www.markdownguide.org/basic-syntax/)

## Testing

To test this project, you can use the official 42 `checker` program to verify that the sequence of operations correctly sorts the input.

Test each sorting strategy individually and compare the number of operations generated by each algorithm.

Some useful test cases include:

- Already sorted numbers.
- Numbers in reverse order.
- A small list of three or five integers.
- Random lists containing positive and negative integers.
- Large lists containing many different values.
- Inputs containing duplicate numbers.
- Invalid arguments and non-numeric characters.
- Empty arguments and numbers provided as a single string.
- Different sorting strategies using their respective flags.
- Benchmarking with `--bench`.
- Inputs that are already sorted, which should not generate any operations.

Finally, use the benchmark option to compare the selected strategy, initial disorder and total number of operations.

External testers can also be used to check edge cases and verify that the program respects the requirements of the 42 `push_swap` project.

## AI guidelines
We use AI to get a sort of direction when starting the project and for the README.