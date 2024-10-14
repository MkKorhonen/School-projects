import javax.swing.*;
import java.awt.event.*;

public class Ikkuna extends JFrame {
   
   private JPanel ruutu;
   private JLabel viestiLabel1;
   private JTextField mailitKentta;
   private JButton laskeNappula;
   private JButton lopetaNappula;
   private final int IKKUNAN_LEVEYS = 310;
   private final int IKKUNAN_KORKEUS = 100;
   
   public Ikkuna( ){
      
      setTitle("Mailit kilometreiksi muunnin");
      setSize( IKKUNAN_LEVEYS, IKKUNAN_KORKEUS );
      setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
      
      rakennaRuutu();
      add( ruutu );
      
      setVisible( true );
      
   }
   
   private void rakennaRuutu(){
      
      viestiLabel1 = new JLabel("Anna etaisyys maileina: ");
      mailitKentta = new JTextField(10);
      
      
      
      laskeNappula = new JButton("Laske");
      laskeNappula.addActionListener( new NappulanKuuntelija());
      
      lopetaNappula = new JButton("LOPETA");
      lopetaNappula.addActionListener( new NappulanKuuntelija());
      
      
      
      
      ruutu = new JPanel();
      
      ruutu.add( viestiLabel1 );
      ruutu.add( mailitKentta );
      
      ruutu.add( laskeNappula );
      ruutu.add( lopetaNappula );
      
   }
   
   private class NappulanKuuntelija implements ActionListener {
      
      public void actionPerformed( ActionEvent e ){
         
         String tapahtuma = e.getActionCommand();
         
         if( tapahtuma.equals("Laske")){
            
            final double muunnosVakio = 1.609;
            String syote = null;
            double kilometrit;
            double mailit = 0;
            boolean ok = false;
            
            do{
               try {
         
                  syote = mailitKentta.getText();
                  mailit = Double.parseDouble( syote );
                  ok = true;
               }catch(NumberFormatException nfe ){
                  JOptionPane.showMessageDialog( null, "Ei kelpaa yrita uudelleen ");
                  mailitKentta.setText("");
                  return;
               }
               kilometrit = mailit * muunnosVakio;
            }while (!ok);
            
            JOptionPane.showMessageDialog( null, syote + " mailia on " + kilometrit +" km");
            mailitKentta.setText("");
            
         }
         
         if( tapahtuma.equals("LOPETA")){
            System.exit(0);
         }
         
         
      }
   }
}