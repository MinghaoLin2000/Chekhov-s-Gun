-[PKNANDataSession invalidate]
void __cdecl -[PKNANDataSession invalidate](PKNANDataSession *self, SEL a2)
{
  WiFiAwareDataSession *dataSession; // x0
  WiFiAwareDataSession *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  dataSession = self->_dataSession;
  if ( dataSession )
  {
    -[WiFiAwareDataSession stop](dataSession, "stop");
    -[WiFiAwareDataSession setDelegate:](self->_dataSession, "setDelegate:", 0LL);
    v4 = self->_dataSession;
    self->_dataSession = 0LL;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v4);
  }
}