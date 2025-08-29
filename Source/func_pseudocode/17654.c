-[ModelKeyServerAPIFetchKeyResult key]
int __cdecl -[ModelKeyServerAPIFetchKeyResult key](ModelKeyServerAPIFetchKeyResult *self, SEL a2)
{
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
    return self->_key;
  else
    return 0;
}