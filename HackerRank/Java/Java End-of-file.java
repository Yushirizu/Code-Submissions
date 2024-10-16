import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        boolean reading = true;
        int cpt = 0;
        Scanner sc = new Scanner (System.in);
        try{
           while(reading){
            String input;
            input = sc.nextLine();
            cpt++;
            System.out.println(cpt + " " + input);
            } 
        }
        catch(NoSuchElementException e){
            
        }
        
    }
}
