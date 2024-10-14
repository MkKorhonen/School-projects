class Pankkitili{
	private double tilinumero;
	private String tilinomistaja;
	private double saldo;
	
	public Pankkitili (double tilinumero_par,String tiliomistaja_par, double saldo_par){
		tilinumero=tilinumero_par;
		tilinomistaja=tiliomistaja_par;
		saldo=saldo_par;
	}
	public void setTilinumero(double tilinumero_par){
		tilinumero=tilinumero_par;
	}
	public void setTiliomistaja(String tilinomistaja_par){
		tilinomistaja=tilinomistaja_par;
	}
	public double getTilinumero(){
		return tilinumero;
	}
	public String getTiliomistaja(){
		return 	tilinomistaja;
	}
	public void setSaldo(double saldo_par){
		saldo=saldo_par;
	}
	public double getSaldo(){
		return saldo;
	}
	
	public void printSaldo(){
		System.out.println("Saldosi on "+ saldo + " euroa");
	}
}
		
	
		