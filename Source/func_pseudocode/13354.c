-[TSUZipWriter writeZip64EndOfCentralDirectoryLocatorWithOffset:]
void __cdecl -[TSUZipWriter writeZip64EndOfCentralDirectoryLocatorWithOffset:](
        TSUZipWriter *self,
        SEL a2,
        signed __int64 a3)
{
  _DWORD *v5; // x0
  dispatch_data_t v6; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = malloc_type_malloc(0x14uLL, 0xCBC617B6uLL);
  *v5 = 117853008;
  v5[1] = 0;
  *((_QWORD *)v5 + 1) = a3;
  v5[4] = 1;
  v6 = dispatch_data_create(v5, 0x14uLL, 0LL, _dispatch_data_destructor_free);
  -[TSUZipWriter writeData:](self, "writeData:", v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}