//stack probelm adjacent same element remove

// #include<stdio.h>
// int removed(int j,int arr[],int *len) {
//     for (int k=j;k<*len-2;k++) {
//         arr[k]=arr[k+2];
//     }
//     *len-=2;
//     return 0;
// }
// int main() {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     int len=n;
//     int i=1;
//     while(i<len) {
//         if (arr[i]==arr[i-1]) {
//             removed(i-1,arr,&len);
//             i=1;
//         }else{
//             i++;
//         }
//     }
//     for (int i=0;i<len;i++) {
//         printf("%d ",arr[i]);
//     }
// }
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int stack[n];
    int top=-1;
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++) {
        if (top==-1) {
            stack[++top]=arr[i];
        }else{
            if (stack[top]==arr[i]) {
                top--;
            }else{
                stack[++top]=arr[i];
            }
        }
    }
    for (int i=0;i<=top;i++) {
        printf("%d ",stack[i]);

}
// ****** use satck

// 

// #include<stdio.h>
// int main() {
//     char str[100001];
//     scanf("%s",str);

//     int stack[100001];
//     int top=-1;
//     for (int i=0;str[i];i++) {
//         if (str[i]!='#') {
//             stack[++top]=str[i]-'0';
//         }else{
//             if (top<1) continue;
//             int b=stack[top--];
//             int a=stack[top--];
//             int k=(a*10)+b;
//             if (k<=26 && k>=1) {
//                 stack[++top]=k;
//             }
//         }
//     }
//     for (int i=0;i<=top;i++) {
//         printf("%c ",stack[i]+'a'-1);
//     }
// }

