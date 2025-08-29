-[ModelKeyServerAPIFetchKeyResponse copyTo:]
void __cdecl -[ModelKeyServerAPIFetchKeyResponse copyTo:](ModelKeyServerAPIFetchKeyResponse *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
  {
    *((_DWORD *)v4 + 4) = self->_result;
    *((_BYTE *)v4 + 32) |= 1u;
  }
  if ( self->_success )
    objc_msgSend(v4, "setSuccess:");
  if ( self->_error )
    objc_msgSend(v5, "setError:");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}