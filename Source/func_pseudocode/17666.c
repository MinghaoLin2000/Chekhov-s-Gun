-[ModelKeyServerAPIFetchKeyResult copyTo:]
void __cdecl -[ModelKeyServerAPIFetchKeyResult copyTo:](ModelKeyServerAPIFetchKeyResult *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
  {
    *((_DWORD *)v4 + 2) = self->_key;
    *((_BYTE *)v4 + 56) |= 1u;
  }
  if ( self->_keyId )
    objc_msgSend(v4, "setKeyId:");
  if ( self->_modelName )
    objc_msgSend(v5, "setModelName:");
  if ( self->_teamId )
    objc_msgSend(v5, "setTeamId:");
  if ( self->_signedKey )
    objc_msgSend(v5, "setSignedKey:");
  if ( self->_rawKey )
    objc_msgSend(v5, "setRawKey:");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}