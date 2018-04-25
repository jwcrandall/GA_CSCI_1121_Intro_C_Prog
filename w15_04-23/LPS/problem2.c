#include<stdio.h>
#include<string.h>
//Create a function to find out the class
char findClass(char str[]){
  //Store the first octet in an arr[]
  char arr[4];
  int k;
  int i = 0;
  while(str[i] != '.'){
    arr[i] = str[i];
    i++;
  }
  i--;
  //Convert the array str[] into number for comparison
  int ip = 0, j = 1;
  while(i >= 0){
    ip = ip + (str[i] - '0') * j;
    j = j * 10;
    i--;
  }
  //Write for Class A
  if(ip >= 1 && ip <= 126){
    return 'A';
  }
  //Write for Class B
  else if(ip >= 128 && ip <= 191){
    return 'B';
  }
  //Write for Class C
  else if (ip >= 192 && ip <= 223){
    return 'C';
  }
  //Write for Class D
  else if (ip >= 224 && ip <= 239){
    return 'D';
  }
  //Write for Class E
  else {
    return 'E';
  }
}
//Create a function to separate network ID and host ID and to print them
void separate(char str[], char ipClass){
  //Initialize network and host array to NULL
  char network[12], host[12];
  int k;
  for(k = 0; k<12; k++){
    network[k] = host[k] = '\0';
  }
  //For class A, only first octet is Network ID and rest are host ID
  if(ipClass == 'A'){
    int i = 0, j = 0;
    while (str[j] != '.')
    network[i++] = str[j++];
    i = 0;
    j++;
    while (str[j] != '\0'){
      network[i++] = str[j++];
    }
    i = 0;
    j++;
    while(str[j] != '\0'){
      host[i++] = str[j++];
    }
    printf("Network ID is %s\n", network);
    printf("Host ID is %s\n", host);
  }
  //For class B, first two octets are network ID and rest are host ID
  else if(ipClass == 'B'){
    int i = 0, j = 0, dotCount = 0;
    //Storing in network[] up to 2nd dot, dotCount keeps track of number of dots or octets that are passed
      while(dotCount < 2){
        network[i++] = str[j++];
      }
      if(str[j] == '.'){
        dotCount++;
      }
      i = 0;
      j ++;
      while(str[j] != '\0'){
        host[i++] = str[j++];
      }
      printf("Network ID is %s\n", network);
      printf("Host ID is %s\n", host);
    }
  //for class C, first three octet are Network ID and rest are HOST ID
  else if(ipClass == 'C'){
    int i = 0, j = 0, dotCount = 0;
    //storing in network[] up to  3rd dor, dotCount keeps track of number of dots or octets passed.
    while(dotCount < 3){
      network[i++] = str[j++];
      if(str[j] == '.'){
        dotCount++;
      }
      i = 0;
      j++;
      while (str[j] != '\0'){
        host[i++] = str[j++];
      }
      printf("Network ID is %s\n", network);
      printf("Host ID is %s\n", host);
    }
  }
  //Class D and E are not divided in network and host ID
  else{
    printf("In this Class, IP address is not divided into Network and Host ID.\n");
  }
}
//Driver function is to test above function
int main (){
  char str[] = "192.226.12.11";
  char ipClass = findClass(str);
  printf("The given IP address is from CLass %c\n", ipClass);
  separate(str, ipClass);
  return 0;
}
