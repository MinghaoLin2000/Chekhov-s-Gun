-[ModelKeyServerAPIFetchKeyResponse hasResult]
bool __cdecl -[ModelKeyServerAPIFetchKeyResponse hasResult](ModelKeyServerAPIFetchKeyResponse *self, SEL a2)
{
  return *(_BYTE *)&self->_has & 1;
}