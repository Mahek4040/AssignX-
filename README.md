# AssignX-
AssignX is a C-based Smart Assignment Manager that helps students add, organise, and track their assignments and completion status. It features a reward system that gives 10 points per completed assignment, level progression, progress reports, and file-based data storage.
# 📚 AssignX – Smart Assignment Manager

**Organise your assignments. Track your progress. Earn rewards.**

AssignX is a menu-driven assignment management application developed using the C programming language. It is designed to help students organise their academic assignments, track completion status, and stay motivated through a gamified reward system.

The application allows users to add assignments, view their assignment list, mark tasks as completed, earn reward points, and monitor their academic progress through a simple console-based interface.

---

## ✨ Features

### 1. Welcome Screen & Main Menu

AssignX provides a simple and user-friendly menu-driven interface that allows users to navigate between different functionalities.

The main menu includes six options:

1. Add New Assignment
2. View All Assignments
3. Complete Assignment
4. View Points and Level
5. View Progress Report
6. Exit

<img width="617" height="360" alt="Welcome and main menu" src="https://github.com/user-attachments/assets/a1eefabd-6f81-43a6-b078-66eee2fa9a64" />


---

### 2. Add New Assignment

Users can easily add new academic assignments by entering:

- Assignment Title
- Subject Name

Each assignment is automatically assigned a unique ID, making it easier to identify and manage individual tasks.

<img width="547" height="391" alt="Add new assignment&#39;" src="https://github.com/user-attachments/assets/fa14ac36-525f-49aa-9e8d-dbb04bd66412" />


---

### 3. View All Assignments

Users can view their stored assignments along with their respective details.

The assignment list displays:

- Assignment ID
- Assignment Title
- Subject Name
- Completion Status (Pending/Completed)

This helps students keep track of their academic workload in one place.

<img width="442" height="249" alt="View all assignments" src="https://github.com/user-attachments/assets/cb7173df-d5a5-4624-8f64-3f6985fe5ed2" />


---

### 4. Complete Assignment

Once an assignment is finished, users can mark it as completed by entering its corresponding Assignment ID.

Upon successful completion:
- The assignment status is updated.
- The user receives 10 reward points.
- A confirmation message is displayed.

<img width="453" height="246" alt="Complete assignment" src="https://github.com/user-attachments/assets/403a7092-3bd2-41d8-9c06-b401c7c162e1" />


---

### 5. Gamified Reward System 🏆

AssignX introduces gamification to make assignment management more engaging.

The reward mechanism includes:

- **10 Points:** Earned for every successfully completed assignment.
- **Level Progression:** A new level is unlocked after earning 50 points.
- **Progress Tracking:** Users can view their total points and current level.

This encourages students to complete their assignments and maintain consistent academic progress.

<img width="454" height="232" alt="Point system" src="https://github.com/user-attachments/assets/f7a091f6-b94b-4071-bdd8-017ef0b50b3a" />


---

### 6. Progress Report

The progress report provides an overview of the user's assignment completion status.

It displays:

- Total Assignments
- Completed Assignments
- Pending Assignments

This allows students to evaluate their progress and identify remaining tasks.

<img width="401" height="227" alt="Progress report" src="https://github.com/user-attachments/assets/6c0aa799-a928-42e6-8fcb-700621383306" />


## 🛠️ Technologies & Concepts Used

| Technology / Concept | Application |
|---|---|
| C Programming | Core application development |
| Structures | Organising assignment records |
| Arrays | Storing multiple assignments |
| Functions | Modular program organisation |
| Loops | Menu navigation |
| Conditional Statements | Handling user choices and logic |
| File Handling | Saving assignment data |

---

## 🚀 How to Run

### Prerequisites
- GCC Compiler
- Any C-compatible IDE or code editor

### Steps

**1. Clone the repository**

```bash
git clone YOUR_REPOSITORY_URL
```

**2. Navigate to the project directory**

```bash
cd AssignX
```

**3. Compile the program**

```bash
gcc Main.c -o AssignX
```

**4. Execute the application**

On Windows:

```bash
AssignX.exe
```

On Linux:

```bash
./AssignX
```

---

## 📂 Project Structure

```text
AssignX/
│
├── Main.c
├── assignments.dat
├── README.md
│
└── screenshots/
    ├── welcome-screen.png
    ├── add-assignment.png
    ├── view-assignments.png
    ├── complete-assignment.png
    ├── rewards.png
    ├── progress-report.png
    └── file-handling.png
```

*Note: The screenshots folder is optional. The project structure may vary depending on how the repository is organised.*

---

## 🎯 Project Objective

The main objective of AssignX is to provide students with a simple and effective way to manage their academic assignments while encouraging timely completion through a reward-based mechanism.

By combining assignment management, progress monitoring, and gamification, AssignX demonstrates how fundamental C programming concepts can be applied to solve everyday student problems.

---

## 🔮 Future Enhancements

- Assignment deadlines and reminders.
- Subject-wise assignment categorisation.
- Priority-based task management.
- Improved progress analytics.
- Graphical user interface.

---

## 👨‍💻 Developed With C

**AssignX – Making Assignment Management Smarter, Simpler, and More Rewarding.**
