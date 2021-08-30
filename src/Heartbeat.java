
public class Heartbeat {

	public static void main(String[] args) {
		double time = 0;
		while(time<10) {
			try {
			Thread.sleep(100);
			time+=0.1;
		    System.out.println("Time elapsed: "+ time);
			}
			catch(InterruptedException e) {
				e.printStackTrace();
			}
		}

	}

}
