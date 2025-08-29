-[ModelKeyServerAPIFetchKeyResponse writeTo:]
void __cdecl -[ModelKeyServerAPIFetchKeyResponse writeTo:](ModelKeyServerAPIFetchKeyResponse *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  ModelKeyServerAPIFetchKeyResult *success; // x1
  ModelKeyServerAPIResultError *error; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  success = self->_success;
  if ( success )
    PBDataWriterWriteSubmessage(v4, success, 1LL);
  error = self->_error;
  if ( error )
    PBDataWriterWriteSubmessage(v5, error, 2LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}