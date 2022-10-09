import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            String str1=sc.next();
            String str2=sc.next();
            if(str1.equals("Hunter")&&str2.equals("Gun")) {
                System.out.println("Player1");
            }
            else if(str2.equals("Hunter")&&str1.equals("Gun")){
                System.out.println("Player2");
            }
            else if(str2.equals("Hunter")&&str1.equals("Bear")){
                System.out.println("Player1");
            }
            else if(str1.equals("Hunter")&&str2.equals("Bear")){
                System.out.println("Player2");
            }
            else if(str1.equals("Gun")&&str2.equals("Bear")){
                System.out.println("Player1");
            }
            else if(str2.equals("Gun")&&str1.equals("Bear")){
                System.out.println("Player2");
            }
            else System.out.println("Tie");
        }

    }
}