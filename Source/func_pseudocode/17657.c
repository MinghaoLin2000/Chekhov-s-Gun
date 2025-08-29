-[ModelKeyServerAPIFetchKeyResult hasKey]
bool __cdecl -[ModelKeyServerAPIFetchKeyResult hasKey](ModelKeyServerAPIFetchKeyResult *self, SEL a2)
{
  return *(_BYTE *)&self->_has & 1;
}