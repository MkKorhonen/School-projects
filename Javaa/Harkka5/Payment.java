public abstract class Payment {
	public double amount;
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
	
	public abstract void printPaymentDetails();
		
		
	
	
	public static double printSumma(){
		return total;
	}
		
}
