//-- Notas e Tempos --

// Variáveis iniciais:
byte musicIsPlaying = 0;
byte pos;
float tempo;

// Frequência das notas:

#define p 0      // Pausa (Silêncio)

#define c3 130   // Dó 3
#define c3s 138  // Dó 3 sustenido

#define d3b 138  // Ré 3 bemol
#define d3 146   // Ré 3
#define d3s 155  // Ré 3 sustenido

#define e3b 155  // Mi 3 bemol
#define e3 164   // Mi 3

#define f3 174   // Fá 3
#define f3s 185  // Fá 3 sustenido

#define g3b 185  // Sol 3 bemol
#define g3 196   // Sol 3
#define g3s 207  // Sol 3 sustenido

#define a3b 207  // Lá 3 bemol
#define a3 220   // Lá 3
#define a3s 233  // Lá 3 sustenido

#define b3b 233  // Si 3 bemol
#define b3 246   // Si 3

#define c4 261   // Dó 4
#define c4s 277  // Dó 4 sustenido

#define d4b 277  // Ré 4 bemol
#define d4 293   // Ré 4
#define d4s 311  // Ré 4 sustenido

#define e4b 311  // Mi 4 bemol
#define e4 329   // Mi 4

#define f4 349   // Fá 4
#define f4s 369  // Fá 4 sustenido

#define g4b 369  // Sol 4 bemol
#define g4 392   // Sol 4
#define g4s 415  // Sol 4 sustenido

#define a4b 415  // Lá 4 bemol
#define a4 440   // Lá 4
#define a4s 466  // Lá 4 sustenido

#define b4b 466  // Si 4 bemol
#define b4 493   // Si 4

#define c5 523   // Dó 5
#define c5s 554  // Dó 5 sustenido

#define d5b 554  // Ré 5 bemol
#define d5 587   // Ré 5
#define d5s 622  // Ré 5 sustenido

#define e5b 622  // Mi 5 bemol
#define e5 659   // Mi 5

#define f5 698   // Fá 5
#define f5s 739  // Fá 5 sustenido

#define g5b 739  // Sol 5 bemol
#define g5 783   // Sol 5
#define g5s 830  // Sol 5 sustenido

#define a5b 830  // Lá 5 bemol
#define a5 880   // Lá 5
#define a5s 932  // Lá 5 sustenido

#define b5b 932  // Si 5 bemol
#define b5 987   // Si 5

// Tempo das notas:

#define sb 4000   // semibreve
#define sbp 6000  // semibreve pontuada
#define m 2000    // mínima
#define mp 3000   // mínima pontuada
#define sm 1000   // semímina
#define smp 1500  // semínima pontuada
#define c 500     // colcheia
#define cp 750    // colcheia pontuada
#define sc 250    // semicolcheia

// Tempo das pausa:

#define psb 4000   // pausa de semibreve
#define psbp 6000  // pausa de semibreve pontuada
#define pm 2000    // pausa de mínima
#define pmp 3000   // pausa de mínima pontuada
#define psm 1000   // pausa de semímina
#define psmp 1500  // pausa de semínima pontuada
#define pc 500     // pausa de colcheia
#define pcp 750    // pausa de colcheia pontuada
#define psc 250    // pausa de semicolcheia

// Outros tempos:

int vp = 1; // fator de tempo
#define f 500 // fermata
float t = 2/3; // tercina
