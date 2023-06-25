import java.util.*;
 
public class tictactoe {
   
    static String[] spot;
    static String turn;
   
    static void Board()
    {
        System.out.println("|" + spot[0] + "|"+ spot[1] + "|" + spot[2]+ "|");
        System.out.println(" = = = ");
        System.out.println("|" + spot[3] + "|"+ spot[4] + "|" + spot[5]+ "|");
        System.out.println(" = = = ");
        System.out.println("|" + spot[6] + "|"+ spot[7] + "|" + spot[8]+ "|");
    }
    static String checkWhoWon()
    {
        for (int x=0; x<8; x++) {
            String winCombination = " ";
            switch (x) {
            case 0:
                winCombination=spot[0] + spot[1] + spot[2];
                break;
            case 1:
                winCombination=spot[3] + spot[4] + spot[5];
                break;
            case 2:
                winCombination=spot[6] + spot[7] + spot[8];
                break;
            case 3:
                winCombination=spot[0] + spot[3] + spot[6];
                break;
            case 4:
                winCombination=spot[1] + spot[4] + spot[7];
                break;
            case 5:
                winCombination=spot[2] + spot[5] + spot[8];
                break;
            case 6:
                winCombination=spot[0] + spot[4] + spot[8];
                break;
            case 7:
                winCombination=spot[2] + spot[4] + spot[6];
                break;
            }

        if(winCombination.equals("XXX")) {
                return "X";
            }    
        else if(winCombination.equals("OOO")) {
                return "O";
            }
        }
         
        for (int x=0; x<9; x++) {
            if (Arrays.asList(spot).contains(
                    String.valueOf(x+1))) {
                break;
            }
            else if (x==8) {
                return "draw";
            }
        }

        System.out.println(
            turn + " turn; enter a slot number to place "
            + turn + " in:");
        return null;
    }
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String winner = null;
        turn = "X";
        spot = new String[9]; 
    
        for (int a=0; a<9; a++) {
            spot[a] = String.valueOf(a + 1);
        }
        System.out.println("TicTacToe game");
        Board();
        System.out.println(
            "Type a slot number to place X in:");
 
        while (winner == null) {
            int numInput;

            try {
                numInput = in.nextInt();
                if (!(numInput>0 && numInput<=9)) {
                    System.out.println(
                        "Invalid input; retype slot number:");
                    continue;
                }
            }
            catch (InputMismatchException e) {
                System.out.println(
                    "Invalid input; retype slot number:");
                continue;
            }

            if (spot[numInput - 1].equals(
                    String.valueOf(numInput))) {
                spot[numInput - 1] = turn;
 
                if (turn.equals("X")) {
                    turn = "O";
                }
                else {
                    turn = "X";
                }
 
                Board();
                winner = checkWhoWon();
            }
            else {
                System.out.println(
                    "Slot already taken; retype slot number:");
            }
        }
        if (winner.equalsIgnoreCase("draw")) {
            System.out.println(
                "Its a draw!");
        }
        else{
            System.out.println(
                "Congratulations! " +winner+" won!");
        }
      in.close();
    }
}