-[iAUPServer setParserState:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[iAUPServer setParserState:](iAUPServer *self, SEL a2, int a3)
{
  __int64 v3; // x19
  int v5; // w0

  v3 = *(_QWORD *)&a3;
  v5 = -[iAUPServer parserState](self, "parserState");
  if ( (int)v3 < 1 || v5 <= 0 )
    NSLog(
      &CFSTR("[Parser State]: %s -> %s").isa,
      -[iAUPServer parserStateString:](self, "parserStateString:", (unsigned int)self->_parserState),
      -[iAUPServer parserStateString:](self, "parserStateString:", v3));
  self->_parserState = v3;
}