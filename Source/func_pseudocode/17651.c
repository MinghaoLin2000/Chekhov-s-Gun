-[ModelKeyServerAPIFetchKeyResult setSignedKey:]
void __cdecl -[ModelKeyServerAPIFetchKeyResult setSignedKey:](ModelKeyServerAPIFetchKeyResult *self, SEL a2, id a3)
{
  ModelKeyServerAPISignedKey *v4; // x20
  ModelKeyServerAPISignedKey *signedKey; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (ModelKeyServerAPISignedKey *)objc_retain(a3);
  -[ModelKeyServerAPIFetchKeyResult clearOneofValuesForKey](self, "clearOneofValuesForKey");
  *(_BYTE *)&self->_has |= 1u;
  self->_key = 1;
  signedKey = self->_signedKey;
  self->_signedKey = v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(signedKey);
}