class Asiakas{
	
	private double asiakasnumero;
	
	public Asiakas (double num){
		asiakasnumero=num;
	}
	
	public void setNum (double num){
		asiakasnumero=num;
	}
	
	
	
	public double getNum(){
		return asiakasnumero;
	}
	
	
	public void printAsiakas(){
		
		System.out.println("Asiakasnumero: " + asiakasnumero);
	}
}