-[ModelKeyServerAPIFetchKeyRequest hash]
unsigned __int64 __cdecl -[ModelKeyServerAPIFetchKeyRequest hash](ModelKeyServerAPIFetchKeyRequest *self, SEL a2)
{
  NSUInteger v3; // x19
  NSUInteger v4; // x21
  unsigned __int64 v5; // x0
  __int64 v6; // x8

  v3 = -[NSString hash](self->_keyId, "hash");
  v4 = -[NSString hash](self->_teamId, "hash");
  v5 = (unsigned __int64)-[NSData hash](self->_signedKeyRequest, "hash");
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
    v6 = 2654435761LL * self->_rawRequest;
  else
    v6 = 0LL;
  return v4 ^ v3 ^ v5 ^ v6;
}