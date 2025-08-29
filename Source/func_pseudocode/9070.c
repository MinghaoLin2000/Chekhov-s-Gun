-[TSPPackageWriter closeWithQueue:completion:]
void __cdecl -[TSPPackageWriter closeWithQueue:completion:](TSPPackageWriter *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  id v8; // x22
  dispatch_queue_s *errorQueue; // x0
  void ***v10; // x23
  TSUZipFileWriter *v11; // x23
  void **v12; // [xsp+0h] [xbp-D0h] BYREF
  __int64 v13; // [xsp+8h] [xbp-C8h]
  __int64 (__fastcall *v14)(int, id); // [xsp+10h] [xbp-C0h]
  void *v15; // [xsp+18h] [xbp-B8h]
  id v16; // [xsp+20h] [xbp-B0h]
  __int64 *v17; // [xsp+28h] [xbp-A8h]
  _QWORD block[6]; // [xsp+30h] [xbp-A0h] BYREF
  __int64 v19; // [xsp+60h] [xbp-70h] BYREF
  __int64 *v20; // [xsp+68h] [xbp-68h]
  __int64 v21; // [xsp+70h] [xbp-60h]
  __int64 (__fastcall *v22)(); // [xsp+78h] [xbp-58h]
  __int64 (__fastcall *v23)(); // [xsp+80h] [xbp-50h]
  id v24; // [xsp+88h] [xbp-48h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  -[TSPPackageWriter closeCurrentChannel](self, "closeCurrentChannel");
  v8 = objc_retainBlock(v7);
  if ( v7 )
  {
    v19 = 0LL;
    v20 = &v19;
    v21 = 0x3032000000LL;
    v22 = sub_1000081DC;
    v23 = sub_1000081EC;
    v24 = 0LL;
    errorQueue = (dispatch_queue_s *)self->_errorQueue;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100009DC0;
    block[3] = &unk_1001D13C8;
    block[4] = self;
    block[5] = &v19;
    dispatch_sync(errorQueue, block);
    if ( v20[5] )
    {
      v12 = _NSConcreteStackBlock;
      v13 = 3254779904LL;
      v14 = sub_100009DD4;
      v15 = &unk_1001D13F8;
      v16 = objc_retain(v7);
      v17 = &v19;
      v10 = objc_retainBlock(&v12);
      objc_release(v8);
      objc_release(v16);
      v8 = v10;
    }
    _Block_object_dispose(&v19, 8);
    objc_release(v24);
  }
  v11 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter zipArchiveWriter](self, "zipArchiveWriter", v12, v13, v14, v15));
  -[TSUZipWriter closeWithQueue:completion:](v11, "closeWithQueue:completion:", v6, v8);
  objc_release(v11);
  self->_isOpened = 0;
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
}