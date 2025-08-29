-[ModelKeyServerAPIFetchKeyResponse setResult:]
void __cdecl -[ModelKeyServerAPIFetchKeyResponse setResult:](ModelKeyServerAPIFetchKeyResponse *self, SEL a2, int a3)
{
  *(_BYTE *)&self->_has |= 1u;
  self->_result = a3;
}