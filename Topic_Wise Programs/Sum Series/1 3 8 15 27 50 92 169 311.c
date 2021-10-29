void main()
{
    int a=1, b=3, c=4, n=10, sum, i;
    printf("%d %d ",a,b,c);
    for(i=4; i<=n; i++)
    {
        sum = a+b+c;
        printf("%d ",sum);
      a = b;
      b = c;
      c = sum;
    }
}
