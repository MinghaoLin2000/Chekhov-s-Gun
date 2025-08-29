-[TSUKVOToken hash]
unsigned __int64 __cdecl -[TSUKVOToken hash](TSUKVOToken *self, SEL a2)
{
  NSObject *observer; // x20

  observer = self->_observer;
  return -[NSString hash](self->_keyPath, "hash") ^ (unsigned __int64)observer ^ (unsigned __int64)self->_context;
}