-[ModelKeyServerAPIFetchKeyResponse setError:]
void __cdecl -[ModelKeyServerAPIFetchKeyResponse setError:](ModelKeyServerAPIFetchKeyResponse *self, SEL a2, id a3)
{
  ModelKeyServerAPIResultError *v4; // x20
  ModelKeyServerAPIResultError *error; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (ModelKeyServerAPIResultError *)objc_retain(a3);
  -[ModelKeyServerAPIFetchKeyResponse clearOneofValuesForResult](self, "clearOneofValuesForResult");
  *(_BYTE *)&self->_has |= 1u;
  self->_result = 2;
  error = self->_error;
  self->_error = v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(error);
}