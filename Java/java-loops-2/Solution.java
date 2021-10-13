import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            String out = "";
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int sum = a +(1*b);
            int p = 2;
            out = sum+"";
            for(int j=1; j<n; j++)
            {
                sum = sum+(p*b);
                out = out+" "+sum;
                p = p*2;
            }
            System.out.println(out);
        }
        in.close();
    }
}