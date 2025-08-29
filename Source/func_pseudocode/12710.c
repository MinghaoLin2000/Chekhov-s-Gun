-[TSUZipFileWriter truncateToOffsetImpl:completion:]
void __cdecl -[TSUZipFileWriter truncateToOffsetImpl:completion:](
        TSUZipFileWriter *self,
        SEL a2,
        signed __int64 a3,
        id a4)
{
  -[TSURandomWriteChannel truncateToLength:completion:](self->_writeChannel, "truncateToLength:completion:", a3, a4);
}