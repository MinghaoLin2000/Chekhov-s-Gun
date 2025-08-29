-[ModelKeyServerAPIFetchKeyResult setKey:]
void __cdecl -[ModelKeyServerAPIFetchKeyResult setKey:](ModelKeyServerAPIFetchKeyResult *self, SEL a2, int a3)
{
  *(_BYTE *)&self->_has |= 1u;
  self->_key = a3;
}