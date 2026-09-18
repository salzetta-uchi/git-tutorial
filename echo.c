int main(){
    char input[600];
    while(fgets(input, 600, stdin)){  //read from STDIN (aka command-line)
        printf("%s\n", input);  //print out what user typed in
        memset(input, 0, strlen(input));  //reset string to all 0's
    }
    return 1;
}
