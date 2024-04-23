

# Yahtzee Game

---

**Title:** Yahtzee Game

**Description:** This project is a simple console-based Yahtzee game written in C. Players roll dice and choose strategies to compete against the computer to score the highest points based on classic Yahtzee rules.

#### Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

**Prerequisites:**
- GCC Compiler
- Terminal or Command Prompt

**Compiling the Game:**

To compile the game, open your terminal or command prompt and run the following command:

```
gcc -o yahtzee yahtzee.c -lm
```

This command compiles the `yahtzee.c` file and creates an executable named `yahtzee`, linking the math library due to the use of mathematical functions.

**Running the Game:**

Once compiled, you can run the game using:

```
./yahtzee
```

#### How to Play

**Game Overview:**

Yahtzee is a dice game where the objective is to score points by rolling five dice to make certain combinations. The dice can be rolled up to three times in a turn to try to make one of the thirteen possible scoring combinations. Each combination must be done once, and the game ends once all combinations have been used.

**Scoring Options:**

1. **Chance:** Sum of all dice.
2. **Large Straight:** Sequence of five consecutive numbers (40 points).
3. **Yahtzee:** All dice showing the same number (50 points).
4. **Three of a Kind:** Three dice showing the same number (Sum of those three dice).
5. **Fives:** Any dice showing number five (5 points per five).
6. **Sixes:** Any dice showing number six (6 points per six).

**Playing the Game:**

- The game starts by determining who goes first with a roll of the dice.
- Players then take turns rolling the dice and selecting which scoring category to use.
- Each round allows the player to roll the dice up to three times to achieve the desired combination.
- After each round, scores are calculated based on the selected categories, and the total score is updated.

#### Game Rules

1. Each player's turn consists of rolling the dice up to three times in hope of making a high-scoring combination.
2. Each scoring combination can only be used once per game, so choosing the best time to use each category is key to maximizing your score.
3. The game consists of 13 rounds (one for each category).

#### Built With

- [GCC](https://gcc.gnu.org/) - The GNU Compiler Collection

#### Authors

- **Your Name** - Sara Hamid


#### Acknowledgments

- Collaborated with my friend Bilal for ideas

---

