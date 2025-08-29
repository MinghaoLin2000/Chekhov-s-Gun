-[ModelKeyServerAPIFetchKeyRequest setHasRawRequest:]
void __cdecl -[ModelKeyServerAPIFetchKeyRequest setHasRawRequest:](
        ModelKeyServerAPIFetchKeyRequest *self,
        SEL a2,
        bool a3)
{
  *(_BYTE *)&self->_has = *(_BYTE *)&self->_has & 0xFE | a3;
}