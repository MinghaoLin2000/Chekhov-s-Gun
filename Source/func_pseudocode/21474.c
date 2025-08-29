-[LSRAudioDump discard]
void __cdecl -[LSRAudioDump discard](LSRAudioDump *self, SEL a2)
{
  NSFileManager *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[LSRAudioDump close](self, "close");
  v3 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  -[NSFileManager removeItemAtURL:error:](v3, "removeItemAtURL:error:", self->_url, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}