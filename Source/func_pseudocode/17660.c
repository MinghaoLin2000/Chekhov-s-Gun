-[ModelKeyServerAPIFetchKeyResult clearOneofValuesForKey]
void __cdecl -[ModelKeyServerAPIFetchKeyResult clearOneofValuesForKey](ModelKeyServerAPIFetchKeyResult *self, SEL a2)
{
  ModelKeyServerAPISignedKey *signedKey; // x0
  ModelKeyServerAPIRawKey *rawKey; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  *(_BYTE *)&self->_has &= ~1u;
  self->_key = 0;
  signedKey = self->_signedKey;
  self->_signedKey = 0LL;
  objc_release(signedKey);
  rawKey = self->_rawKey;
  self->_rawKey = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(rawKey);
}