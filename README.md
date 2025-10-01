# Constructors and Destructors in C++

## Aim  
To study and implement different types of constructors (default, parameterized, copy), demonstrate defining member functions inside and outside the class, and illustrate destructor behavior when objects go out of scope.  

**Software Used:** MinGW Compiler, Visual Studio Code, or any online C++ compiler.  

---

## Theory  

In C++, **constructors** are special member functions that are automatically invoked when objects are created. They initialize class data members and can be **default, parameterized, or copy constructors**.  

- **Default Constructor:** Takes no arguments and initializes members with fixed values.  
- **Parameterized Constructor:** Accepts parameters to initialize object data members with specific values.  
- **Copy Constructor:** Creates a new object as a copy of an existing object.  

A **destructor** is a special function (preceded by `~`) that is automatically called when an object goes out of scope, used for cleanup tasks.  

Member functions can be defined **inside the class** (inline) or **outside using the scope resolution operator `::`**.  

---

## Implementation  

This section demonstrates constructors, destructors, and member function definitions through six programs.  

---

### Program 1: Default Constructor (`defaultconstructors.cpp`)  

**Explanation:**  
A class `construct` defines two integers and initializes them through a no-argument constructor. When an object is created, the constructor assigns fixed values which are displayed in `main()`.  

**Algorithm:**  
- Start  
- Define a class with members `a` and `b`  
- Implement default constructor: set `a = 10`, `b = 20`  
- In `main()`: create an instance of the class  
- Print `a` and `b`  
- End  

---

### Program 2: Copy Constructor (`copyconstructor.cpp`)  

**Explanation:**  
The `student` class demonstrates how a copy constructor duplicates data from one object into another.  

**Algorithm:**  
- Start  
- Define class `student` with members: roll number, name, fee  
- Implement parameterized constructor to set values  
- Implement copy constructor: `student(student &t)`  
- Define `display()` to print values  
- In `main()`: create one object with parameters, another using copy constructor  
- Call `display()` for both  
- End  

---

### Program 3: Defining Inside Class (`defininginside.cpp`)  

**Explanation:**  
Demonstrates defining constructor and `display()` **inside** the class body. Data is input at construction, and displayed by the in-class function.  

**Algorithm:**  
- Start  
- Define class `student` with members: rollno, name, fee  
- Implement default constructor: prompt user for input  
- Define `display()` inside class to print details  
- In `main()`: create object and call `display()`  
- End  

---

### Program 4: Defining Outside Class (`definingoutside.cpp`)  

**Explanation:**  
Constructor and member functions are **declared inside class** but **defined outside** using the scope resolution operator `::`.  

**Algorithm:**  
- Start  
- Declare class `student` with members and function prototypes  
- Define `student::student()` outside class for input  
- Define `void student::display()` outside class to print details  
- In `main()`: create object and call `display()`  
- End  

---

### Program 5: Parameterized Constructor (`parametrisedconstructor.cpp`)  

**Explanation:**  
The `Product` class uses a constructor with parameters to set up product details.  

**Algorithm:**  
- Start  
- Define class `Product` with members: ProID, Name, Category, Price  
- Implement parameterized constructor to initialize values  
- Implement `display()` to print product details  
- In `main()`: create product object with values and call `display()`  
- End  

---

### Program 6: Destructor Demonstration (`destructor.cpp`)  

**Explanation:**  
A destructor shows automatic cleanup when objects go out of scope. A global counter tracks object creation and destruction.  

**Algorithm:**  
- Start  
- Initialize global `count = 0`  
- Define class with:  
  - Constructor → increment count, print message  
  - Destructor → decrement count, print message  
- In `main()`: create multiple objects to observe lifecycle messages  
- End (destructors run automatically in reverse order)  

---

## Conclusion  

The programs successfully demonstrate:  

- **Default constructor** for fixed initialization  
- **Parameterized constructor** for flexible initialization  
- **Copy constructor** for object duplication  
- **Inside and outside definitions** of member functions  
- **Destructor** for automatic cleanup at the end of scope  

These concepts together explain the **object lifecycle** in C++, showing how constructors initialize objects and destructors handle cleanup.  
