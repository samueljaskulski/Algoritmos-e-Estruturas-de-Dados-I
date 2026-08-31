char * interpret(char * command){
int len = strlen(command);
char *saida = (char*) malloc((len + 1)*sizeof(char));
int j = 0;
for(int i = 0; command[i] != '\0'; i++){
 if(command[i] == 'G'){
    saida[j++]='G';
 }else
 if(command[i]=='(' && command[i+1] == ')'){
    saida[j++] = 'o';
    i++;
 }else if(command[i]=='(' && command[i+1] == 'a'){
    saida[j++] = 'a';
    saida[j++] = 'l';
    i += 3;
 }
}
saida[j] = '\0';
return saida;
}