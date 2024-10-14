class Maksu{

	private double amount;
	public Maksu(final double am_par){
		amount=am_par;
		
	}
	public void setAmount(final double am_par){
		amount=am_par;
	}
	public double getAmount(){
		return amount;
	}
	public void printPaymentDetails(){
		System.out.println("maksun summa = " +amount);
	
	}
}	
	