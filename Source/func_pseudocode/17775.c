-[ModelKeyServerAPIResultError isEqual:]
bool __cdecl -[ModelKeyServerAPIResultError isEqual:](ModelKeyServerAPIResultError *self, SEL a2, id a3)
{
  _QWORD *v4; // x19
  __int64 v5; // x1
  NSString *message; // x0
  unsigned __int8 v7; // w20

  v4 = objc_retain(objc_retain(a3));
  if ( (unsigned int)objc_msgSend(v4, "isMemberOfClass:", objc_opt_class(self, v5)) )
  {
    message = self->_message;
    if ( (unsigned __int64)message | v4[1] )
      v7 = (unsigned __int8)-[NSString isEqual:](message, "isEqual:");
    else
      v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  objc_release(v4);
  objc_release(v4);
  return v7;
}