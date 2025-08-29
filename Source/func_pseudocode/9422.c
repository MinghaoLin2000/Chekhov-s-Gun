-[TSPPackage reloadZipArchiveIfNeededWithURLImpl:isLazyLoading:forceReload:error:]
bool __cdecl -[TSPPackage reloadZipArchiveIfNeededWithURLImpl:isLazyLoading:forceReload:error:](
        TSPPackage *self,
        SEL a2,
        id a3,
        bool a4,
        bool a5,
        id *a6)
{
  _BOOL4 v7; // w23
  id v10; // x19
  bool v11; // zf
  _QWORD *v12; // x0
  void *v13; // x22
  unsigned __int8 v14; // w21
  id WeakRetained; // x23
  __int64 *v16; // x8
  TSUZipFileArchive *zipArchive; // x2
  __int64 v18; // x3
  id *v19; // x23
  id obj; // [xsp+0h] [xbp-100h] BYREF
  _QWORD v22[8]; // [xsp+8h] [xbp-F8h] BYREF
  bool v23; // [xsp+48h] [xbp-B8h]
  __int64 v24; // [xsp+50h] [xbp-B0h] BYREF
  __int64 *v25; // [xsp+58h] [xbp-A8h]
  __int64 v26; // [xsp+60h] [xbp-A0h]
  __int64 (__fastcall *v27)(); // [xsp+68h] [xbp-98h]
  __int64 (__fastcall *v28)(); // [xsp+70h] [xbp-90h]
  id v29; // [xsp+78h] [xbp-88h]
  __int64 v30; // [xsp+80h] [xbp-80h] BYREF
  __int64 *v31; // [xsp+88h] [xbp-78h]
  __int64 v32; // [xsp+90h] [xbp-70h]
  __int64 (__fastcall *v33)(); // [xsp+98h] [xbp-68h]
  __int64 (__fastcall *v34)(); // [xsp+A0h] [xbp-60h]
  id v35; // [xsp+A8h] [xbp-58h]
  __int64 v36; // [xsp+B0h] [xbp-50h] BYREF
  __int64 *v37; // [xsp+B8h] [xbp-48h]
  __int64 v38; // [xsp+C0h] [xbp-40h]
  char v39; // [xsp+C8h] [xbp-38h]

  v7 = a5;
  v10 = objc_retain(a3);
  dispatch_assert_queue_V2((dispatch_queue_t)self->_accessQueue);
  if ( -[TSUZipFileArchive isValid](self->_zipArchive, "isValid") )
    v11 = !v7;
  else
    v11 = 0;
  if ( v11 || ((unsigned int)objc_msgSend((id)objc_opt_class(self), "hasZipArchive") & 1) == 0 )
  {
    v14 = 1;
  }
  else
  {
    v36 = 0LL;
    v37 = &v36;
    v38 = 0x2020000000LL;
    v39 = 0;
    v30 = 0LL;
    v31 = &v30;
    v32 = 0x3032000000LL;
    v33 = sub_10002D5BC;
    v34 = sub_10002D5CC;
    v35 = 0LL;
    v24 = 0LL;
    v25 = &v24;
    v26 = 0x3032000000LL;
    v27 = sub_10002D5BC;
    v28 = sub_10002D5CC;
    v29 = 0LL;
    v22[0] = _NSConcreteStackBlock;
    v22[1] = 3254779904LL;
    v22[2] = sub_10002EA48;
    v22[3] = &unk_1001D30C0;
    v23 = a4;
    v22[4] = self;
    v22[5] = &v30;
    v22[6] = &v36;
    v22[7] = &v24;
    v12 = objc_retainBlock(v22);
    v13 = v12;
    if ( v10 )
    {
      ((void (__fastcall *)(_QWORD *, id))v12[2])(v12, v10);
    }
    else
    {
      WeakRetained = objc_loadWeakRetained((id *)&self->_fileCoordinatorDelegate);
      objc_msgSend(WeakRetained, "performReadUsingAccessor:", v13);
      objc_release(WeakRetained);
    }
    v16 = v37;
    if ( *((_BYTE *)v37 + 24) )
    {
      zipArchive = self->_zipArchive;
      v18 = v25[5];
      v19 = (id *)(v31 + 5);
      obj = (id)v31[5];
      v14 = -[TSPPackage didReloadZipArchive:packageURL:error:](
              self,
              "didReloadZipArchive:packageURL:error:",
              zipArchive,
              v18,
              &obj);
      objc_storeStrong(v19, obj);
      v16 = v37;
    }
    else
    {
      v14 = 0;
    }
    *((_BYTE *)v16 + 24) = v14;
    if ( a6 && (v14 & 1) == 0 )
    {
      *a6 = objc_retainAutorelease((id)v31[5]);
      v14 = *((_BYTE *)v37 + 24) != 0;
    }
    objc_release(v13);
    _Block_object_dispose(&v24, 8);
    objc_release(v29);
    _Block_object_dispose(&v30, 8);
    objc_release(v35);
    _Block_object_dispose(&v36, 8);
  }
  objc_release(v10);
  return v14;
}