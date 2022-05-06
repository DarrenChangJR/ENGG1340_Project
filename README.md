# ENGG1340_Project

* Identification of the team members.
  1. Aidan Wong Weng Seng
  2. Darren Chang Juin Rong

* A description of your game and introduce the game rules/instructions.
  Quest/Story game. (Theme: Medieval)
  * Story: an aspiring young character who wants to join the Knights of the Round Table. He/She will then need to complete quests to gain experience to be competent enough to be a part of the holy Knights of the Round Table.
    Tasks:
    - Community service ("Blessings of the Church" for participation in community service, stats improved e.g., higher crit, attack, and health).
    - Fight bandits (Different levels of attributes, When character reaches higher level, he/she will face higher level enemies) (3 level: Low, Middle, High)
    - Final fight with traitorous Mordred to save King Arthur.
  * User Commands
    - Yes/No
    - Attack/Flee
  * Rules
    - Basic inputs using keyboard, type either of the 2 given options whenever prompted.
    - Beware, death results in program termination, so choose your actions carefully (TIP: good things happen to helpful people in this game).
* A list of features that you have implemented, and explain how each coding element from 1 to 5 listed under the coding requirements aforementioned have supported your features.
  1. Generation of random game sets or events - Random events (e.g., 5 Community service function and only select 3 for user & random crit chances)
  2. Data structures for storing game status - Use Character class to instantiate 'user' object, and Bandit class to instantiate 'bandit' objects, with respective unique stats.
  3. Dynamic memory management - Used to store the user items as a dynamic array (vector).
  4. File input/output - Used to print Scenes and character figures.
  5. Program codes in multiple files - Create 3 tasks in different files (e.g., Character file, bandits files, fight file, input file and printer file).
* A list of non-standard C/C++ libraries.
  - None, all includes are from standard libraries
* Compilation and execution instructions.
  - `make main`
  - `./main`
