import java.io.*;
import java.util.Scanner;

public class H4_T1_Main {
   
   private static final Scanner sc = new Scanner(System.in);
   
   public static void main(String [] args){
      
      double maksu;
      String kortinNumero;
      
      do {
         System.out.print("Anna kateismaksun maara > ");
         maksu = sc.nextDouble();
         sc.nextLine();
         
         if( maksu <= 0.0)
            System.out.println("Maksun tulee olla suurempi kuin nolla!");
         
      }while(maksu <= 0.0);

      CashPayment maksu1 = new CashPayment(maksu);
      //tulostus 1
      maksu1.printPaymentDetails();
      //tulostus2
      maksu1.setAmount(999.99);
      System.out.println("\nKateismaksun maara muutoksen jalkeen: " + maksu1.getAmount());
      
      System.out.println();
      
      do {
         System.out.print("Anna luottokorttimaksun maara > ");
         maksu = sc.nextDouble();
         sc.nextLine();
         
         if( maksu <= 0.0)
            System.out.println("Maksun tulee olla suurempi kuin nolla!");
         
      }while(maksu <= 0.0);
      
      System.out.println();
      System.out.print("Anna luottokortin numero > ");
      kortinNumero = sc.nextLine();
      
      CreditCardPayment maksu2 = new CreditCardPayment(maksu, kortinNumero);
      //tulostus 3
      maksu2.printPaymentDetails();
      
      maksu2.setAmount(798.99);
      System.out.println("\nLuottomaksum maara nyt: " + maksu2.getAmount());
      //tulostus 4
      
      maksu2.setCardNumber("000-0000-000");
      System.out.println("\nLuottokortin numero on nyt: " + maksu2.getCardNumber());
      
      
      
      //testataan metodia printPayment
      System.out.println("\nTestausta\n");
      printPayment(maksu1);
      printPayment(maksu2);
      
      //tulostetaan kaikki maksut yhteensä
      System.out.println("Maksuja maksettu yhteensä " + Payment.getTotal());
  
   }
   
   public static void printPayment(Payment p){
      p.printPaymentDetails();
   }

}