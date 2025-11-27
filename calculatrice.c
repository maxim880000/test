 #include <stdio.h>
int main() { 
// Demande deux nombres a et b
int a, b, result, rest; 
printf ("deux nombre calule:");
scanf("%d %d", &a, &b);

// Affiche le quotient (a/b) et le reste (a%b)
result = a / b;
rest = a % b;
printf ("a divisé par b donne %d reste %d\n", result, rest);

// Exemple : 17 divisé par 5 donne 3 reste 2
return (0);
}