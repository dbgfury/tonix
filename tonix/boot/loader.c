

void 
kernel_entry(void* mbd, unsigned int magic) {
    unsigned char *video_ram = (unsigned char *) 0xb8000;
    char str[]="hello world";
    int i;

    if ( magic != 0x2BADB002 ) {
    }

    for (i=0; i < sizeof(str); ++i) {
        video_ram[i*2] = str[i];
        video_ram[1] = 0x07;
    }
}
