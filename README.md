# Organized

## Introduction

`Organized` is a Epitech project designed to help manage and sort various materials within a virtual laboratory environment. This project is part of my Epitech curriculum and aims to improve my skills in linked lists, sorting algorithms, and shell command implementations in C.

## Features

- Store and manage various hardware materials using linked lists.
- Sort materials based on different criteria.
- Implement a shell interface to interact with the system.
- Error handling for invalid commands and scenarios.

## Installation

Follow these steps to set up `Organized`:

1. **Clone the Repository:**

    ```bash
    git clone https://github.com/jeremyarmijo/organized.git
    ```

2. **Navigate to the Project Directory:**

    ```bash
    cd organized
    ```

3. **Compile the Project:**

    ```bash
    make
    ```

## Usage

Run the `organized` command from the terminal and interact with it using shell commands:

```bash
./organized
```

### Commands

1. **Add Hardware:**

    ```bash
    add <type> <name>
    ```

    Example:

    ```bash
    add WIRE usb
    add ACTUATOR button
    add DEVICE recorder
    ```

2. **Delete Hardware:**

    ```bash
    del <id>
    ```

    Example:

    ```bash
    del 1
    del 0 2
    ```

3. **Display Contents:**

    ```bash
    disp
    ```

4. **Sort Materials:**

    ```bash
    sort <tag> [-r]
    ```

    Example:

    ```bash
    sort NAME
    sort NAME -r
    sort TYPE -r NAME ID -r
    ```

### Example Session

```bash
./organized
Workshop » add WIRE usb
Workshop » add ACTUATOR button
Workshop » add DEVICE recorder
Workshop » disp
DEVICE n°2 - “recorder”
ACTUATOR n°1 - “button”
WIRE n°0 - “usb”
Workshop » del 1
ACTUATOR n°1 - “button” deleted.
Workshop » disp
DEVICE n°2 - “recorder”
WIRE n°0 - “usb”
Workshop » sort NAME
Workshop » disp
ACTUATOR n°1 - “button”
DEVICE n°2 - “recorder”
WIRE n°0 - “usb”
Workshop » sort NAME -r
Workshop » disp
WIRE n°0 - “usb”
DEVICE n°2 - “recorder”
ACTUATOR n°1 - “button”
Workshop » exit
```
