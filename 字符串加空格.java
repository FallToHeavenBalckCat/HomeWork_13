import java.util.*;


public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        for(char c:str.toCharArray()){
            System.out.printf("%c ",c);
        }
    }
}