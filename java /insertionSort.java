public class insertionSort{
	public void Sort(int arr[])
	{
		int n=arr.length;
		for(int i=1;i<n;i++)
		{
			int key=arr[i];
			int j=i-1;
			while(j>=0 && arr[j]>key)
			{
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1]=key;
		}
	}
	public static void main(String args[])
	{
		int arr[]={54,23,56,11,25,35,15,69,5};
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+" ");
		}
		insertionSort sorter=new insertionSort();
		sorter.Sort(arr);
		System.out.println();
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+" ");
		}
	}
}