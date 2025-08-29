-[TSUZipWriter writeEndOfCentralDirectoryDataWithOffset:size:entryCount:]
void __cdecl -[TSUZipWriter writeEndOfCentralDirectoryDataWithOffset:size:entryCount:](
        TSUZipWriter *self,
        SEL a2,
        signed __int64 a3,
        signed __int64 a4,
        unsigned __int64 a5)
{
  __int16 v5; // w22
  int v6; // w21
  int v7; // w20
  int v9; // w26
  int v10; // w25
  int v11; // w24
  signed __int64 currentOffset; // x23
  _WORD *v13; // x0
  __int16 v14; // w8
  int v15; // w8
  int v16; // w9
  dispatch_data_t v17; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5 = a5;
  v6 = a4;
  v7 = a3;
  if ( a5 > 0xFFFE )
    v9 = 1;
  else
    v9 = (LOBYTE(self->_options) >> 2) & 1;
  if ( a4 > 4294967294LL )
    v10 = 1;
  else
    v10 = (LOBYTE(self->_options) >> 2) & 1;
  if ( a3 > 4294967294LL )
    v11 = 1;
  else
    v11 = (LOBYTE(self->_options) >> 2) & 1;
  if ( (v9 & 1) != 0 || (v10 & 1) != 0 || v11 )
  {
    currentOffset = self->_currentOffset;
    -[TSUZipWriter writeZip64EndOfCentralDirectoryWithOffset:size:entryCount:](
      self,
      "writeZip64EndOfCentralDirectoryWithOffset:size:entryCount:",
      a3,
      a4,
      a5);
    -[TSUZipWriter writeZip64EndOfCentralDirectoryLocatorWithOffset:](
      self,
      "writeZip64EndOfCentralDirectoryLocatorWithOffset:",
      currentOffset);
  }
  v13 = malloc_type_malloc(0x16uLL, 0x8C36F3DuLL);
  *(_QWORD *)v13 = 101010256LL;
  if ( v9 )
    v14 = -1;
  else
    v14 = v5;
  v13[4] = v14;
  v13[5] = v14;
  if ( v10 )
    v15 = -1;
  else
    v15 = v6;
  if ( v11 )
    v16 = -1;
  else
    v16 = v7;
  *((_DWORD *)v13 + 3) = v15;
  *((_DWORD *)v13 + 4) = v16;
  v13[10] = 0;
  v17 = dispatch_data_create(v13, 0x16uLL, 0LL, _dispatch_data_destructor_free);
  -[TSUZipWriter writeData:](self, "writeData:", v17);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v17);
}