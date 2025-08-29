-[ModelKeyServerAPIFetchKeyResponse mergeFrom:]
void __cdecl -[ModelKeyServerAPIFetchKeyResponse mergeFrom:](ModelKeyServerAPIFetchKeyResponse *self, SEL a2, id a3)
{
  id v4; // x0
  _QWORD *v5; // x19
  ModelKeyServerAPIFetchKeyResult *success; // x0
  __int64 v7; // x2
  ModelKeyServerAPIResultError *error; // x0
  __int64 v9; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( (*((_BYTE *)v4 + 32) & 1) != 0 )
  {
    self->_result = *((_DWORD *)v4 + 4);
    *(_BYTE *)&self->_has |= 1u;
  }
  success = self->_success;
  v7 = v5[3];
  if ( success )
  {
    if ( v7 )
      -[ModelKeyServerAPIFetchKeyResult mergeFrom:](success, "mergeFrom:");
  }
  else if ( v7 )
  {
    -[ModelKeyServerAPIFetchKeyResponse setSuccess:](self, "setSuccess:");
  }
  error = self->_error;
  v9 = v5[1];
  if ( error )
  {
    if ( v9 )
      -[ModelKeyServerAPIResultError mergeFrom:](error, "mergeFrom:");
  }
  else if ( v9 )
  {
    -[ModelKeyServerAPIFetchKeyResponse setError:](self, "setError:");
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}