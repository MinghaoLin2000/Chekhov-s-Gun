-[ModelKeyServerAPIFetchKeyRequest setRawRequest:]
void __cdecl -[ModelKeyServerAPIFetchKeyRequest setRawRequest:](
        ModelKeyServerAPIFetchKeyRequest *self,
        SEL a2,
        bool a3)
{
  *(_BYTE *)&self->_has |= 1u;
  self->_rawRequest = a3;
}