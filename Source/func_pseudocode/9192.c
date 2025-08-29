-[TSPDataCopyProviderConcrete cleanUp]
void __cdecl -[TSPDataCopyProviderConcrete cleanUp](TSPDataCopyProviderConcrete *self, SEL a2)
{
  NSFileManager *v3; // x20
  NSURL *v4; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v4 = objc_retainAutoreleasedReturnValue(-[TSPDataCopyProviderConcrete directory](self, "directory"));
  -[NSFileManager removeItemAtURL:error:](v3, "removeItemAtURL:error:", v4, 0LL);
  objc_release(v4);
  objc_release(v3);
  -[TSPDataCopyProviderConcrete setURLInternal:](self, "setURLInternal:", 0LL);
  -[TSPDataCopyProviderConcrete setReadChannelInternal:](self, "setReadChannelInternal:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[TSPDataCopyProviderConcrete setInputStreamInternal:](self, "setInputStreamInternal:", 0LL);
}