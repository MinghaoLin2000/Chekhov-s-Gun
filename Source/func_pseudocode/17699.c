-[ModelKeyServerAPIFetchKeyResponse hash]
unsigned __int64 __cdecl -[ModelKeyServerAPIFetchKeyResponse hash](ModelKeyServerAPIFetchKeyResponse *self, SEL a2)
{
  __int64 v3; // x20
  unsigned __int64 v4; // x20

  if ( (*(_BYTE *)&self->_has & 1) != 0 )
    v3 = 2654435761LL * self->_result;
  else
    v3 = 0LL;
  v4 = -[ModelKeyServerAPIFetchKeyResult hash](self->_success, "hash") ^ v3;
  return v4 ^ -[ModelKeyServerAPIResultError hash](self->_error, "hash");
}