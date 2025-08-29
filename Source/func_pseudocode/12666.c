-[TSUZipFileDescriptorWrapper initWithFileDescriptor:]
// local variable allocation has failed, the output may be wrong!
TSUZipFileDescriptorWrapper *__cdecl -[TSUZipFileDescriptorWrapper initWithFileDescriptor:](
        TSUZipFileDescriptorWrapper *self,
        SEL a2,
        int a3)
{
  TSUZipFileDescriptorWrapper *v3; // x19
  __int64 v4; // x20
  TSUZipFileDescriptorWrapper *v5; // x0
  TSUReadChannel *v6; // x0
  TSUReadChannel *readChannel; // x8
  dispatch_group_t v8; // x0
  OS_dispatch_group *accessGroup; // x8
  TSUZipFileDescriptorWrapper *v10; // x20
  _QWORD v12[4]; // [xsp+8h] [xbp-48h] BYREF
  int v13; // [xsp+28h] [xbp-28h]
  objc_super v14; // [xsp+30h] [xbp-20h] BYREF

  v3 = self;
  if ( (a3 & 0x80000000) == 0 )
  {
    v4 = *(_QWORD *)&a3;
    v14.receiver = self;
    v14.super_class = (Class)&OBJC_CLASS___TSUZipFileDescriptorWrapper;
    v5 = -[TSUZipFileDescriptorWrapper init](&v14, "init");
    v3 = v5;
    if ( !v5 )
    {
      close(v4);
      goto LABEL_7;
    }
    v5->_fileDescriptor = v4;
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 3221225472LL;
    v12[2] = sub_10012A69C;
    v12[3] = &unk_1001DCB38;
    v13 = v4;
    v6 = -[TSUFileIOChannel initForReadingDescriptor:cleanupHandler:](
           objc_alloc(&OBJC_CLASS___TSUFileIOChannel),
           "initForReadingDescriptor:cleanupHandler:",
           v4,
           v12);
    readChannel = v3->_readChannel;
    v3->_readChannel = v6;
    objc_release(readChannel);
    if ( v3->_readChannel )
    {
      v8 = dispatch_group_create();
      accessGroup = v3->_accessGroup;
      v3->_accessGroup = (OS_dispatch_group *)v8;
      objc_release(accessGroup);
LABEL_7:
      v3 = objc_retain(v3);
      v10 = v3;
      goto LABEL_8;
    }
  }
  v10 = 0LL;
LABEL_8:
  objc_release(v3);
  return v10;
}