-[TSUZipWriter beginEntryWithName:force32BitSize:lastModificationDate:size:CRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:]
void __cdecl -[TSUZipWriter beginEntryWithName:force32BitSize:lastModificationDate:size:CRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:](
        TSUZipWriter *self,
        SEL a2,
        id a3,
        bool a4,
        id a5,
        unsigned __int64 a6,
        unsigned int a7,
        bool a8)
{
  id v14; // x25
  id v15; // x0
  dispatch_queue_s *writeQueue; // x22
  id v17; // x19
  id v18; // x20
  _QWORD block[5]; // [xsp+8h] [xbp-88h] BYREF
  id v20; // [xsp+30h] [xbp-60h]
  id v21; // [xsp+38h] [xbp-58h]
  unsigned __int64 v22; // [xsp+40h] [xbp-50h]
  unsigned int v23; // [xsp+48h] [xbp-48h]
  bool v24; // [xsp+4Ch] [xbp-44h]
  bool v25; // [xsp+4Dh] [xbp-43h]

  v14 = objc_retain(a3);
  v15 = objc_retain(a5);
  writeQueue = (dispatch_queue_s *)self->_writeQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_1001524A0;
  block[3] = &unk_1001DEB98;
  block[4] = self;
  v20 = v14;
  v24 = a4;
  v21 = v15;
  v22 = a6;
  v23 = a7;
  v25 = a8;
  v17 = objc_retain(v15);
  v18 = objc_retain(v14);
  dispatch_async(writeQueue, block);
  objc_release(v21);
  objc_release(v20);
  objc_release(v17);
  objc_release(v18);
}