package package1;

import java.util.Scanner;

public class Palindrom {
    static int  temp=0;
    static char[] cArr;
        static boolean chackPotentialPalindrom(char[] cAr){
            cArr=cAr;
            if(cArr!=null){
                char current=cArr[0];
                for(int i=1;i<cArr.length;i++){
                    if(current==cArr[i]){
                        cArr=removeElement(i);
                        chackPotentialPalindrom(cArr);
                        break;
                    } 
                    }
                if(cAr.length==2){
                if(cAr[0]==cAr[1]){
                    cArr=null;
                }}
                if(flag==0 && cArr!=null){
                    flag=1;
                    cArr=removeFirstElement(cArr);
                    chackPotentialPalindrom(cArr);
                    }
                }
            if(cArr==null){
                return true;
            }else{
                return false;
            }
        }
        static char[] removeFirstElement(char[] cAr){
            cArr=cAr;
            if(cArr!=null){
            if(cArr.length >1){
            char[] cArrnew=new char[cArr.length-1];
            for(int j=1,k=0;j<cArr.length;j++,k++){
                cArrnew[k]=cArr[j];
            }
            return cArrnew;
            } else {
                return null;
            }
                } else {
                    return null;
                }
        }
        static char[] removeElement(int i){
            if(cArr.length>2){
            char[] cArrnew=new char[cArr.length-2];
            for(int j=1,k=0;j<cArr.length;j++,k++){
                if(i!=j){
                    cArrnew[k]=cArr[j];
                }else{
                    k-=1;
                }
            }
            return cArrnew;}
            else{
                return null;
            }
        }
        public static void main(String[] args) {
            Scanner scan=new Scanner(System.in);
            while(true){
               flag=0;
            String s=scan.next();
            char[] arr=s.toCharArray();
            System.out.println(chackPotentialPalindrom(arr));
            }
        }
    }
