/*Rafay Khan | 023868 | ICP Coursework*/

#include <stdio.h>
#include <string.h>

typedef struct {			/*Making coordinate struct*/
char pt[20];
int x;
int y;
} coordinate_n;

void print_coordinate(char [], coordinate_n); 	/*Function to print*/

int main() {			/*Main() function*/
	
	int i=a[1,2,3,4,5,6];
	
coordinate_n coordinate1={"Point S",1,1},coordinate2,coordinate3,coordinate4,coordinate5,coordinate6;		/*Coordinate S*/

	strcpy(coordinate2.pt, "Point Two"); 	/*Coordinate 2*/
	coordinate2.x = 2;
	coordinate2.y = 2;

	strcpy(coordinate3.pt, "Point Three");	/*Coordinate 3*/
	coordinate3.x = 2;
	coordinate3.y = 3;

	strcpy(coordinate4.pt, "Point Four");	/*Coordinate 4*/
	coordinate4.x = 3;
	coordinate4.y = 4;

	strcpy(coordinate5.pt, "Point Five");	/*Coordinate 5*/
	coordinate5.x = 4;
	coordinate5.y = 3;

	strcpy(coordinate6.pt, "Point Six");	/*Coordinate 6*/
	coordinate6.x = 4;
	coordinate6.y = 2;

	print_coordinate("1", coordinate1);		/*Headers*/
	print_coordinate("2", coordinate2);
	print_coordinate("3", coordinate3);
	print_coordinate("4", coordinate4);
	print_coordinate("5", coordinate5);
	print_coordinate("6", coordinate6);

	for (i=6 ; i>=1 ; i--)
		printf("%d ", a[i]);
	

return 0;
}
		  
void print_coordinate(char header[], coordinate_n coordinate) {		/*Prints Coordinate System*/
printf("%s: <%d,%d>\n", header, coordinate.x, coordinate.y);
}
