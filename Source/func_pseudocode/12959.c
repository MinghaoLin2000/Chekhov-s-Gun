-[TSUBufferedReadChannel setLowWater:]
void __cdecl -[TSUBufferedReadChannel setLowWater:](TSUBufferedReadChannel *self, SEL a2, unsigned __int64 a3)
{
  -[TSUReadChannel setLowWater:](self->_sourceReadChannel, "setLowWater:", a3);
}