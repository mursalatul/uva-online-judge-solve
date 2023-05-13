import java.util.Scanner;

// rename the file as "Main.java" before executing the program

class Main {
    static double cutPercentage(double loan, double percentage) {
        return loan - (loan * percentage);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int loanDuration, depreciations;
        double downPay, loanA, loanB, mPay;
        double[] rates = new double[101];

        while (true) {
            loanDuration = input.nextInt();
            downPay = input.nextDouble();
            loanA = input.nextDouble();
            mPay = loanA / loanDuration;
            loanB = loanA;
            depreciations = input.nextInt();
            

            if (loanDuration < 0) {
                break;
            }

            for (int dep = depreciations; dep > 0; dep--) {
                int m = input.nextInt();
                double r = input.nextDouble();
                
                for (int i = m; i < 101; i++) {
                    rates[i] = r;
                }
            }

            // handleing month zero
            loanA += downPay;
            loanA = cutPercentage(loanA, rates[0]);
            
            // regular months
            int month = 0;
            int i = 1;
            while (loanA < loanB) {
                month++;
                loanA = cutPercentage(loanA, rates[i++]);
                loanB -= mPay;
            }
            if (month == 1) {
                System.out.println(month + " month");
            } else {
                System.out.println(month + " months");
            }
        }

        input.close();
    }
}