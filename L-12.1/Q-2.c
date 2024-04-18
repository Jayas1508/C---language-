#include<stdio.h>
#include<string.h>

	struct Student {
	int id;
	char name[20];
	int age;
	char course[20];
	char city[20];
	int standard;
	char school[20];
		};
void main()
{
struct Student s;
struct Student s1;
struct Student s2;
 
	printf("Enter id: ");
	scanf("%d",&s.id);
	printf("Enter name : ");
	scanf("%s",&s.name);
	printf("Enter age ");
	scanf("%d",&s.age);
	printf("Enter course: ");
	scanf("%s",&s.course);
	printf("Enter city: ");
	scanf("%s",&s.city);
	printf("Enter standard: ");
	scanf("%d",&s.standard);
	printf("Enter school: ");
	scanf("%s",&s.school);

	printf("\n\n");
	printf("Enter id: ");
	scanf("%d",&s1.id);
	printf("Enter name : ");
	scanf("%s",&s1.name);
	printf("Enter age ");
	scanf("%d",&s1.age);
	printf("Enter course: ");
	scanf("%s",&s1.course);
	printf("Enter city: ");
	scanf("%s",&s1.city);
	printf("Enter standard: ");
	scanf("%d",&s1.standard);
	printf("Enter school: ");
	scanf("%s",&s1.school);

	printf("\n\n");
	printf("Enter id: ");
	scanf("%d",&s2.id);
	printf("Enter name : ");
	scanf("%s",&s2.name);
	printf("Enter age ");
	scanf("%d",&s2.age);
	printf("Enter course: ");
	scanf("%s",&s2.course);
	printf("Enter city: ");
	scanf("%s",&s2.city);
	printf("Enter standard: ");
	scanf("%d",&s2.standard);
	printf("Enter school: ");
	scanf("%s",&s2.school);

	printf("\n");
	
	printf("id is  : %d\n",s.id);
	printf("Name is : %s\n",s.name);
	printf("age is  : %d\n",s.age);
	printf("course is   : %s\n",s.course);
	printf("city name is  : %s\n",s.city);
	printf("standard is  : %d\n",s.standard);
	printf("school is  : %s\n",s.school);
	
		printf("\n");
	
	printf("id is  : %d\n",s1.id);
	printf("Name is : %s\n",s1.name);
	printf("age is  : %d\n",s1.age);
	printf("course is   : %s\n",s1.course);
	printf("city name is  : %s\n",s1.city);
	printf("standard is  : %d\n",s1.standard);
	printf("school is  : %s\n",s1.school);
	
		printf("\n");
	
	printf("id is  : %d\n",s2.id);
	printf("Name is : %s\n",s2.name);
	printf("age is  : %d\n",s2.age);
	printf("course is   : %s\n",s2.course);
	printf("city name is  : %s\n",s2.city);
	printf("standard is  : %d\n",s2.standard);
	printf("school is  : %s\n",s2.school);

} 