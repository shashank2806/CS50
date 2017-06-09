#include <stdio.h>
#include <stdint.h>

int main(int argc, char* argv[])
{
    //ensure proper usage.
    if (argc != 2)
    {
        fprintf(stderr,"usage: ./recover infile\n");
        return 1;
    }
    
    char *infile = argv[1];
    
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 1;
    }
    int counter = 0;
    uint8_t buffer[512];
    fread(buffer,512,1,inptr);
    if(buffer[0]==0xff&&buffer[1]==0xd8
        &&buffer[2]==0xff)
   
    {
        char file[8];
        sprintf(file,"%03i.jpg",counter);
        FILE *img = fopen(file,"w");
        fwrite(buffer,512,1,img);
        counter++;
        fclose(inptr);
        fclose(img);
    }
    

}