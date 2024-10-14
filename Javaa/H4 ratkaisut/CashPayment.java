class CashPayment extends Payment {

   public CashPayment(final double amount_par){
      super(amount_par);
   }
 
   public void printPaymentDetails(){
      System.out.println("Kateismaksu, maksun maara: " + getAmount());
   }

}