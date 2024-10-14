class Payment {

   private double amount;
   private static double total = 0.0;
   
   public Payment(final double amount_par){
      this.amount = amount_par;
      this.total = this.total + amount_par;
   }
   
   public void setAmount(final double amount_par){
      this.total = this.total - amount;  //korjataan maksua
      this.amount = amount_par;
      
      this.total = this.total + this.amount;
   }
   
   public double getAmount(){
      return this.amount;
   }
   
   public void printPaymentDetails(){
      System.out.println("Maksun maara: "+ this.amount);
   }
   
   public static double getTotal(){
      return total;
   }

}