-[ModelKeyServerAPIFetchKeyResponse clearOneofValuesForResult]
void __cdecl -[ModelKeyServerAPIFetchKeyResponse clearOneofValuesForResult](
        ModelKeyServerAPIFetchKeyResponse *self,
        SEL a2)
{
  ModelKeyServerAPIFetchKeyResult *success; // x0
  ModelKeyServerAPIResultError *error; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  *(_BYTE *)&self->_has &= ~1u;
  self->_result = 0;
  success = self->_success;
  self->_success = 0LL;
  objc_release(success);
  error = self->_error;
  self->_error = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(error);
}