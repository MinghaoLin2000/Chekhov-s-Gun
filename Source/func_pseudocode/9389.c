-[TSPZipFileWriteChannel close]
void __cdecl -[TSPZipFileWriteChannel close](TSPZipFileWriteChannel *self, SEL a2)
{
  atomic_store(1u, (unsigned __int8 *)&self->_isClosed);
}