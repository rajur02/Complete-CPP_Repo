#include <bits/stdc++.h>
using namespace std;

 /*
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/
void pattern1(int n) {
     for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
    *
    * *       
    * * *
    * * * *
    * * * * *
*/
void pattern2(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i>=j) 
                cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
                cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
    1
    1 2
    1 2 3
    1 2 3 4 
    1 2 3 4 5
*/

void pattern3(int n) {
    for(int i=0; i<n; i++) {
        int num=1;
        for(int j=0; j<n; j++) {
            if(i>=j) {
                cout << num++ << " ";
            } 
        }
        cout << endl;
    }
    cout << endl;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
                cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
*/
void pattern4(int n) {
    int num=0;
    for(int i=0; i<n; i++) {
        num++;
        for(int j=0; j<n; j++) {
            if(i>=j) {
                cout << num << " ";
            } 
        }
        cout << endl;
    }
    cout << endl;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
                cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
    * * * * *
    * * * *
    * * *
    * *
    *
*/
void pattern5(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=0; j<n-i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/
void pattern6(int n) {
    for(int i=0; i<n; i++) {
        int num = 1;
        for(int j=0; j<n; j++) {
            if(i<=j) {
                cout << num++ << " ";
            } 
        }
        cout << endl;
    }
    cout << endl;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
        *
       ***
      *****
     ******* 
    *********
*/
void pattern7(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
         for(int j=0; j<2*i+1; j++) {
            cout << "*";
        }
         for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
    *********
     *******
      *****
       ***
        *    
*/
void pattern8(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<i; j++) {
            cout << " ";
        }
        for(int j=0; j<2*n-(2*i+1); j++) {
            cout << "*";
        }
        for(int j=0; j<i; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * * 
    * *
    *
*/

void pattern10(int n) {

    for(int i=1; i<=2*n-1; i++) {
        int stars=i;
        if(i>n) stars = 2*n-i;
        for(int j=1; j<=stars; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/
void pattern11(int n) {
    int start=1;
    for(int i=0; i<n; i++) {
        start = (i%2==0) ? 1 : 0;
        for(int j=0; j<=i; j++) {
            cout << start << " ";
            start = 1-start;
        }
        cout << endl;
    }
    cout << endl;
}

/*
1        1
12      21
123    321
1234  4321
1234554321
*/
void pattern12(int n) {
    int space = 2*(n-1);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << j;
        }
        for(int j=1; j<=space; j++) {
            cout << " ";
        }
        for(int j=i; j>=1; j--) {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
    cout << endl;
}

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
void pattern13(int n) {
    int count=1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << count++ << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
A
A B
A B C
A B C D
A B C D E
*/
void pattern14(int n) {
    for(int i=0; i<n; i++) {
        for(char ch='A'; ch<='A'+i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
A B C D E
A B C D
A B C
A B
A
*/
void pattern15(int n) {
    for(int i=0; i<n; i++) {
        for(char ch='A'; ch<='A'+(n-i-1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
A
B B
C C C
D D D D 
E E E E E
*/
void pattern16(int n) {
    for(int i=0; i<n; i++) {
        char ch = 'A' + i;
        for(int j=0; j<=i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
    A    
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
void pattern17(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=0; j<2*i+1; j++) {
            cout << ch;
            if(j < breakpoint) ch++;
            else ch--;
        }

        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}


/*
E
D E
C D E
B C D E
A B C D E
*/
void pattern18(int n) {
    for(int i=0; i<n; i++) {
        for(char ch='E'-i; ch<='E'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
}


/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
void pattern19(int n) {
    int spaces = 0;
    for(int i=0; i<n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout << "*"; 
        }
        for(int j=0; j<spaces; j++) {
            cout << " ";
        }
        for(int j=1; j<=n-i; j++) {
            cout << "*"; 
        }
        spaces+=2;
        cout << endl;
    }

    spaces = 2*n-2;;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << "*"; 
        }
        for(int j=0; j<spaces; j++) {
            cout << " ";
        }
        for(int j=0; j<=i; j++) {
            cout << "*"; 
        }
        spaces-=2;
        cout << endl;
    }
    cout << endl;
}

/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
void pattern20(int n) {
    int spaces = 2*n-2;
    for(int i=1; i<=2*n-1; i++) {
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1; j<=stars; j++) {
            cout << "*";
        }
        for(int j=1; j<=spaces; j++) {
            cout << " ";
        }
        for(int j=1; j<=stars; j++) {
            cout << "*";
        }
        cout << endl;
        if(i < n) spaces -= 2;
        else spaces += 2;
    }
    cout << endl;
}

/*
*****
*   *
*   *
*   *
*****
*/
void pattern21(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==0 || j==0 || i==n-1 || j==n-1) 
                cout << "*";
            else 
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
void pattern22(int n) {
    for(int i=0; i<2*n-1; i++) {
        for(int j=0; j<2*n-1; j++) {
            int top=i, left=j, right=(2*n-2)-j, down=(2*n-2)-i;
            cout << (n - min(min(top,down), min(left,right)));
        }
        cout << endl;
    }
    cout << endl;
}

void pattern23(int n) {
    for(int i = 0; i < n; i++) {
        // print spaces
        for(int j = 0; j < i; j++)
            cout << " ";
        // print stars
        for(int j = 0; j < n - i; j++)
            cout << "*";
        cout << endl;
    }
}

int main() {

    int n;  //
    cout << "Enter the number of rows and columns: ";
    cin>>n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);
    pattern23(n);

   return 0;

}