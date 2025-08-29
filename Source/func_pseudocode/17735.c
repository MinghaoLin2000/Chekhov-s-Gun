-[ModelKeyServerAPIRawKey copyTo:]
void __cdecl -[ModelKeyServerAPIRawKey copyTo:](ModelKeyServerAPIRawKey *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( self->_encryptionKey )
    objc_msgSend(v4, "setEncryptionKey:");
  if ( self->_encryptionIv )
    objc_msgSend(v5, "setEncryptionIv:");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}