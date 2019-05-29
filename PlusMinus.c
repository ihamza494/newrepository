int main(){
	int i,n;
	float p,neg,z,countp=0,countn=0,countz=0 ;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>0){
			countp++ ;
			}
		else if(arr[i]<0){
			countn++ ;
		}
		else{
			countz++ ;
		}
	}
	p=countp/n;
	neg=countn/n ;
	z=countz/n ;
	printf("%.6f\n %.6f \n %.6f",p,neg,z);
}
