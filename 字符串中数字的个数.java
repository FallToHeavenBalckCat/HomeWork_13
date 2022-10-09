import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        int cnt=0;
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        for(char c:str.toCharArray()){
            if(c<='9' && c>='0') cnt++;
        }
        System.out.println(cnt);
    }
}