-[ModelKeyServerAPIFetchKeyResponse setSuccess:]
void __cdecl -[ModelKeyServerAPIFetchKeyResponse setSuccess:](ModelKeyServerAPIFetchKeyResponse *self, SEL a2, id a3)
{
  ModelKeyServerAPIFetchKeyResult *v4; // x20
  ModelKeyServerAPIFetchKeyResult *success; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (ModelKeyServerAPIFetchKeyResult *)objc_retain(a3);
  -[ModelKeyServerAPIFetchKeyResponse clearOneofValuesForResult](self, "clearOneofValuesForResult");
  *(_BYTE *)&self->_has |= 1u;
  self->_result = 1;
  success = self->_success;
  self->_success = v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(success);
}