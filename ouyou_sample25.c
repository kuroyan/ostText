#include<stdio.h>

typedef struct{
  const char *name;
  int age;
}STUDENT;
typedef struct{
  char nen;
  char kumi;
  const char *teacher;
  STUDENT student[2];
}CLASS;

void disp(CLASS* pc) {
  printf("%c-%c %s\n", pc->nen, pc->kumi, pc->teacher);
  printf("%s %d\n", pc->student[0].name, pc->student[0].age);
  printf("%s %d\n", pc->student[1].name, pc->student[1].age);
}

int main(void) {
  CLASS c3b = {'3', 'B', "Sakamoto"};
  STUDENT st1 = {"Katou", 15};
  STUDENT st2 = {"Matsuura", 15};
  c3b.student[0] = st1;
  c3b.student[1] = st2;
  disp(&c3b);
  return 0;
}
