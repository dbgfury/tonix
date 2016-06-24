

void kernel_entry(void* mbd, unsigned int magic)
{
    unsigned char *videoram = (unsigned char *) 0xb8000;
    char str[]="hello world";
    int i;

    if ( magic != 0x2BADB002 ) {
    }

    for (i=0; i < sizeof(str); ++i) {
        videoram[i*2] = str[i];
        videoram[1] = 0x07;
    }
}
