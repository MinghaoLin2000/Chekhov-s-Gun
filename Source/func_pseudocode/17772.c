-[ModelKeyServerAPIResultError writeTo:]
void __cdecl -[ModelKeyServerAPIResultError writeTo:](ModelKeyServerAPIResultError *self, SEL a2, id a3)
{
  NSString *message; // x1

  message = self->_message;
  if ( message )
    PBDataWriterWriteStringField(a3, message, 1LL);
}