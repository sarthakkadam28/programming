#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Product
{
    int id;
    char name[100];
    float price;
    int quantity;
};
void WriteToFile(const char *pfilename)
{
    if (pfilename==NULL)
    {
        printf("error:invalid file name\n");
        return;
    }
struct Product product;
char choice ;

    do
    { 
        printf("Enter product ID");
        scanf("%d",&product.id);
        printf("Enter product name");
        getchar();
        fgets(product.name ,sizeof(product.name),stdin);
        product.name[strcspn(product.name,"\n")]='\0';
        printf("Enter product price");
        scanf("%f",&product.price);
        printf("Enter product quantity");
        scanf("%d",&product.quantity);
        FILE*pfile=fopen(pfilename,"ab");
        if (pfile==NULL)
        {
            printf("error:unable to open file\n");
            return;
        }
        fwrite(&product,sizeof(struct Product),1,pfile);
        fclose(pfile);
        printf("Do you want to enter another product(y/n)?");
        getchar();
        scanf(" %c",&choice);
    } while (choice=='y'||choice=='Y');
}
void ReadToFile(const char *pfilename)
{
    FILE*pfile=fopen(pfilename,"rb");
    if (pfile==NULL)
    {
        printf("error:unable to open file\n");
        return;
    }
    struct Product product;
    printf("\n Product Details:\n");
    while (fread(&product,sizeof(struct Product),1,pfile))
    {
        printf("Product ID:%d\n",product.id);
        printf("Product Name:%s\n",product.name);
        printf("Product Price:%f\n",product.price);
        printf("Product Quantity:%d\n",product.quantity);
    }

    fclose(pfile);

 }
int main(int argc, char** argv)
{
    
    WriteToFile("product.dat");
    ReadToFile("product.dat");
    return 0;
}