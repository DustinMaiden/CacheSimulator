//Dustin Maiden
//Part 1 Cache2Dcols.c
//Simple iteration over 3000 x 500 size 2D array

int array[3000][500];

int main(){

     int i,j;
     for (i = 0; i < 500; i++){
	 for (j = 0; j < 3000; j++){
		array[j][i] = j + i;
         }
     }
return 0;
}

