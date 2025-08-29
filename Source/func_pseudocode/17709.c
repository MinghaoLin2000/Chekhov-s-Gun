-[ModelKeyServerAPIFetchKeyRequest hasRawRequest]
bool __cdecl -[ModelKeyServerAPIFetchKeyRequest hasRawRequest](ModelKeyServerAPIFetchKeyRequest *self, SEL a2)
{
  return *(_BYTE *)&self->_has & 1;
}