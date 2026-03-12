Algorithm: Student Grade Sheet Management (Step-by-Step)

Step 1: Start the program.

Step 2: Define a structure Student with the following members:

roll → integer, stores roll number

name → string/character array, stores student name

m1, m2, m3 → integers, stores marks of three subjects

total → integer, stores total marks

percentage → float, stores percentage

grade → char, stores grade

Step 3: Define a function calculate that takes a pointer to a Student structure:

Step 3.1: Compute total as the sum of m1, m2, and m3.

Step 3.2: Compute percentage as total / 3.0.

Step 3.3: Assign grade based on percentage:

If percentage >= 90 → grade = 'A'

Else if percentage >= 75 → grade = 'B'

Else if percentage >= 60 → grade = 'C'

Else if percentage >= 40 → grade = 'D'

Else → grade = 'F'

Step 4: Initialize an array of Student structures, e.g., s[50], and a counter n = 0.

Step 5: Start an infinite loop to display the menu:

Step 5.1: Display menu options:

Add Student

Display Grade Sheet

Exit

Step 5.2: Prompt user to enter choice.

Step 6: Process the menu choice using switch-case:

Step 6.1: Case 1 – Add Student

Step 6.1.1: Input roll number.

Step 6.1.2: Input name (use scanf(" %[^\n]", name) to read full name).

Step 6.1.3: Input marks m1, m2, m3.

Step 6.1.4: Call calculate(&s[n]) to compute total, percentage, and grade.

Step 6.1.5: Increment n by 1.

Step 6.1.6: Print “Student record added successfully!”

Step 6.2: Case 2 – Display Grade Sheet

Step 6.2.1: If n == 0 → print “No records found.”

Step 6.2.2: Else → print table header: Roll, Name, Total, Percent, Grade.

Step 6.2.3: Loop through all students from i = 0 to i < n:

Print roll, name, total, percentage, grade of each student.

Step 6.3: Case 3 – Exit

Step 6.3.1: Print “Exiting program…”

Step 6.3.2: Terminate the program.

Step 6.4: Default case

Print “Invalid choice! Try again.”

Step 7: End of loop.

Step 8: End program.
