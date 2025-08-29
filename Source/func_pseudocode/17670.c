-[ModelKeyServerAPIFetchKeyResult mergeFrom:]
void __cdecl -[ModelKeyServerAPIFetchKeyResult mergeFrom:](ModelKeyServerAPIFetchKeyResult *self, SEL a2, id a3)
{
  id v4; // x0
  _QWORD *v5; // x19
  ModelKeyServerAPISignedKey *signedKey; // x0
  __int64 v7; // x2
  ModelKeyServerAPIRawKey *rawKey; // x0
  __int64 v9; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( (*((_BYTE *)v4 + 56) & 1) != 0 )
  {
    self->_key = *((_DWORD *)v4 + 2);
    *(_BYTE *)&self->_has |= 1u;
  }
  if ( *((_QWORD *)v4 + 2) )
    -[ModelKeyServerAPIFetchKeyResult setKeyId:](self, "setKeyId:");
  if ( v5[3] )
    -[ModelKeyServerAPIFetchKeyResult setModelName:](self, "setModelName:");
  if ( v5[6] )
    -[ModelKeyServerAPIFetchKeyResult setTeamId:](self, "setTeamId:");
  signedKey = self->_signedKey;
  v7 = v5[5];
  if ( signedKey )
  {
    if ( v7 )
      -[ModelKeyServerAPISignedKey mergeFrom:](signedKey, "mergeFrom:");
  }
  else if ( v7 )
  {
    -[ModelKeyServerAPIFetchKeyResult setSignedKey:](self, "setSignedKey:");
  }
  rawKey = self->_rawKey;
  v9 = v5[4];
  if ( rawKey )
  {
    if ( v9 )
      -[ModelKeyServerAPIRawKey mergeFrom:](rawKey, "mergeFrom:");
  }
  else if ( v9 )
  {
    -[ModelKeyServerAPIFetchKeyResult setRawKey:](self, "setRawKey:");
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}