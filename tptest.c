#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

struct logement{
    int accomodates;
    int bedrooms;
    int bathrooms;
    int beds;
    int price;  
    int minimum_nights;
    float maximum_nights;
    int number_of_reviews;
};

void read_csv(char* filename){
	FILE *fileStream;
	fileStream = fopen(filename, "r");
	if(!fileStream){
		printf("Erreur d'ouverture du fichier");
	}else{

		char buffer[1024];
 
        int row = 0;
        int column = 0;
 
        //while (fgets(buffer, 170, fileStream)) {
		for(int i=1;i<=6;i++){
			fgets(buffer,1024,fileStream);        
			column = 0;
            row++;

            // To avoid printing of column
            // names in file can be changed
            // according to need
            if (row == 1)
                continue;
 
            // Splitting the data
            char* value = strtok(buffer, ", ");
 
            while (value) {

                // Column 1
                if (column == 0) {
                    printf("Index :");
                }
 
                // Column 2
                if (column == 1) {
                    printf("\tAccomodates:");
                }
 
                // Column 3
                if (column == 2) {
                    printf("\tBedrooms:");
                }

				if (column == 3) {
                    printf("\tBathrooms:");
                }

				if (column == 4) {
                    printf("\tBeds:");
                }

				if (column == 5) {
                    printf("\tPrice:");
                }

				if (column == 6) {
                    printf("\tMinimum_nights:");
                }

				if (column == 7) {
                    printf("\tMaximum nights:");
                }

				if (column == 8) {
                    printf("\tNumber of reviews:");
                }
 
                printf("%s", value);
                value = strtok(NULL, ", ");
                column++;
            }
 
            printf("\n");
        }
 
        // Close the file
        fclose(fileStream);
	}
}

int main(int argc, char* argv[]){
    struct logement LogementX;

    LogementX.accomodates=3;
    LogementX.bedrooms=2.0;
    LogementX.bathrooms=1.0;
    LogementX.beds=1.0;
    LogementX.price=67.0;
    LogementX.minimum_nights=0,4;
    LogementX.maximum_nights=180;
    LogementX.number_of_reviews=95;

	char* filename = "csv/airbnb_donnees_propre.csv";
	read_csv(filename);
    
	// return 0;
}