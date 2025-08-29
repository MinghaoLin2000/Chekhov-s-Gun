-[ModelKeyServerAPIFetchKeyResult writeTo:]
void __cdecl -[ModelKeyServerAPIFetchKeyResult writeTo:](ModelKeyServerAPIFetchKeyResult *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  NSString *keyId; // x1
  NSString *modelName; // x1
  NSString *teamId; // x1
  ModelKeyServerAPISignedKey *signedKey; // x1
  ModelKeyServerAPIRawKey *rawKey; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  keyId = self->_keyId;
  if ( keyId )
    PBDataWriterWriteStringField(v4, keyId, 1LL);
  modelName = self->_modelName;
  if ( modelName )
    PBDataWriterWriteStringField(v5, modelName, 2LL);
  teamId = self->_teamId;
  if ( teamId )
    PBDataWriterWriteStringField(v5, teamId, 3LL);
  signedKey = self->_signedKey;
  if ( signedKey )
    PBDataWriterWriteSubmessage(v5, signedKey, 4LL);
  rawKey = self->_rawKey;
  if ( rawKey )
    PBDataWriterWriteSubmessage(v5, rawKey, 5LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}