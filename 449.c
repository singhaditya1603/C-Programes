#include<stdio.h>
#include<math.h>
float determinent(float matrix[25][25], int size)
{
	int c;
        float det=0,s=1;
    	float b[25][25];
    	int i,j;
    	int m,n;
    	if(size == 1)
    	{
        	return (matrix[0][0]);
    	}
    	else
    	{
        	det=0;
        	for(c=0; c<size; c++)
        	{
            		m=0;
            		n=0;
            		for(i=0; i<size; i++)
            		{
                		for(j=0; j<size; j++)
                		{
                    			b[i][j] = 0;
                    			if(i!=0 && j!=c)
                    			{
                        			b[m][n] = matrix[i][j];
                        			if(n<(size-2))
                        			{
                            				n++;
                        			}
                        			else
                        			{
                            				n=0;
                            				m++;
                        			}
                    			}
                		}
           		}
            		det = det + s*(matrix[0][c]*determinent(b,size-1));
            		s = -1*s;
        	}
    }
    return (det);
}
float correlation_coefficient(int g)
{
	int x[100], y[100], xy[100], xsquare[100], ysquare[100];
        int i,xsum, ysum, xysum, xsqr_sum, ysqr_sum;
        float coeff, num, deno;
	xsum = ysum = xysum = xsqr_sum = ysqr_sum = 0;
	printf("Enter the value for x and y:\n");
        for (i = 0; i < g; i++)
	{
                printf("x[%d] and y[%d]: ", i, i);
                scanf("%d%d", &x[i], &y[i]);
	}
	for (i = 0; i < g; i++)
	{
        	xy[i] = x[i] * y[i];
                xsquare[i] = x[i] * x[i];
                ysquare[i] = y[i] * y[i];
                xsum = xsum + x[i];
                ysum = ysum + y[i];
                xysum = xysum + xy[i];
                xsqr_sum = xsqr_sum + xsquare[i];
                ysqr_sum = ysqr_sum + ysquare[i];
        }
	num =((g * xysum) - (xsum * ysum));
        deno =((g * xsqr_sum - xsum * xsum)* (g * ysqr_sum - ysum * ysum));
	coeff = num / sqrt(deno);
	printf("Correlation Coefficient : %.4f\n", coeff);
}
int main()
{
    	int n,g;
    	printf("Enter the size n*n of the matrix ");
    	scanf("%d",&n);
    	int i,j;
    	float matrix[25][25];
    	for(i=0; i<n; i++)
    	{
        	for(j=0; j<n; j++)
        	{
            		printf("Enter the %d%d element of the matrix ",i,j);
            		scanf("%f", &matrix[i][j]);
        	}
    	}
    	float result = determinent(matrix,n);
    	printf("The determinent of the matrix is %f",result);
	printf("\nEnter the value of g: ");
    	scanf("%d",&g);
	correlation_coefficient(g);
}