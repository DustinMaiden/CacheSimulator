//Dustin Maiden
//Part 1 Cache1D.c
//Simple iteration over 100000 size array
//array should be declared in Data segment

int array[100000];

int main(){

     int i;
     for (i = 0; i < 100000; i++){
	 array[i] = i;
     }

return 0;
}

