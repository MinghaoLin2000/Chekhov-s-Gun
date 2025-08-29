-[iAUPServer resetParser]
void __cdecl -[iAUPServer resetParser](iAUPServer *self, SEL a2)
{
  __int64 v3; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  self->_escapeInProgress = 0;
  -[NSMutableData setLength:](self->_telegramDataIn, "setLength:", 0LL);
  if ( self->_byteEscape )
    v3 = 4294967294LL;
  else
    v3 = 0xFFFFFFFFLL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[iAUPServer setParserState:](self, "setParserState:", v3);
}