// DP


// dp from base 1,1

// dp from any point r,c to r2,c2


// min rather than sum
// #include<stdio.h>
// int main() {
//     int r,c;
//     scanf("%d %d",&r,&c);

//     int a[r+1][c+1], b[r+1][c+1];
//     for (int i=0;i<=r;i++) {
//         a[i][0]=0;
//         b[i][0]=0;
//     }
//     for (int j=0;j<=c;j++) {
//         a[0][j]=0;
//         b[0][j]=0;
//     }
//     for (int i=1;i<=r;i++) {
//         for (int j=1;j<=c;j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\n");
//     for (int i=1;i<=r;i++) {
//         for (int j=1;j<=c;j++) {
//             if (b[i-1][j]<=b[i][j-1]) {
//                 b[i][j]=a[i][j]+b[i-1][j];
//             } else {
//                 b[i][j]=a[i][j]+b[i][j-1];
//             }
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
    
// }


//dp from base 1,1 prefix matrix

// #include<stdio.h>
// int main() {
//     int r,c;
//     scanf("%d %d",&r,&c);

//     int a[r+1][c+1], b[r+1][c+1];
//     for (int i=0;i<=r;i++) {
//         a[i][0]=0;
//         b[i][0]=0;
//     }
//     for (int j=0;j<=c;j++) {
//         a[0][j]=0;
//         b[0][j]=0;
//     }
//     for (int i=1;i<=r;i++) {
//         for (int j=1;j<=c;j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\n");
//     for (int row=1;row<=r;row++) {
//         for (int j=1;j<=c;j++) {
//             if (b[row-1][j]>=b[row][j-1]) {
//                 b[row][j]=a[row][j]+b[row-1][j];
//             } else {
//                 b[row][j]=a[row][j]+b[row][j-1];
//             }
//             printf("%d ",b[row][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
    

// #include<stdio.h>
// #include<limits.h>
// int max(int c,int giv[][c],int row, int f) {
//     int fmax=INT_MIN, smax=INT_MIN;
//     for (int i=1;i<=c;i++) {
//         if (giv[row][i]>fmax) {
//             smax=fmax;
//             fmax=giv[row][i];
//         } else if (giv[row][i]>smax) {
//             smax=giv[row][i];
//         }
//     }
//     if (f==1) {
//         return fmax;
//     } else {
//         return smax;
//     }
// }
// int main() {
//     int r,c;
//     scanf("%d %d",&r,&c);
//     int giv[r+1][c+1], pref[r+1][c+1];
//     for (int i=0;i<=r;i++) {
//         giv[i][0]=0;
//         pref[i][0]=0;
//     }
//     for (int j=0;j<=c;j++) {
//         giv[0][j]=0;
//         pref[0][j]=0;
//     }
//     for (int row=1;row<=r;row++) {
//         for (int col=1;col<=c;col++) {
//             scanf("%d",&giv[row][col]);
//             if (row==1) {
//                 pref[row][col]=giv[row][col];
//             }
//         }
//     }
//     for (int row=2;row<=r;row++) {
//         for (int col=1;col<=c;col++) {
//             int fmax=max(c,pref,row-1,1);
//             int smax=max(c,pref,row-1,2);
//             if (pref[row-1][col]==fmax) {
//                 pref[row][col]=giv[row][col]+smax;
//             }else{
//                 pref[row][col]=giv[row][col]+fmax;
//             }
//             }
//     }
    
//     for (int row=1;row<=r;row++) {
//         for (int col=1;col<=c;col++) {
//             printf("%d ",pref[row][col]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// string to subsequence then checking if palindrome or not

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[10001];
//     scanf("%s",str);
//     int l[26]={0};
//     int r[26]={0};
//     for (int i=0;str[i];i++) {
//         r[str[i]-'a']++;
//     }
//     int count=0;
//     for (int i=0;str[i];i++) {
//         r[str[i]-'a']--;
//         for (int alp=0;alp<26;alp++) {
//             count+=(l[alp]*r[alp]);
//         }
//         l[str[i]-'a']++;
//     }
//     printf("%d",count);
//     return 0;
// }

// substring equal number of 0 and 1 
// 
// #include<stdio.h>
// 
// #define OFFSET 100000
// 
// int main() {
    // char str[100001];
    // scanf("%s",str);
//     
    // int pos[(2*OFFSET)+1];
    // for (int i=0;i<=(2*OFFSET);i++) {
        // pos[i]=-2;
    // }
// 
    // pos[OFFSET]= -1;
    // int val=0, maxlen=0;
    // for (int i=0;str[i];i++) {
        // if (str[i]=='1') {
            // val+=1;
        // }else{
            // val-=1;
        // }
// 
        // int index=val+OFFSET;
        // if (pos[index]==-2) {
            // pos[index]=i;
        // }else{
            // int l=i-pos[index];
            // if (l>maxlen) maxlen=l;
        // }
    // }
    // printf("%d",maxlen);
    // return 0;
// }

//atcoder two language


#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	printf("%d",n);
}
