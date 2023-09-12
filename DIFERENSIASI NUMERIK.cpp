printf("Masukkan batas bawah : ");  scanf("%f", &a);
printf("Masukkan batas atas : ");   scanf("%f", &b);
printf("Masukkan h : ");            scanf("%f", &h);
printf("x\t\tf(x)\t\tf'(x)[Eksak]\tf'(x)[Maju]\tError\n");
while(x<=b+h)
{
	x1=x+h
	fx=(x*x)+(2*x)+1;
	hasil=(fx1-fx)/h;
	feks=2*x+2;
	error=fabs(feks-hasil);
	jumerror=jumerror+error;
	printf("%f\t%f\t%f\t%f\t%f\n",x,fx,feks,hasil,error);
	x=x1;
	
}
rataerror=jumerror/((b-a)/h);
printf("Rata-rata error=%f\n",rataerror);