// accepting input form user

import java.util.*;

class Inputdemo
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);  // System.in - accepting input

        int no1,no2,ans;

        System.out.println("Enter First Number:");
        no1 = sc.nextInt();

        System.out.println("Enter Second Number:");
        no2 = sc.nextInt();

        ans = no1+no2;
        System.out.println("Addition is :"+ans);
        
    }
}