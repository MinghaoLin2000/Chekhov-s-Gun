-[TSUZipArchive validateCRCWithQueue:completion:]
void __cdecl -[TSUZipArchive validateCRCWithQueue:completion:](TSUZipArchive *self, SEL a2, id a3, id a4)
{
  dispatch_queue_attr_s *v6; // x23
  dispatch_queue_t v7; // x19
  NSMutableOrderedSet *v8; // x23
  void *v9; // x24
  __int64 v10; // x26
  void *v11; // x21
  __int64 v12; // x8
  id v13; // x22
  id v14; // x20
  id v15; // [xsp+8h] [xbp-1F8h]
  id v16; // [xsp+10h] [xbp-1F0h]
  _QWORD v17[4]; // [xsp+18h] [xbp-1E8h] BYREF
  id v18; // [xsp+38h] [xbp-1C8h]
  id v19; // [xsp+40h] [xbp-1C0h]
  _QWORD *v20; // [xsp+48h] [xbp-1B8h]
  _QWORD block[6]; // [xsp+50h] [xbp-1B0h] BYREF
  id v22; // [xsp+80h] [xbp-180h]
  _QWORD *v23; // [xsp+88h] [xbp-178h]
  __int128 v24; // [xsp+90h] [xbp-170h] BYREF
  __int128 v25; // [xsp+A0h] [xbp-160h]
  __int128 v26; // [xsp+B0h] [xbp-150h]
  __int128 v27; // [xsp+C0h] [xbp-140h]
  _QWORD v28[5]; // [xsp+D8h] [xbp-128h] BYREF
  id v29; // [xsp+100h] [xbp-100h]
  _BYTE v30[128]; // [xsp+108h] [xbp-F8h] BYREF

  v16 = objc_retain(a3);
  v15 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
  v7 = dispatch_queue_create("TSUZipArchive.Validation", v6);
  objc_release(v6);
  v28[0] = 0LL;
  v28[1] = v28;
  v28[2] = 0x3032000000LL;
  v28[3] = sub_1001331F4;
  v28[4] = sub_100133204;
  v29 = 0LL;
  v24 = 0u;
  v25 = 0u;
  v26 = 0u;
  v27 = 0u;
  v8 = objc_retain(self->_entries);
  v9 = -[NSMutableOrderedSet countByEnumeratingWithState:objects:count:](
         v8,
         "countByEnumeratingWithState:objects:count:",
         &v24,
         v30,
         16LL);
  if ( v9 )
  {
    v10 = *(_QWORD *)v25;
    do
    {
      v11 = 0LL;
      do
      {
        if ( *(_QWORD *)v25 != v10 )
          objc_enumerationMutation(v8);
        v12 = *(_QWORD *)(*((_QWORD *)&v24 + 1) + 8LL * (_QWORD)v11);
        block[0] = _NSConcreteStackBlock;
        block[1] = 3254779904LL;
        block[2] = sub_100133FB0;
        block[3] = &unk_1001DD2F8;
        block[4] = self;
        block[5] = v12;
        v23 = v28;
        v22 = objc_retain(v7);
        dispatch_async((dispatch_queue_t)v22, block);
        objc_release(v22);
        v11 = (char *)v11 + 1;
      }
      while ( v9 != v11 );
      v9 = -[NSMutableOrderedSet countByEnumeratingWithState:objects:count:](
             v8,
             "countByEnumeratingWithState:objects:count:",
             &v24,
             v30,
             16LL);
    }
    while ( v9 );
  }
  objc_release(v8);
  v17[0] = _NSConcreteStackBlock;
  v17[1] = 3254779904LL;
  v17[2] = sub_1001342A4;
  v17[3] = &unk_1001DD358;
  v18 = v16;
  v19 = v15;
  v20 = v28;
  v13 = objc_retain(v16);
  v14 = objc_retain(v15);
  dispatch_async(v7, v17);
  objc_release(v18);
  objc_release(v19);
  _Block_object_dispose(v28, 8);
  objc_release(v29);
  objc_release(v13);
  objc_release(v14);
  objc_release(v7);
}