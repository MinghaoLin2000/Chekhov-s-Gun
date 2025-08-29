-[NSIndexSet tsu_enumerateRangesConcurrentlyUsingBeginBlock:concurrentBlock:finalBlock:]
void __cdecl -[NSIndexSet tsu_enumerateRangesConcurrentlyUsingBeginBlock:concurrentBlock:finalBlock:](
        NSIndexSet *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x20
  id v9; // x21
  void (__fastcall **v10)(id, NSMutableArray *); // x19
  NSUInteger v11; // x25
  NSUInteger v12; // x26
  size_t v13; // x23
  unsigned __int64 v14; // x9
  unsigned __int64 v15; // x10
  unsigned __int64 v16; // x9
  unsigned __int64 v17; // x8
  __int64 v18; // x8
  id v19; // x24
  id v20; // x25
  _QWORD *v21; // x26
  NSMutableArray *v22; // x27
  __int64 i; // x28
  _QWORD v24[5]; // [xsp+8h] [xbp-F8h] BYREF
  id v25; // [xsp+30h] [xbp-D0h]
  id v26; // [xsp+38h] [xbp-C8h]
  __int64 *v27; // [xsp+40h] [xbp-C0h]
  NSUInteger v28; // [xsp+48h] [xbp-B8h]
  __int64 v29; // [xsp+50h] [xbp-B0h]
  __int64 v30; // [xsp+58h] [xbp-A8h] BYREF
  __int64 *v31; // [xsp+60h] [xbp-A0h]
  __int64 v32; // [xsp+68h] [xbp-98h]
  __int64 (__fastcall *v33)(); // [xsp+70h] [xbp-90h]
  __int64 (__fastcall *v34)(); // [xsp+78h] [xbp-88h]
  void *v35; // [xsp+80h] [xbp-80h]
  _QWORD v36[3]; // [xsp+88h] [xbp-78h] BYREF
  _QWORD *v37; // [xsp+A0h] [xbp-60h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = (void (__fastcall **)(id, NSMutableArray *))objc_retain(a5);
  v11 = -[NSIndexSet firstIndex](self, "firstIndex");
  v12 = -[NSIndexSet lastIndex](self, "lastIndex");
  v13 = -[NSIndexSet tsu_nsIndexSetConcurrencyFactor](self, "tsu_nsIndexSetConcurrencyFactor");
  v30 = 0LL;
  v31 = &v30;
  v32 = 0x4812000000LL;
  v33 = sub_100145BC0;
  v34 = sub_100145BE4;
  v35 = &unk_1001A8BCB;
  memset(v36, 0, sizeof(v36));
  sub_100145C10(v36, v13);
  v14 = v12 - v11 + 1;
  v15 = v14 % v13;
  v16 = v13 + v14 - v14 % v13;
  if ( v15 )
    v17 = v16;
  else
    v17 = v12 - v11 + 1;
  v24[0] = _NSConcreteStackBlock;
  v24[1] = 3254779904LL;
  v24[2] = sub_100145C98;
  v24[3] = &unk_1001DE268;
  if ( v13 > v17 )
    v18 = 1LL;
  else
    v18 = v17 / v13;
  v28 = v11;
  v29 = v18;
  v24[4] = self;
  v19 = objc_retain(v8);
  v25 = v19;
  v20 = objc_retain(v9);
  v26 = v20;
  v27 = &v30;
  v21 = objc_retainBlock(v24);
  dispatch_apply(v13, 0LL, v21);
  v22 = objc_retainAutoreleasedReturnValue(+[NSMutableArray arrayWithCapacity:](&OBJC_CLASS___NSMutableArray, "arrayWithCapacity:", v13));
  for ( i = 0LL; i != v13; ++i )
  {
    if ( *(_QWORD *)(v31[6] + 8 * i) )
      -[NSMutableArray addObject:](v22, "addObject:");
  }
  v10[2](v10, v22);
  objc_release(v22);
  objc_release(v21);
  objc_release(v26);
  objc_release(v25);
  _Block_object_dispose(&v30, 8);
  v37 = v36;
  sub_1001464B8(&v37);
  objc_release(v10);
  objc_release(v20);
  objc_release(v19);
}