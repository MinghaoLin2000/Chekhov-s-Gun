-[TSUBufferedReadChannel addBarrier:]
void __cdecl -[TSUBufferedReadChannel addBarrier:](TSUBufferedReadChannel *self, SEL a2, id a3)
{
  -[TSUReadChannel addBarrier:](self->_sourceReadChannel, "addBarrier:", a3);
}