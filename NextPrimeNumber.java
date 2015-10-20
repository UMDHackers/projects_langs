import java.util.Scanner;

public class NextPrimeNumber {
	
public static boolean prime_test(int prime){
	if(prime % 2 == 0) {
		return false;
	}
	for(int i = 2; i <= (int)Math.sqrt(prime); i++) {
		if(((int)(prime%i)) == 0) {
			return false;
		}
	}
	return true;
}

	public static void main(String[] args) {
		int add = 0;
		Scanner scan = new Scanner(System.in);
		// TODO Auto-generated method stub
		String cont = "";
		int prime = 1;
		boolean flag = false;
		while (cont.equals("")) {
			System.out.println("Continue? 0 to quit");
			cont = scan.nextLine();
			if(cont.equals("0")) {
				break;
			}
			while(true) {
				flag = prime_test(prime);
				if(flag) {
					System.out.println(prime);
					prime++;
					break;
					
				} else {
					prime++;
				}
			}
		}
	}

}
