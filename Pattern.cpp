#include <bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i =0;i<n;i++){
        for(int j= 0; j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
/*
* 
* * 
* * * 
*/


void pattern2 (int n){
    for(int i=0; i <=n;i++){
        for(int j=1;j<=i;j++){
            cout << j<< ' ';
        }
        cout << endl;
    }
}
/*

1 
1 2 
1 2 3 

*/
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << i << ' ';

        }
        cout << endl;
    }
}

/*
1 
2 2 
3 3 3 

*/
void pattern4(int n)
    {
        for(int i=1; i<=n;i++){
            for(int j=0;j<i;j++){
                cout << '*';
            }
            cout << ' ';
        }
    }
/*
* ** *** **** ***** 
*/
void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout << '*' << ' ';

        }
        cout << endl;
    }
}
void pattern6(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
            cout << j << ' ';
        }
        cout << endl;
    }
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int k=0;k<2*i+1;k++){
            cout << '*';
        }
        for(int m=0;m<n-i-1;m++){
            cout << ' ';
        }
        cout << endl;
    }

}
void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int k=0;k<2*n-(2*i+1);k++){
            cout << '*';
        }
        for(int m=0;m<i;m++){
            cout << ' ';
        }
        cout << endl;
    }
}
void pattern9(int n){
    for(int i=1;i<=2*n-1;i++){
        if (i<=n){
            for(int j =0;j<i;j++){
                cout << '*';
            }
            cout << endl;
        }
        else{
            for(int k=0;k<2*n-i;k++){
                cout << '*';
            }
            cout << endl;
        }
    }

}
void pattern10(int n){
    int start = 1;
    for(int i=0;i<n;i++){
        if (i % 2==0) start =1;
        else start =0;
        for(int j=0;j<i;j++){
            cout << start<< ' ';
            start =1- start;

       }
       cout << endl;
    }
}
void pattern11(int n){
    for(int i=1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout << j;
        }
        for(int k= 0;k<(2*n)-(2*i);k++){
            cout << ' ';
        }
        for(int k =i;k>=1;k--){
            cout << k;
        }
        cout << endl;

    }
}
void pattern12(int n){
    int num =1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout << num <<' ';
            num =num+1;
        }
        cout << endl;
    }

}
void pattern13(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout << ch <<' ';
        }
        cout << endl;
    }
}
void pattern14(int n){
    
    for(int i =0;i<=n;i++){
        for(char ch='A';ch<='A'+(n-i);ch++){
            cout << ch << ' ';   
        }
        cout << endl;
    }

}
void pattern15(int n){
    
    for(int i= 0;i<n;i++){
        char ch = 'A' +i;
        for(int j=0;j<=i;j++){
            cout << ch<< ' ';
        }
        cout << endl;
    }

}
void pattern16(int n){
    char chr='A';
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << ' ';
        }
        for(char ch='A';ch<'A'+i;ch++){
            cout << ch;
        }
        for(int c=i;c>=0;c--){
            cout << char (chr+c);
        }
        for(int j=0;j<n-i;j++){
            cout << ' ';
        }
        cout << endl;
        
    }
}
void pattern17(int n){
    
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout << ch << ' ';
        }
        
        cout << endl;
    }
}
void pattern18(int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout <<'*';
        }
        for(int k=1;k<=i;k++){
            cout << ' ';
        }
        for(int k=1;k<=i;k++){
            cout << ' ';
        }
        for(int m=0;m<n-i;m++){
            cout <<'*';
        }
        cout << endl;
    }
    for(int r=0;r<n;r++){
        for(int s=0;s<=r;s++){
            cout << '*';
        }
        for(int l=1;l<n-r;l++){
            cout << ' ';
        }
        for(int l=1;l<n-r;l++){
            cout << ' ';
        }
        for(int o=0;o<=r;o++){
            cout << '*';
        }
        
        cout << endl;
    } 
}
void pattern19(int n){
    for(int i=1;i<n-1;i++){
        for(int j=0;j<i;j++){
            cout<< '*';
        }
        for(int k=0;k<=n+2-(2*i);k++){
            cout << ' ';
        }
        for(int m=0;m<i;m++){
            cout<< '*';
        }
        cout<<endl;
    }
    for(int w=0;w<n;w++){    
        for(int p=1;p<n-w;p++){
            cout << '*';
        }
        for(int l=0;l<2*w;l++){
            cout << ' ';
        }
        for(int h=1;h<n-w;h++){
            cout << '*';
        }
        cout << endl;

    }
}
void pattern20(int n){
    for(int s=0;s<=n;s++){
            cout << '*'<<' ';
    }
    cout << endl;
    for(int i=1;i<n;i++){
        for(int j=0;j<1;j++){
            cout << '*';
        }
        for(int k=1;k<2*n;k++){
            cout << ' ';
        }
        for(int m=i;m<=i;m++){
            cout<<'*';
        }
        cout <<endl;
        
    }
    for(int s=0;s<=n;s++){
            cout << '*'<<' ';
    }
    cout << endl;

}
void pattern21(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right =(2*n-2)-j;
            int down = (2*n-2)-i;
            cout <<n- min(min(top,left),min(right,down));
        }
        cout << endl;

    }

}
int main(){
    int n ;
    cin >> n;
    pattern5(n);
    return 0;
}