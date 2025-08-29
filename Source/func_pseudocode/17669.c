-[ModelKeyServerAPIFetchKeyResult hash]
unsigned __int64 __cdecl -[ModelKeyServerAPIFetchKeyResult hash](ModelKeyServerAPIFetchKeyResult *self, SEL a2)
{
  __int64 v3; // x20
  unsigned __int64 v4; // x21
  NSUInteger v5; // x20
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x20

  if ( (*(_BYTE *)&self->_has & 1) != 0 )
    v3 = 2654435761LL * self->_key;
  else
    v3 = 0LL;
  v4 = -[NSString hash](self->_keyId, "hash") ^ v3;
  v5 = -[NSString hash](self->_modelName, "hash");
  v6 = v4 ^ v5 ^ -[NSString hash](self->_teamId, "hash");
  v7 = -[ModelKeyServerAPISignedKey hash](self->_signedKey, "hash");
  return v6 ^ v7 ^ -[ModelKeyServerAPIRawKey hash](self->_rawKey, "hash");
}