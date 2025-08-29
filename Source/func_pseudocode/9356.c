-[TSPDirectoryPackageWriterComponentFileWriteChannel initWithURL:handler:]
TSPDirectoryPackageWriterComponentFileWriteChannel *__cdecl -[TSPDirectoryPackageWriterComponentFileWriteChannel initWithURL:handler:](
        TSPDirectoryPackageWriterComponentFileWriteChannel *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  TSPDirectoryPackageWriterComponentFileWriteChannel *v8; // x21
  NSURL *v9; // x0
  NSURL *URL; // x8
  void *v11; // x0
  id handler; // x8
  TSUFileIOChannel *v13; // x0
  TSUFileIOChannel *writeChannel; // x8
  objc_super v16; // [xsp+0h] [xbp-30h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v16.receiver = self;
  v16.super_class = (Class)&OBJC_CLASS___TSPDirectoryPackageWriterComponentFileWriteChannel;
  v8 = -[TSPDirectoryPackageWriterComponentFileWriteChannel init](&v16, "init");
  if ( v8 )
  {
    v9 = (NSURL *)objc_msgSend(v6, "copy");
    URL = v8->_URL;
    v8->_URL = v9;
    objc_release(URL);
    v11 = objc_msgSend(v7, "copy");
    handler = v8->_handler;
    v8->_handler = v11;
    objc_release(handler);
    v13 = -[TSUFileIOChannel initForStreamWritingURL:error:](
            objc_alloc(&OBJC_CLASS___TSUFileIOChannel),
            "initForStreamWritingURL:error:",
            v8->_URL,
            0LL);
    writeChannel = v8->_writeChannel;
    v8->_writeChannel = v13;
    objc_release(writeChannel);
    if ( !v8->_writeChannel )
    {
      objc_release(v8);
      v8 = 0LL;
    }
  }
  objc_release(v7);
  objc_release(v6);
  return v8;
}