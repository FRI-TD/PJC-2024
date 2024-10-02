#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct student{
  char *ime;
  char *id;

  int stOcen;
  int ocene[10];

  struct student *next;
} student;


student* novStudent(char *ime, char *id) {
  student *nov = (student *) malloc(sizeof(student));

  nov->ime = malloc(strlen(ime)+1);
  strcpy(nov->ime, ime);

  //nov->id = strdup(id);
  nov->id = malloc(strlen(id)+1);
  strcpy(nov->id, id);

  nov->stOcen = 0;

  nov -> next = NULL;

  return nov;
}

void dodajOceno(student *s, int ocena) {
  if (s->stOcen < 10) 
	s -> ocene[s->stOcen++] = ocena;
}



void izpisiStudenta(student *s) {
  printf("Ime: %-10s id: %s%s", s->ime, s->id, (s->stOcen > 0) ? ", ocene: [" : "\n");
  for (int i=0; i < s->stOcen; i++) 
	printf("%d%s", s->ocene[i], (i == s->stOcen-1) ? "]\n" : ",");
}

void izpisiSeznam(student *z) {
  while (z != NULL) {
    izpisiStudenta(z);
    z = z->next;
  } 
}

// dodaj element na zacetek seznama
// z ... prejsnji zacetek
// nov ... nov element, ki ga vstavim na zacetek seznama
// funkcija vrne kazalec na zacetek seznama
student* dodajZ(student *z, student *nov) {
  nov->next = z;
  return nov;
}

student* dodajK(student *z, student *nov) {
  if (z == NULL) return nov;

  student *t = z;
  // "sprehodim" se po seznamu, dokler ne pridem do 
  // elementa, katerega next kaze na NULL
  while (t->next != NULL)
	t = t->next;

  t->next = nov;
  return z;
}

student* dodajU(student *z, student *nov) {
  // seznam je prazen ali pa nov element sodi na zacetek
  if (z == NULL || strcmp(nov->ime, z->ime) < 0) {
	nov -> next = z;
	return nov;
  }  
 
  student *t = z;
  while (t->next != NULL && strcmp(t->next->ime, nov->ime)<0)
	t = t->next;

  nov->next = t->next;
  t->next = nov;
  return z;
}

// pobrise ves pomnilnik, ki ga je zasedal student in vrne kazalec na naslednjega studenta
student* freeStudent(student *del) {
  student *n = del->next;
  free(del->ime);
  free(del->id);
  free(del);
  return n;  
}

student* brisi(student *z, char *ime) {
  if (z == NULL) return NULL;
  if (strcmp(z->ime, ime)==0) {
	return freeStudent(z);
  }

  student *t = z;
  while (t->next != NULL && strcmp(t->next->ime, ime)!=0)
	t = t->next;

  if (t->next != NULL) 
    t->next = freeStudent(t->next);
  
  return z;
}

int main() {
  student *s1 = novStudent("B", "63240001");
  dodajOceno(s1, 10);dodajOceno(s1, 8);

  student *s2 = novStudent("D", "63240002");
  student *s3 = novStudent("A",  "63240003");
  student *s4 = novStudent("E",   "63240004");
  student *s5 = novStudent("C", "63240005");


  // kazalec na zacetek seznama
  student *z = NULL;
  z = dodajU(z, s1); 
  z = dodajU(z, s2); 
  z = dodajU(z, s3); 
  z = dodajU(z, s4); 
  z = dodajU(z, s5); 

  z = brisi(z, "B");
  z = brisi(z, "Z");
  z = brisi(z, "A");
  z = brisi(z, "E");

  izpisiSeznam(z);
}
