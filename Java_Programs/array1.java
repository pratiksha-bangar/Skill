
// Create array 

class array1
{
    public static void main(String args[])
    {
        int arr1[] = {10,20,30};         // Static 

        System.out.println(arr1[0]);
        System.out.println(arr1[1]);
        System.out.println(arr1[2]);

        System.out.println(arr1.length);   // arr1 length is 3

        int arr2[] = new int[4];          // Dynamic
        arr2[0]= 10;
        arr2[1]= 20;
        arr2[2]= 30;
        arr2[3]= 40;
           
        System.out.println(arr2.length);   // arr2 length is 4
    }
}