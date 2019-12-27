#include<stdio.h>
#include<string.h>
int main(){
  char s[101];
  scanf("%s",s);
  int i;
  for(i=0;i<strlen(s);i++){
    if(s[i]=='n')
    continue;
    else if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
      if(s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u')
      break;
  }

}
  if(i<strlen(s)) printf("NO\n");
  else printf("YES\n");
}