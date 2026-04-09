// Create user defined packages
// using circle.java file for this program

import Marvellous.circle;  // create user defined package
import Marvellous.Infosystem.square;  

class userpackage
{
    public static void main(String args[])
    {
        circle cobj = new circle();
        
        float ans = 0.0f;

        ans = cobj.circleArea(10.8f);
        System.out.println("Area of Circle is :"+ans);

        square sobj = new square();

        ans = sobj.SquareArea(10.5f);
        System.out.println("Area of Square is :"+ans);


    }
}