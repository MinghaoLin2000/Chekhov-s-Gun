-[TSPDirectoryPackageWriterComponentFileWriteChannel close]
void __cdecl -[TSPDirectoryPackageWriterComponentFileWriteChannel close](
        TSPDirectoryPackageWriterComponentFileWriteChannel *self,
        SEL a2)
{
  dispatch_semaphore_t v3; // x0
  TSUFileIOChannel *writeChannel; // x21
  dispatch_semaphore_s *v5; // x19
  _QWORD v6[4]; // [xsp+8h] [xbp-48h] BYREF
  id v7; // [xsp+28h] [xbp-28h]

  if ( (atomic_exchange((atomic_uchar *volatile)&self->_isClosed, 1u) & 1) == 0 )
  {
    v3 = dispatch_semaphore_create(0LL);
    writeChannel = self->_writeChannel;
    v6[0] = _NSConcreteStackBlock;
    v6[1] = 3254779904LL;
    v6[2] = sub_1000278E8;
    v6[3] = &unk_1001D1698;
    v5 = objc_retain(v3);
    v7 = v5;
    -[TSUFileIOChannel addBarrier:](writeChannel, "addBarrier:", v6);
    dispatch_semaphore_wait(v5, 0xFFFFFFFFFFFFFFFFLL);
    -[TSUFileIOChannel close](self->_writeChannel, "close");
    objc_release(v7);
    objc_release(v5);
  }
}