#include<iostream>
using namespace std;

void box(int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void triange(int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void triangenum(int m){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void triangenum1(int m){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void Reversetriangenum(int m){
    for(int i=m;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<'*';
        }
        cout<<endl;
    }
}

void Reversetriangenum1(int m){
    for(int i=m;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void EquilateralTriangle(int m){
    for(int i=1;i<=m;i++){
        int x=m-i;
        while(x--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){ 
            cout<<"*";
        }
        cout<<endl;
    }
}

void ReverseEquilateralTriangle(int m){
    for(int i=m;i>=1;i--){
        int x=m-i;
        while(x--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){ 
            cout<<"*";
        }
        cout<<endl;
    }
}

void Rhombus(int m){
    for(int i=1;i<=m;i++){
        int x=m-i;
        while(x--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){ 
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=m;i>=1;i--){
        int x=m-i;
        while(x--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){ 
            cout<<"*";
        }
        cout<<endl;
    }
}

void halfTriangle(int m){
    for(int i=1;i<=2*m-1;i++){
        int star=i;
        if(i>m) star=2*m-i;
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }   
}

void zeroneTriangle(int m){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<1;
            }else{
                cout<<0;
            }
        }
        cout<<endl;
    }
}

void Boxpattern1(int m){
        for(int j=1;j<=m;j++){
            int sp=2*m-2*j;
            for(int k=1;k<=j;k++){
                cout<<k;
            }
            for(int k=1;k<=sp;k++){
                cout<<" ";
                }
            for(int k=j;k>=1;k--){
                cout<<k;
            }
            cout<<endl;
        }
}

void numberTriangle(int n){
    int k=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}

void alphabetTriangle(int n){
    char k='A';
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}

void ReversealphabetTriangle(int n){
    char k='A';
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        k='A';
        cout<<endl;
    }
}

void SalphabetTriangle(int n){
    char k='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
        }
        k++;
        cout<<endl;
    }
}

void AlphaCompleteTriangle(int n){
    for(int i=1;i<=n;i++){
        char k='A';
        int space=n-i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<k;
            k++;
        }
        k='A'+i-2;
        for(int j=1;j<i;j++){
            cout<<k;
            k--;
        }
        cout<<endl;
    }
}

void SpaceRhombus(int m){
    for(int i=1;i<=2*m;i++){
        if(i<=m){

        int space=2*i-2;
        for(int j=m-i+1;j>=1;j--){
            cout<<'*';
        }
        for(int j=1;j<=space;j++)
            cout<<' ';
        for(int j=m-i+1;j>=1;j--){
            cout<<'*';
        }
        cout<<endl;
        }
        else{
        int x=(i%m==0?m:i%m);
        int space=2*m-2*x;
        for(int j=1;j<=x;j++){
            cout<<'*';
        }
        for(int j=1;j<=space;j++)
            cout<<' ';
        for(int j=1;j<=x;j++){
            cout<<'*';
        }
        cout<<endl;
        }
    }
}

void RhombusTriangle(int m){
    for(int i=1;i<=2*m;i++){
        if(i<=m){
            int space=2*m-2*i;
            for(int j=1;j<=i;j++){
                cout<<'*';
            }
            for(int j=1;j<=space;j++)
                cout<<' ';
            for(int j=1;j<=i;j++){
                cout<<'*';
            }  
            cout<<endl;
        }else{
            int x=i%m==0?m:i%m;
            int space = 2*x;
            for(int j=1;j<=m-x;j++){
                cout<<'*';
            }
            for(int j=1;j<=space;j++)
                cout<<' ';
            for(int j=1;j<=m-x;j++){
                cout<<'*';
            }
            cout<<endl;
        }
    }
}

void EmptySquare(int m){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            if(i==1||j==1||j==m||i==m){
                cout<<'*';
            }else{
                cout<<' ';
            }
        }
        cout<<endl;
    }
}

void NumberedSquare(int m){
    for(int i=0;i<2*m-1;i++){
        for(int j=0;j<2*m-1;j++){
            int top=i;
            int left=j;
            int right=2*m-2-j;
            int bottom=2*m-2-i;
            cout<<m-min(min(top,left),min(right,bottom));
        }
        cout<<endl;
    }
}

int main(){
    int m;
    cout<<"Enter the number of the rows: "<<endl;
    cin>>m;
    // box(m);
    // triange(m);
    // triangenum(m);
    // triangenum1(m);
    // Reversetriangenum(m);
    // Reversetriangenum1(m);
    // EquilateralTriangle(m);
    // ReverseEquilateralTriangle(m);
    // Rhombus(m);
    // halfTriangle(m);
    // zeroneTriangle(m);
    // Boxpattern1(m);
    // numberTriangle(m);
    // alphabetTriangle(m);
    // ReversealphabetTriangle(m);
    // SalphabetTriangle(m);
    // AlphaCompleteTriangle(m);
    // SpaceRhombus(m);
    // RhombusTriangle(m);
    // EmptySquare(m);
    NumberedSquare(m);
    return 0;
}