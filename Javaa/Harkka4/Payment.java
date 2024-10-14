public class Payment {
	private double amount;
	private static double total;
	public Payment(final double am_par){
		amount=am_par;
		total=total+am_par;
	}
	public void setAmount(final double am_par){
		amount=am_par;
	}
	public double getAmount(){
		return amount;
	}
	public void printPaymentDetails(){
		System.out.println("maksun summa = " +amount);
		System.out.println("maksun kokonaissumma = " +total);
	}   
	
	public static double printSumma(){
		return total;
	}
		
}