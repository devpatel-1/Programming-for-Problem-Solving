
// Operator precedence and associativity based questions (Know the rules of precedence and associativity of operators in C)


// (A) void main()
// {
// int x;
// x=3*4%5;
// printf("x=%d",x);
// }
// (B) void main()
// {
// int x;
// x=3+4-7*8/5%10;
// printf("x=%d",x);
// }
// (C) void main()
// {
// int x;
// x=4%5+6%5;
// printf("%d",x);
// }
// (D) void main()
// {
// int x;
// x= -3*-4%-6/-5;
// printf("%d",x);
// }
// (E) void main()
// {
// float a=1.5;
// int b=3;
// a=b/2+b*8/b-b+a/3;
// printf("%f",a);
// }
// (F) void main()
// {
// int a,b;
// a=5.999999;
// b=5.000001;
// printf("a=%d b=%d",a,b);
// }

// (G) void main()
// {
// int x=10,y=5,p,q;
// p=x>9;
// q=x>3 && y!=3;
// printf("p=%d q=%d",p,q);
// }
// (H) void main()
// {
// float a,b;
// int i,j;
// a=(i=sizeof(i),j=sizeof(b),i+j)
// ; printf("%f",a);
// }
// (I) void main()
// {
// int x=11,y=6,z;
// z=x==5 || y != 4;
// printf("z=%d",z);
// }
// (J) void main()
// {
// int
// x=3;
// x*=x
// +4;
// printf("x=%d",x);
// }
// (K) void main()
// {
// int i=-4,j,num=10;
// j=i%-3;
// j=(j?0:num*num);
// printf("j=%d",j);
// }
// (L) void main()
// {
// int
// x=3,y,z;
// z=y=x;
// z*=y=x*
// x;
// printf("x=%d y=%d z=%d",x,y,z);
// }
// (M) void main()
// {
// int x=3,z;
// z=x++ + 10;
// printf("x=%d z=%d",x,z);
// }
// (N) void main()
// {
// int x=3,z;
// z=x-- -
// 111;
// printf(x=%d z=%d",x,z);
// }

// (O) void main()
// {
// int x=3,z;
// z=x++ + ++x;
// printf("x=%d z=%d",x,z);
// }
// (P) void main()
// {
// int i=3,j;
// j=++i*++i*++i;
// printf("%d %d",i,j);
// }

// (Q) void main()
// {
// int x=10,y,z;
// z=y=x;
// y-= x--;
// z-=--x;
// x-= --x - x--;
//  printf("x=%d y=%d
// z=%d",x,y,z);
// }
// (R) void main()
// {
// int a=-21,b=3;
// int i=5;
// b=-b;
// printf("%d",a/b+10);
// a=(i++ + ++i ,i++);
// printf("%d",a);
// }
// (S) void main()
// {
// int x,y,z;
// x=y=z=-1;
// z=++x && ++y || ++z;
// printf("x=%d y=%d z=%d",x,y,z);
// }
// (T) void main()
// {
// int x,y,z;
// x=y=z=1;
// z=++x && ++y && ++z;
// printf("x=%d y=%d z=%d",x,y,z);
// }
// (U) void main()
// {
// int a=30,b=40,x; x=(a!=10)
// && (b =50);
// printf("x=%d & %d", x, ++(a-b));
// }
// (V) void main()
// {
// int a;
// a=sizeof(3.14);
// printf("%d",a);
// }
// (W) void main()
// {
// int i=5;
// printf("%d %d
// %d",i++,i,++i);
// }
// (X) void main()
// {
// int a=b=c=d=30;
// printf("%d %d %d
// %d",a,b,c,d);
// }