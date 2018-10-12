import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;
public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
	while(scanner.hasNext()){
	calculate(scanner.nextInt(),scanner.nextInt());
	}
       
    }
    public static void calculate(int nn, int cc ){
 	int top = nn;
    int C = cc;
	int numToPrint;
        int firstToPrint;
        int numOfPrimes = 0;
        StringBuilder res = new StringBuilder(top+" "+C +":");
        List<Integer> primes = new ArrayList<>();
       
        for (int i = 1;i<=top ; i++ ){
            if(isPrime(i)){
                primes.add(i);
                numOfPrimes++;
            }
        }
        //System.out.println(primes);
        int mid = (numOfPrimes)/2;
        numToPrint = (numOfPrimes%2)==0? 2*C :2*C-1;
        numToPrint = numToPrint >= numOfPrimes?numOfPrimes:numToPrint;
        firstToPrint = mid - numToPrint/2;
       // System.out.println("numOfPrimes="+numOfPrimes+" "+"mid="+mid+" "+"numToPrint="+numToPrint+" "+"firstToPrint="+firstToPrint);
        for (int i = 0;i<numToPrint ;i++ ){
            res.append(" "+primes.get(firstToPrint+i));
        }
        System.out.println(res);
	System.out.println();	
    }
    public static boolean isPrime(int x) {
    if (x==1) {
        return true;
    } else {
        for(int i=2;i<=Math.sqrt(x);i++) 
            if (x%i==0) return false;          
    }
    return true;
    
    }
}

