-[ModelKeyServerAPIFetchKeyRequest copyTo:]
void __cdecl -[ModelKeyServerAPIFetchKeyRequest copyTo:](ModelKeyServerAPIFetchKeyRequest *self, SEL a2, id a3)
{
  _BYTE *v4; // x0
  _BYTE *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( self->_keyId )
    objc_msgSend(v4, "setKeyId:");
  if ( self->_teamId )
    objc_msgSend(v5, "setTeamId:");
  if ( self->_signedKeyRequest )
    objc_msgSend(v5, "setSignedKeyRequest:");
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
  {
    v5[32] = self->_rawRequest;
    v5[36] |= 1u;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}