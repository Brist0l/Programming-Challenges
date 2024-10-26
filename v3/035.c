#include<stdio.h>
#include<png.h>

#define PNG_BYTES_TO_CHECK	4


int check_if_png(char *file_name,FILE **fp);
int read_png(FILE *fp,int sig_read);

int main(){
	FILE **fp; // it can store the address of a pointer
	printf("%d\n",check_if_png("misc/img.png",fp));
}

int check_if_png(char *file_name,FILE **fp){
	char buf[PNG_BYTES_TO_CHECK];

	*fp = fopen(file_name,"rb"); // sets the pointer's(single pointer) address to fopen's value

	if(*fp == NULL)
		return 0; // 0 here is false 

	if(fread(buf,1,PNG_BYTES_TO_CHECK,*fp) != PNG_BYTES_TO_CHECK)
		return 0; 		    // function for reading binary stream
					    // it reads PNG_BYTES_TO_CHECK items of data each 1(char) byte 
					    // long from fp and stores it in buf
	
	//for(int i =0;i<=PNG_BYTES_TO_CHECK;i++)
	//	printf("%c\t%d\n",buf[i],buf[i]); // print out the ascii val as well as the decimal val
	printf("%s\n",PNG_LIBPNG_VER_STRING);	
	return png_check_sig(buf,PNG_BYTES_TO_CHECK) == 1;
}

int read_png(FILE *fp, int sig_read){
	png_structp png_ptr;
	png_infop info_ptr;
	png_uint_32 width,height;
	int bit_depth,color_type,interlace_type;
	
	png_ptr = png_create_read_struct(PNG_LIBPNG_VER_STRING,NULL,NULL,NULL);//creating and initialsing
									       //png_struct default error
									       //handling
	if(png_ptr == NULL){
		fclose(fp);
		return -1;
	}

	info_ptr = png_create_info_struct(png_ptr); // allocate the memory for img info
	if(info_ptr == NULL){
		fclose(fp);
		png_destroy_read_struct(&png_ptr,NULL,NULL);
		return -1;
	}

	if (setjmp(png_jmpbuf(png_ptr))){
       		png_destroy_write_struct(&png_ptr, &info_ptr);
       		fclose(fp);
       		return ERROR;
    	}
	
	png_init_io(png_ptr,fp);

}
