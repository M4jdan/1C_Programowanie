import random
import sys
from enum import Enum
from rich import print
from rich.prompt import Prompt
from rich.console import Console
from rich.table import Table
from rich.panel import Panel
from rich.align import Align
from rich.text import Text
from rich.traceback import install

install()
console = Console()

class Move(Enum):
    ROCK = "rock"
    PAPER = "paper"
    SCISSORS = "scissors"

    @staticmethod
    def from_string(s: str):
        s = s.lower()
        if s in ["rock", "r"]:
            return Move.ROCK
        elif s in ["paper", "p"]:
            return Move.PAPER
        elif s in ["scissors", "s"]:
            return Move.SCISSORS
        else:
            return None

def get_winner(player_move: Move, computer_move: Move) -> str:
    if player_move == computer_move:
        return "draw"
    elif (player_move == Move.ROCK and computer_move == Move.SCISSORS) or \
         (player_move == Move.PAPER and computer_move == Move.ROCK) or \
         (player_move == Move.SCISSORS and computer_move == Move.PAPER):
        return "player"
    else:
        return "computer"

def display_welcome():
    console.clear()
    title = Text("Rock Paper Scissors", style="bold magenta")
    subtitle = Text("by Your Name", style="italic cyan")
    welcome_message = Text("Welcome to Rock Paper Scissors! Type 'rock', 'paper', or 'scissors' to play. Type 'quit' to exit.", style="green")
    panel = Panel(Align.center(Text.assemble(title, "\n", subtitle, "\n\n", welcome_message), vertical="middle"), border_style="bright_blue")
    console.print(panel)
    console.print("\n")

def display_score(player_score: int, computer_score: int): 
    table = Table(title="Score", box=None)
    table.add_column("Player", justify="center", style="bold green")
    table.add_column("Computer", justify="center", style="bold red")
    table.add_row(str(player_score), str(computer_score))
    console.print(table)

def display_round_result(winner: str, player_move: Move, computer_move: Move):
    if winner == "draw":
        result_message = Text(f"Both chose {player_move.value}. It's a draw!", style="yellow")
    elif winner == "player":
        result_message = Text(f"You win! {player_move.value} beats {computer_move.value}.", style="bold green")
    else:
        result_message = Text(f"You lose! {computer_move.value} beats {player_move.value}.", style="bold red")
    console.print(Panel(result_message, border_style="bright_blue"))

def main():
    display_welcome()
    player_score = 0
    computer_score = 0
    while True:
        display_score(player_score, computer_score)
        player_input = Prompt.ask("Enter your move (rock(r)/paper(p)/scissors(s)) or 'quit' to exit").strip().lower()
        if player_input == "quit":
            console.print("\nThanks for playing! Goodbye!", style="bold magenta")
            sys.exit(0)
        player_move = Move.from_string(player_input)
        if not player_move:
            console.print("Invalid move. Please try again.", style="bold red")
            continue
        computer_move = random.choice(list(Move))
        winner = get_winner(player_move, computer_move)
        if winner == "player":
            player_score += 1
        elif winner == "computer":
            computer_score += 1
        display_round_result(winner, player_move, computer_move)
        console.print("\n")

if __name__ == "__main__":
    main()

        
