# Mini-Election-System
This project implements a simple voting system in C. Students can cast votes for predefined candidates by entering their student ID. The system validates the ID, checks if the student has already voted, and records the vote. 
## Election Voting System

### Overview
This project implements a simple voting system in C, allowing students to cast their votes for a set of predefined candidates. The system features an admin panel where the voting statistics can be viewed and the leading candidate can be determined.

### Features

1. **Casting Votes**: 
   - Students can cast their vote by entering their student ID.
   - The system checks if the student ID is valid and if the student has already voted.
   - Students can choose from four candidates or select "None of These".
   - Votes are recorded and counted.

2. **Admin Panel**:
   - The admin panel is protected by an ID and password.
   - Admins can view the current vote count for each candidate.
   - Admins can determine the leading candidate based on the votes cast.
   - The system detects a no-win situation where there is a tie or no votes.

### Code Breakdown

1. **Main Function**:
   - Displays the main menu with options to cast a vote or access the admin panel.
   - Calls the appropriate function based on user choice.

2. **castVote Function**:
   - Prompts the student to enter their ID.
   - Checks if the student ID is valid and if the student has already voted.
   - Displays the candidate options and records the student's vote.
   - Increments the vote count for the selected candidate or marks the vote as spoiled.

3. **votesCount Function**:
   - Displays the current vote count for each candidate and the number of spoiled votes.

4. **getLeadingCandidate Function**:
   - Determines and displays the candidate with the most votes.
   - Handles tie situations where there is no clear leading candidate.

5. **admin Function**:
   - Prompts the admin to enter their ID and password.
   - Provides options to view vote counts or determine the leading candidate.
   - Validates admin credentials before granting access.

### Instructions to Run

1. **Compile the Code**:
   - Use a C compiler (e.g., GCC) to compile the code.
   - `gcc -o voting_system voting_system.c`

2. **Run the Program**:
   - Execute the compiled program.
   - `./voting_system`

3. **Main Menu**:
   - Choose "1" to cast a vote. Enter a valid student ID and select a candidate.
   - Choose "2" to access the admin panel. Enter the admin ID and password to view voting statistics or find the leading candidate.

### Example Usage

- A student enters their ID and casts their vote for a candidate.
- The admin logs in to view the current vote counts and determine the leading candidate.

### Improvements

- Enhance the student ID validation mechanism.
- Implement a more secure and robust admin authentication system.
- Add functionality to reset the votes or add more candidates dynamically.

This project demonstrates a basic voting system with key functionalities, making it a good starting point for more advanced election systems.
