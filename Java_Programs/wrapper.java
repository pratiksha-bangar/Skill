
class wrapper
{
    public static void main(String args[])
    {
        int no1 =11;

        Integer no2 = 11;

        System.out.println(no1);
        System.out.println(no2);

        int x =no2;            // Auto - Unboxing 
        System.out.println(x);

        Integer y = no1;      // Auto Boxing
        System.out.println(y);
    }
}

/*
Wrapper class ------ Premitive data type
Boolean -           boolean
Byte    -           byte
Character -         char
Short   -           short
Integer -           int 
Float   -           float
Double  -           double
Long    -           long
*/