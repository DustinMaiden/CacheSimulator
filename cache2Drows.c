//Dustin Maiden
//Part 1 Cache2Drows.c
//Simple iteration over 3000 x 500 size 2D array
//array uses row major implementation

int array[3000][500];

int main(){

     int i,j;
     for (i = 0; i < 3000; i++){
	 for (j = 0; j < 500; j++){
		array[i][j] = i+j;
         }
     }
return 0;
}

