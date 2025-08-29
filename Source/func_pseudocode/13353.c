-[TSUZipWriter writeZip64EndOfCentralDirectoryWithOffset:size:entryCount:]
void __cdecl -[TSUZipWriter writeZip64EndOfCentralDirectoryWithOffset:size:entryCount:](
        TSUZipWriter *self,
        SEL a2,
        signed __int64 a3,
        signed __int64 a4,
        unsigned __int64 a5)
{
  _QWORD *v9; // x0
  dispatch_data_t v10; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v9 = malloc_type_malloc(0x38uLL, 0xF650BC62uLL);
  *(_DWORD *)v9 = 101075792;
  *(_QWORD *)((char *)v9 + 4) = 44LL;
  v9[2] = 0LL;
  v9[3] = a5;
  *((_DWORD *)v9 + 3) = 1310782;
  v9[4] = a5;
  v9[5] = a4;
  v9[6] = a3;
  v10 = dispatch_data_create(v9, 0x38uLL, 0LL, _dispatch_data_destructor_free);
  -[TSUZipWriter writeData:](self, "writeData:", v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v10);
}