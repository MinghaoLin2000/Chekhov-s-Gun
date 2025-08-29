+[NSPropertyListSerialization tsu_propertyListWithContentsOfURL:options:error:]
id __cdecl +[NSPropertyListSerialization tsu_propertyListWithContentsOfURL:options:error:](
        id a1,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id *a5)
{
  NSInputStream *v7; // x0
  NSInputStream *v8; // x19
  id v9; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = objc_retainAutoreleasedReturnValue(+[NSInputStream inputStreamWithURL:](&OBJC_CLASS___NSInputStream, "inputStreamWithURL:", a3));
  v8 = v7;
  if ( v7 )
  {
    -[NSInputStream open](v7, "open");
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSPropertyListSerialization propertyListWithStream:options:format:error:](
             &OBJC_CLASS___NSPropertyListSerialization,
             "propertyListWithStream:options:format:error:",
             v8,
             a4,
             0LL,
             a5));
    -[NSInputStream close](v8, "close");
  }
  else
  {
    v9 = 0LL;
    if ( a5 )
      *a5 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadUnknownErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadUnknownErrorWithUserInfo:",
                  0LL)));
  }
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}