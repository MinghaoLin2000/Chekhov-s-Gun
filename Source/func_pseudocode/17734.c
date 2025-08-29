-[ModelKeyServerAPIRawKey writeTo:]
void __cdecl -[ModelKeyServerAPIRawKey writeTo:](ModelKeyServerAPIRawKey *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  NSData *encryptionKey; // x1
  NSData *encryptionIv; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  encryptionKey = self->_encryptionKey;
  if ( encryptionKey )
    PBDataWriterWriteDataField(v4, encryptionKey, 1LL);
  encryptionIv = self->_encryptionIv;
  if ( encryptionIv )
    PBDataWriterWriteDataField(v5, encryptionIv, 2LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}