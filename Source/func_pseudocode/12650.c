+[TSUZipFileArchive readArchiveFromURL:options:queue:completion:]
void __cdecl +[TSUZipFileArchive readArchiveFromURL:options:queue:completion:](
        id a1,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5,
        id a6)
{
  id v10; // x19
  dispatch_queue_s *v11; // x20
  id v12; // x22
  void *v13; // x21
  id v14; // x22
  _QWORD block[4]; // [xsp+8h] [xbp-68h] BYREF
  id v16; // [xsp+28h] [xbp-48h]
  dispatch_queue_s *v17; // [xsp+30h] [xbp-40h]
  id v18; // [xsp+38h] [xbp-38h] BYREF

  v10 = objc_retain(a6);
  v11 = (dispatch_queue_s *)objc_retain(a5);
  v12 = objc_retain(a3);
  v18 = 0LL;
  v13 = objc_msgSend(objc_alloc((Class)a1), "initForReadingFromURL:options:error:", v12, a4, &v18);
  objc_release(v12);
  v14 = objc_retain(v18);
  if ( v13 )
  {
    objc_msgSend(v13, "readArchiveWithQueue:completion:", v11, v10);
  }
  else
  {
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100127DFC;
    block[3] = &unk_1001D19E0;
    v17 = (dispatch_queue_s *)objc_retain(v10);
    v16 = objc_retain(v14);
    dispatch_async(v11, block);
    objc_release(v11);
    objc_release(v16);
    v11 = v17;
  }
  objc_release(v11);
  objc_release(v13);
  objc_release(v14);
  objc_release(v10);
}