-[ModelKeyServerAPIFetchKeyRequest writeTo:]
void __cdecl -[ModelKeyServerAPIFetchKeyRequest writeTo:](ModelKeyServerAPIFetchKeyRequest *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  NSString *keyId; // x1
  NSString *teamId; // x1
  NSData *signedKeyRequest; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  keyId = self->_keyId;
  if ( keyId )
    PBDataWriterWriteStringField(v4, keyId, 1LL);
  teamId = self->_teamId;
  if ( teamId )
    PBDataWriterWriteStringField(v5, teamId, 2LL);
  signedKeyRequest = self->_signedKeyRequest;
  if ( signedKeyRequest )
    PBDataWriterWriteDataField(v5, signedKeyRequest, 3LL);
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
    PBDataWriterWriteBOOLField(v5, self->_rawRequest, 4LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}