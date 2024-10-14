class CashPayment extends Payment{
	
	public CashPayment(final double amount){
		super(amount);
	}
	public void printPaymentDetails(){
		System.out.println("kateismaksu");
		System.out.println("maksun summa = "  +getAmount());
	}
}