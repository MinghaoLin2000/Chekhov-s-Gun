-[ModelKeyServerAPIFetchKeyResult setRawKey:]
void __cdecl -[ModelKeyServerAPIFetchKeyResult setRawKey:](ModelKeyServerAPIFetchKeyResult *self, SEL a2, id a3)
{
  ModelKeyServerAPIRawKey *v4; // x20
  ModelKeyServerAPIRawKey *rawKey; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (ModelKeyServerAPIRawKey *)objc_retain(a3);
  -[ModelKeyServerAPIFetchKeyResult clearOneofValuesForKey](self, "clearOneofValuesForKey");
  *(_BYTE *)&self->_has |= 1u;
  self->_key = 2;
  rawKey = self->_rawKey;
  self->_rawKey = v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(rawKey);
}