-[TSPZipFileWriteChannel addBarrier:]
void __cdecl -[TSPZipFileWriteChannel addBarrier:](TSPZipFileWriteChannel *self, SEL a2, id a3)
{
  -[TSUZipWriter addBarrier:](self->_archiveWriter, "addBarrier:", a3);
}