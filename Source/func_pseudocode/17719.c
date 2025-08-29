-[ModelKeyServerAPIFetchKeyRequest mergeFrom:]
void __cdecl -[ModelKeyServerAPIFetchKeyRequest mergeFrom:](ModelKeyServerAPIFetchKeyRequest *self, SEL a2, id a3)
{
  id v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( *((_QWORD *)v4 + 1) )
    -[ModelKeyServerAPIFetchKeyRequest setKeyId:](self, "setKeyId:");
  if ( *((_QWORD *)v4 + 3) )
    -[ModelKeyServerAPIFetchKeyRequest setTeamId:](self, "setTeamId:");
  if ( *((_QWORD *)v4 + 2) )
    -[ModelKeyServerAPIFetchKeyRequest setSignedKeyRequest:](self, "setSignedKeyRequest:");
  if ( (*((_BYTE *)v4 + 36) & 1) != 0 )
  {
    self->_rawRequest = *((_BYTE *)v4 + 32);
    *(_BYTE *)&self->_has |= 1u;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}