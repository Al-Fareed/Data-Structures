//Author Name:Al-Fareed
//Reg No:210970049
//Date Of Creation:16-Mar-22
//Program Name:Program to add two polynomials
//---------------------------------------------------------------
#include<iostream>
using namespace std;
struct poly
{
        int coeff,exp;
};
void input(poly p[])
{
        int n,i;
        cout<<"Enter the number of terms:";
        cin>>n;
        p[0].coeff=n;
        cout<<"\nEnter the values for co-effiecent and exponent:";
        for(i=1;i<=n;i++)
        {
                cin>>p[i].coeff>>p[i].exp;
        }
}
void display(poly p[])
{
        int i,term;
        for(i=1;i<=p[0].coeff;i++)
        {
        cout<<p[i].coeff<<"x^"<<p[i].exp<<" ";
}
}

void add(poly p1[],poly p2[],poly p3[])
{
        int i=1,j=1,n1=p1[0].coeff,n2=p2[0].coeff,n3=0;
        while(i<=n1 && j<=n2)
        {
                if(p1[i].exp>p2[j].exp)
                {
                        n3++;
                        p3[n3].coeff=p1[i].coeff;
                        p3[n3].exp=p1[i].exp;
                        i++;
                }
                else if(p1[i].exp<p2[j].exp)
                {
                        n3++;
                        p3[n3].coeff=p2[j].coeff;
                        p3[n3].exp=p2[j].exp;
                        j++;
                }
                else
                {
                        int  sum=p1[i].coeff+p2[j].coeff;
                                if(sum!=0)
                                {
                                        n3++;
                                        p3[n3].coeff=sum;
                                        p3[n3].exp=p1[i].exp;
                                }
                                i++;
                                j++;
                }
        }
        while(i<=n1)
        {
                n3++;
                p3[n3].coeff=p1[i].coeff;
                p3[n3].exp=p1[i].exp;
                i++;
        }
        while(j<=n2)
        {
                n3++;
                p3[n3].coeff=p2[j].coeff;
                p3[n3].exp=p2[j].exp;
                j++;
        }
        p3[0].coeff=n3;
}

int main()
{
        poly p1[10],p2[10],p3[10];
        cout<<"\nEnter the First Polynomial expression:\n";
        input(p1);
        cout<<"\nEnter the Second Polynomial expression:\n";
        input(p2);
        cout<<"\n The First Polynomial is:\n";
        display(p1);
        cout<<"\n The Second Polynomial is:\n";
        display(p2);
        add(p1,p2,p3);
        cout<<"\n The sum of two polynomials are:\n";
        display(p3);
        cout<<"\n";
        return 0;
}
