-[ModelKeyServerAPIFetchKeyResponse isEqual:]
bool __cdecl -[ModelKeyServerAPIFetchKeyResponse isEqual:](ModelKeyServerAPIFetchKeyResponse *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x1
  ModelKeyServerAPIFetchKeyResult *success; // x0
  ModelKeyServerAPIResultError *error; // x0
  unsigned __int8 v8; // w20

  v4 = objc_retain(objc_retain(a3));
  if ( !(unsigned int)objc_msgSend(v4, "isMemberOfClass:", objc_opt_class(self, v5)) )
    goto LABEL_11;
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
  {
    if ( (*((_BYTE *)v4 + 32) & 1) == 0 || self->_result != *((_DWORD *)v4 + 4) )
      goto LABEL_11;
  }
  else if ( (*((_BYTE *)v4 + 32) & 1) != 0 )
  {
LABEL_11:
    v8 = 0;
    goto LABEL_12;
  }
  success = self->_success;
  if ( (unsigned __int64)success | *((_QWORD *)v4 + 3)
    && !-[ModelKeyServerAPIFetchKeyResult isEqual:](success, "isEqual:") )
  {
    goto LABEL_11;
  }
  error = self->_error;
  if ( (unsigned __int64)error | *((_QWORD *)v4 + 1) )
    v8 = -[ModelKeyServerAPIResultError isEqual:](error, "isEqual:");
  else
    v8 = 1;
LABEL_12:
  objc_release(v4);
  objc_release(v4);
  return v8;
}