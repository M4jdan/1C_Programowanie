import tkinter as tk
import random

class Move:
    ROCK = "rock"
    PAPER = "paper"
    SCISSORS = "scissors"
    ALL = [ROCK, PAPER, SCISSORS]

# Zmienne globalne do śledzenia wyników
graczy_wins = 0
komputer_wins = 0
remisy = 0

def get_winner(player, computer):
    """
    Determines the winner of a Rock-Paper-Scissors game round.

    Args:
        player (str): The player's move. Should be one of Move.ROCK, Move.PAPER, or Move.SCISSORS.
        computer (str): The computer's move. Should be one of Move.ROCK, Move.PAPER, or Move.SCISSORS.

    Returns:
        str: A message indicating the result of the round:
            - "Remis!" if it's a tie,
            - "Wygrałeś!" if the player wins,
            - "Komputer wygrał!" if the computer wins.
    """
    if player == computer:
        return "Remis!"
    elif (player == Move.ROCK and computer == Move.SCISSORS) or \
         (player == Move.PAPER and computer == Move.ROCK) or \
         (player == Move.SCISSORS and computer == Move.PAPER):
        return "Wygrałeś!"
    else:
        return "Komputer wygrał!"

def update_scoreboard():
    scoreboard_label.config(
        text=f"Wyniki:\nGracz: {graczy_wins}  Komputer: {komputer_wins}  Remisy: {remisy}",
        font=("Arial", 12)
    )

def play(player_move):
    global graczy_wins, komputer_wins, remisy
    computer_move = random.choice(Move.ALL)
    result = get_winner(player_move, computer_move)
    if result == "Wygrałeś!":
        graczy_wins += 1
    elif result == "Komputer wygrał!":
        komputer_wins += 1
    else:
        remisy += 1
    result_label.config(text=f"Twój wybór: {player_move}\nKomputer: {computer_move}\n{result}")
    update_scoreboard()

def reset_game():
    global graczy_wins, komputer_wins, remisy
    graczy_wins = 0
    komputer_wins = 0
    remisy = 0
    result_label.config(text="")
    update_scoreboard()

def exit_game():
    root.destroy()

root = tk.Tk()
root.title("Rock Paper Scissors")

frame = tk.Frame(root, padx=20, pady=20)
frame.pack()

label = tk.Label(frame, text="Wybierz swój ruch:", font=("Arial", 14))
label.pack(pady=10)

buttons_frame = tk.Frame(frame)
buttons_frame.pack()

for move in Move.ALL:
    btn = tk.Button(buttons_frame, text=move.capitalize(), width=10, font=("Arial", 12),
                    command=lambda m=move: play(m))
    btn.pack(side=tk.LEFT, padx=5)

result_label = tk.Label(frame, text="", font=("Arial", 12), pady=20)
result_label.pack()

scoreboard_label = tk.Label(frame, text="Wyniki:\nGracz: 0  Komputer: 0  Remisy: 0", font=("Arial", 12, "bold"), pady=10)
scoreboard_label.pack()

# Dodanie przycisków resetu i wyjścia
actions_frame = tk.Frame(frame)
actions_frame.pack(pady=10)

reset_btn = tk.Button(actions_frame, text="Resetuj grę", width=12, font=("Arial", 11), command=reset_game)
reset_btn.pack(side=tk.LEFT, padx=5)

exit_btn = tk.Button(actions_frame, text="Wyjdź", width=12, font=("Arial", 11), command=exit_game)
exit_btn.pack(side=tk.LEFT, padx=5)

root.mainloop()