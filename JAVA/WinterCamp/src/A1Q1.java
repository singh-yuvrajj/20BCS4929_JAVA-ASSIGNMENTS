import java.io.*;
import java.util.*;

public class A1Q1{
    void sort_str(String str){
        char arr[] = str.toCharArray();
        for(int i=0;i<str.length()-1;i++){
            int k=0;
            for(int j=i+1;j<str.length()-k;j++){
                if(arr[j]<arr[i]){
                    char temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            k++;
        }
        for(int i=0;i<str.length();i++){
            System.out.print(arr[i]);
        }
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter The String");
        String str = sc.nextLine();
        A1Q1 ob=new A1Q1();
        ob.sort_str(str);
    }
}