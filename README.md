# C Log Analyzer

This is a small C project I created as a refresher in file handling, string processing, functions, structures, and basic error handling.

The program reads a text log file and counts entries marked as:

- `INFO`
- `WARNING`
- `ERROR`
- Other/unclassified lines

## Why I built it

My earlier software and network engineering work included C, SQL/PLSQL, UNIX, testing, troubleshooting, and technical documentation. I am returning to more hands-on programming, and I wanted my first GitHub project to be something small enough to understand completely while still using practical C fundamentals.

## What the program demonstrates

- Reading a file with `fopen()` and `fgets()`
- Checking command-line arguments
- Searching strings with `strstr()`
- Using a `struct` to organize data
- Separating logic into functions
- Handling file-open errors
- Printing a simple summary

## Files

- `main.c` - program source code
- `sample.log` - sample input file
- `README.md` - project notes and instructions

## Compile

Using GCC:

```bash
gcc -Wall -Wextra -std=c11 -o log_analyzer main.c
```

## Run

Using the included sample file:

```bash
./log_analyzer sample.log
```

You can also pass another log file:

```bash
./log_analyzer your_file.log
```

## Example output

```text
Log summary for: sample.log
-----------------------------
Total lines : 10
INFO        : 5
WARNING     : 2
ERROR       : 2
Other       : 1
```

## Next improvements

A few things I may add as I continue working on the project:

- Count entries by date
- Make log levels case-insensitive
- Report the percentage of errors and warnings
- Export the summary to a text or CSV file
- Add automated tests for the parsing logic
