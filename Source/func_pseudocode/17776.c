-[ModelKeyServerAPIResultError hash]
unsigned __int64 __cdecl -[ModelKeyServerAPIResultError hash](ModelKeyServerAPIResultError *self, SEL a2)
{
  return -[NSString hash](self->_message, "hash");
}