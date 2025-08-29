-[TSUZipReadChannel isValid]
bool __cdecl -[TSUZipReadChannel isValid](TSUZipReadChannel *self, SEL a2)
{
  return (unsigned __int8)-[TSUReadChannel isValid](self->_archiveReadChannel, "isValid");
}