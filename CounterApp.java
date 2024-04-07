public class CounterApp {
    public static void main(String[] args) {
    	
//        Method: Initialize thread and start count up to 20
        Thread countingUp = new Thread(() -> {
            for (int i = 0; i <= 20; ++i) {
                System.out.println("Counting Up: " + i);
                try {
//                	Temporarily stop execution for 500 milliseconds between counts
                    Thread.sleep(500);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        });
        
//        First thread counter method call
        countingUp.start();

//        Try/catch method to wait for the first thread to complete
        try {
            countingUp.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

//        Method: Initialize second thread and start it counting down from 20
        Thread countingDown = new Thread(() -> {
            for (int i = 20; i >= 0; --i) {
                System.out.println("Counting Down: " + i);
                try {
//                	// Temporarily stop execution for 500 milliseconds between counts
                    Thread.sleep(500);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        });
//        Second thread counter method call
        countingDown.start();
    }
}