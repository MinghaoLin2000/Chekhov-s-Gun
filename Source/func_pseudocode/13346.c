-[TSUZipWriter setEntryInsertionOffsetImpl:]
void __cdecl -[TSUZipWriter setEntryInsertionOffsetImpl:](TSUZipWriter *self, SEL a2, signed __int64 a3)
{
  self->_currentOffset = a3;
  self->_writtenOffset = a3;
}