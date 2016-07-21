char *reverseString(char *s);
int main(){
	char s[]="race car";
	reverseString(s);
	return 1;	
}
char* reverseString(char* s) {
	int len = strlen(s);  //strlen()函数获取字符串长度，注意是字符串长度，不是数组长度，数组长度应该为len+1 
	printf("%d",len);
    char *ss = (char *)malloc(len+1);   //用malloc分配数组空间，（char*）强制类型转换为char，数组长度为len+1 
    int i=len-1;
    int j=0;
    do{
        ss[j++]=s[i--];
    }while(i>=0);   //用do循环比用for循环要快 
    ss[len]='\0';    //数组最后补\0  
    printf("%s",ss);
    return ss;
} 
