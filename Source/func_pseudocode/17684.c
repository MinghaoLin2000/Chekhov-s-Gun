-[ModelKeyServerAPIFetchKeyResponse result]
int __cdecl -[ModelKeyServerAPIFetchKeyResponse result](ModelKeyServerAPIFetchKeyResponse *self, SEL a2)
{
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
    return self->_result;
  else
    return 0;
}