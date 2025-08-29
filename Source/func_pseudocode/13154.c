-[TSUWarning hash]
unsigned __int64 __cdecl -[TSUWarning hash](TSUWarning *self, SEL a2)
{
  return -[NSString hash](self->_message, "hash");
}