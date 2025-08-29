-[TSPPackageWriterComponentWriteChannel close]
void __cdecl -[TSPPackageWriterComponentWriteChannel close](TSPPackageWriterComponentWriteChannel *self, SEL a2)
{
  atomic_store(1u, (unsigned __int8 *)&self->_isClosed);
}