#include <stdio.h>


int main() {
char message [100], ch;
int i, key, n;

printf("Enter a section of text:\n");
fgets(message);

printf("Do you want to encrypt of decypher the text?\n Enccrypt: 1\n Decrypt: 2");
scanf("%d", &n);

printf("Enter the key: ");
scanf("%d\n", &key);

return 0;
}
