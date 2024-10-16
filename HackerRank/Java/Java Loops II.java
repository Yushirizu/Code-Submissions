import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int res=0;
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            res=0;
            for (int j = 0; j < n; j++) {
                res += (int)Math.pow(2,j) * b;
                System.out.print((a+res) + " ");
            }
            System.out.println();
        }
        in.close();
    }
}
