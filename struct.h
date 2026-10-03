#ifndef STRUCT_H
#define STRUCT_H

typedef struct node{
	int bid;
	char bname[30];
	char bauthor[30];
	int bq;
	struct node* next;
}st;
typedef struct user{
	int userid,bookid;
	char name[30];
	typedef struct Date {
  	  int day;
   	  int month;
    	  int year;
	}date;

}user;
int id;
#endif
