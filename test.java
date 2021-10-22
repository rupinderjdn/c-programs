
import java.util.Scanner;

public class test {
    public static Scanner sc= new Scanner(System.in);
    public static void main(String[] args) {
        int t=sc.nextInt();
        while(t>0) {
            int b=sc.nextInt();
            int s=sc.nextInt();
            int[] arr=new int[b];
            for(int i=0;i<b;i++) {
                arr[i]=sc.nextInt();
            }
            System.out.println(findpage(b,s,arr));
        }
    }
    public static int findpage(int b,int s,int[] arr) {
        int sum=0,ans=Integer.MAX_VALUE;
        for(int i=0;i<b;i++) {
            sum+=arr[i];
        }
        int start=arr[b-1];
        int end=sum;
        while(start<=end) {
            int mid=(start+end)/2;
            if(ispossible(arr,b,s,ans)) {
                ans=mid;
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }
        return ans;
    }
    public static boolean ispossible(int[] arr,int b,int s,int curr_min) {
        int students_used=1;
        int pages_reading=0;
        for(int i=0;i<b;i++) {
            pages_reading+=arr[i];
            if(pages_reading>curr_min) {
                students_used++;
                pages_reading=arr[i];
                if(students_used>s) {
                    return false;
                }
            }
        }
        return true;
    }

}
