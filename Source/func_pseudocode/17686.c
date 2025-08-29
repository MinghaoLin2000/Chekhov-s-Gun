-[ModelKeyServerAPIFetchKeyResponse setHasResult:]
void __cdecl -[ModelKeyServerAPIFetchKeyResponse setHasResult:](
        ModelKeyServerAPIFetchKeyResponse *self,
        SEL a2,
        bool a3)
{
  *(_BYTE *)&self->_has = *(_BYTE *)&self->_has & 0xFE | a3;
}