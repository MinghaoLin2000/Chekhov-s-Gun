-[TSPCryptoComponentWriteChannel close]
void __cdecl -[TSPCryptoComponentWriteChannel close](TSPCryptoComponentWriteChannel *self, SEL a2)
{
  TSPCryptoComponentWriteChannel *v2; // x19
  TSPComponentWriteChannel *writeChannel; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  objc_sync_enter(v2);
  if ( v2->_writeChannel )
  {
    -[TSPCryptoComponentWriteChannel _finalizeBlockForClosing:](v2, "_finalizeBlockForClosing:", 1LL);
    -[TSPComponentWriteChannel close](v2->_writeChannel, "close");
    writeChannel = v2->_writeChannel;
    v2->_writeChannel = 0LL;
    objc_release(writeChannel);
  }
  objc_sync_exit(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}