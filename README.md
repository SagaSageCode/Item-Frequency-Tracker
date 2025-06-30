# Item-Frequency-Tracker

-----------------
 Project Summary
-----------------
This project implements a C++ program designed to track and analyze item frequencies from a store’s purchase record. The goal was to help a fictional store, the Corner Grocer, optimize their product layout based on customer purchase habits. The program reads from an input file of purchased items, counts how often each item appears, and provides a user-friendly menu with options to:

1) Look up how often a specific item was purchased
2) Print all items with their frequencies
3) Print a histogram representing item frequencies
4) Exit the program

Additionally, the program backs up frequency data to a file named frequency.dat.

-----------------
 What I Did Well
-----------------
1) Designed a modular program using functions for each menu option.
2) Used maps (std::map) efficiently to store and access frequency data in constant time.
3) Implemented clean and readable C++ code with comments and consistent naming conventions.
4) Included file input/output operations and backup functionality.
5) Created a user-friendly menu system and handled data persistence.

---------------
 Improvements?
---------------
1) I could add input validation to ensure users don’t enter invalid menu options or non-existent items.
2) The code could be enhanced with error handling for file operations to catch and report more specific issues.
3) Using OOP design patterns (e.g., a GroceryTracker class) would improve encapsulation and adaptability for future features.

-------------------------------------
 Challenges and How I Overcame Them?
-------------------------------------
1) Handling file input/output correctly was initially tricky, especially managing the frequency backup file (frequency.dat). I resolved this by looking at the C++ fstream documentation and using visual debugging tools.
2) Structuring the program to standard required some planning to keep each function focused on a single task. Breaking the logic into specific responsibilities helped me maintain simplicity.

---------------------
 Transferable Skills
---------------------
1) File handling, map manipulation, and menu-driven program structure are all highly transferable to other C++ and general programming tasks.
2) Modular thinking and writing reusable functions will help in all future software design projects.
3) Debugging, using GitHub, and documenting work through README files will be useful in both academics and professional development.

-------------
 Maintenance
-------------
1) Named functions clearly.
2) Inserted in-line comments.
3) Named Variables and constants with consistant naming conventions.
4) The backup system will help future input source changes.
