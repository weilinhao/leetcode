char *reverseString(char *s);
int main(){
	char s[]="race car";
	reverseString(s);
	return 1;	
}
char* reverseString(char* s) {
	int len = strlen(s);  //strlen()������ȡ�ַ������ȣ�ע�����ַ������ȣ��������鳤�ȣ����鳤��Ӧ��Ϊlen+1 
	printf("%d",len);
    char *ss = (char *)malloc(len+1);   //��malloc��������ռ䣬��char*��ǿ������ת��Ϊchar�����鳤��Ϊlen+1 
    int i=len-1;
    int j=0;
    do{
        ss[j++]=s[i--];
    }while(i>=0);   //��doѭ������forѭ��Ҫ�� 
    ss[len]='\0';    //�������\0  
    printf("%s",ss);
    return ss;
} 
