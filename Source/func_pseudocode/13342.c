-[TSUZipWriter writeEntryWithName:force32BitSize:fromReadChannel:completion:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[TSUZipWriter writeEntryWithName:force32BitSize:fromReadChannel:completion:](
        TSUZipWriter *self,
        SEL a2,
        id a3,
        bool a4,
        id a5,
        id a6)
{
  -[TSUZipWriter writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:completion:](
    self,
    "writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:completion:",
    a3,
    a4,
    0LL,
    0LL,
    0LL,
    a5,
    a6);
}