-[TSUZipArchive readArchiveWithQueue:completion:]
void __cdecl -[TSUZipArchive readArchiveWithQueue:completion:](TSUZipArchive *self, SEL a2, id a3, id a4)
{
  dispatch_queue_s *v6; // x19
  id v7; // x20
  unsigned __int64 v8; // x24
  id v9; // x0
  void *v10; // x21
  id *v11; // x27
  id v12; // x25
  _QWORD *v13; // x23
  _QWORD block[4]; // [xsp+8h] [xbp-108h] BYREF
  id v15; // [xsp+28h] [xbp-E8h] BYREF
  _QWORD v16[5]; // [xsp+30h] [xbp-E0h] BYREF
  id v17; // [xsp+58h] [xbp-B8h]
  id v18; // [xsp+60h] [xbp-B0h]
  unsigned __int64 v19; // [xsp+68h] [xbp-A8h]
  _QWORD v20[4]; // [xsp+70h] [xbp-A0h] BYREF
  _QWORD v21[2]; // [xsp+90h] [xbp-80h] BYREF
  id v22; // [xsp+A0h] [xbp-70h]
  id v23; // [xsp+A8h] [xbp-68h]

  v6 = (dispatch_queue_s *)objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = -[TSUZipArchive archiveLength](self, "archiveLength");
  v9 = -[TSUZipArchive newArchiveReadChannel](self, "newArchiveReadChannel");
  v10 = v9;
  if ( v9 )
  {
    v20[0] = _NSConcreteStackBlock;
    v20[1] = 3254779904LL;
    v20[2] = sub_10012FB38;
    v20[3] = &unk_1001DCF98;
    v11 = (id *)v21;
    v12 = objc_retain(v9);
    v21[0] = v12;
    v21[1] = self;
    v22 = objc_retain(v6);
    v23 = objc_retain(v7);
    v13 = objc_retainBlock(v20);
    if ( (self->_options & 8) != 0 )
    {
      -[TSUZipArchive readLocalFileHeaderEntriesFromChannel:offset:previousEntry:seekAttempts:seekForward:completion:](
        self,
        "readLocalFileHeaderEntriesFromChannel:offset:previousEntry:seekAttempts:seekForward:completion:",
        v12,
        0LL,
        0LL,
        0LL,
        0LL,
        v13);
    }
    else
    {
      v16[0] = _NSConcreteStackBlock;
      v16[1] = 3254779904LL;
      v16[2] = sub_10012FD94;
      v16[3] = &unk_1001DD018;
      v16[4] = self;
      v19 = v8 - 22;
      v17 = objc_retain(v12);
      v18 = objc_retain(v13);
      +[TSUIOUtils readAllFromChannel:offset:length:completion:](
        &OBJC_CLASS___TSUIOUtils,
        "readAllFromChannel:offset:length:completion:",
        v17,
        v8 - 22,
        22LL,
        v16);
      objc_release(v18);
      objc_release(v17);
    }
    objc_release(v13);
    objc_release(v23);
    objc_release(v22);
  }
  else
  {
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_10013006C;
    block[3] = &unk_1001D29A8;
    v11 = &v15;
    v15 = objc_retain(v7);
    dispatch_async(v6, block);
  }
  objc_release(*v11);
  objc_release(v10);
  objc_release(v7);
  objc_release(v6);
}