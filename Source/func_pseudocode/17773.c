-[ModelKeyServerAPIResultError copyTo:]
void __cdecl -[ModelKeyServerAPIResultError copyTo:](ModelKeyServerAPIResultError *self, SEL a2, id a3)
{
  NSString *message; // x8

  message = self->_message;
  if ( message )
    objc_msgSend(a3, "setMessage:", message);
}