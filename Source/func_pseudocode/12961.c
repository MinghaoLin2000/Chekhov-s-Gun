-[TSUBufferedReadChannel isValid]
bool __cdecl -[TSUBufferedReadChannel isValid](TSUBufferedReadChannel *self, SEL a2)
{
  return (unsigned __int8)-[TSUReadChannel isValid](self->_sourceReadChannel, "isValid");
}