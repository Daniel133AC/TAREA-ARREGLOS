#include <iostream>

using namespace std;

int contcar(char str[]){
    int i=0;
    for(int c=0;str[c]!='\0';c++){
        i++;
    }
    return i;
}

int contrep(char str[],char caracter){
    int i=0;
    for(int c=0;str[c]!='\0';c++){
        if (str[c]==caracter){
            i++;
        }
    }
    return i;
}

long long sumelementos(const long long arr[],const int i){
    int suma=0;
    for(int j=0;j<=i;j++){
        suma=suma+arr[j];
    }
    return suma;
    }

long long minelementos(const long long arr[],const int i){
    int mini=arr[0];
    for(int j=1;j<=i;j++){
        if(mini>arr[j]){
            mini=arr[j];
        }
    }
    return mini;}

long long cantperfectos(const long long arr[],const int i){
    int cant=0;
    int sumv=0;
    for(int j=0;j<=i;j++){
        for(int con=1;con*2<=arr[j];con++){
            if(arr[j]%con==0){
                sumv=sumv+con;}
            }
        if(sumv==arr[j]){
            cant++;
        }
        sumv=0;
    }
    return cant;
}

void invertir(long long arr[],const long long i){
    long long dif=i;
    long long var=0;
    long long cont=0;
    long long j=0;
    while(cont<=i/2){
        var=arr[j];
        arr[j]=arr[dif+j];
        arr[dif+j]=var;
        j++;
        dif=dif-2;
        cont++;
    }
    for(int h=0;h<=i;h++){
        if(h<i){cout<<arr[h]<<",";}else{cout<<arr[h];}}
    cout<<endl;}

void ordenAD(long long arr[],const int i){
    string orden="";
    cout<<"¿Como deseas ordenar tu arreglo? (A/B): ";
    cin>>orden;
    cout<<endl;

    if (orden=="A"){
    long long temp;
    for(long long h=0;h<i+1;h++){
        for(long long j=h+1;j<i+1;j++){
            if(arr[j]<arr[h]){
                temp=arr[j];
                arr[j]=arr[h];
                arr[h]=temp;
        }}}
    for(int h=0;h<=i;h++){
        if(h<i){cout<<arr[h]<<",";}else{cout<<arr[h];}}
    }

    else if (orden=="B"){
    long long temp;
    for(long long h=0;h<i+1;h++){
        for(long long j=h+1;j<i+1;j++){
            if(arr[j]>arr[h]){
                temp=arr[j];
                arr[j]=arr[h];
                arr[h]=temp;
        }}}
    for(int h=0;h<=i;h++){
        if(h<i){cout<<arr[h]<<",";}else{cout<<arr[h];}}
    }

    else{
    cout<<"Orden invalido";
    }

    cout<<endl;
}
int main()
{
    long long daniel[]={50,13,9,7,28,6,10,496,11,12,20,14,15,16,17,18,19,400};

    //ordenAD(daniel,17);
    //invertir(daniel,17);
    //cout<<sumelementos(daniel,17)<<endl;
    //cout<<minelementos(daniel,17)<<endl;
    //cout<<cantperfectos(daniel,17)<<endl;
    char texto[]="HOLAA";
    cout<<contcar(texto)<<endl;
    cout<<contrep(texto,'A')<<endl;
    
    return 0;
}
