#include <iostream>
#include <cstdio>
int nrows = 3;
int ncolumns = 3;
int** remove_allzeros_rows(){
    int** a = new int*[nrows];
    
    for(int i = 0; i < nrows; i++) {
    a[i] = new int[ncolumns];
    }

    int** b = new int*[nrows];

    for(int i = 0; i < nrows; i++) {
    b[i] = new int[ncolumns];
    }


}

int main(){
    return 0;
}