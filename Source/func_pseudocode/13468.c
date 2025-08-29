-[NSData tsu_compressWithAlgorithm:operation:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[NSData tsu_compressWithAlgorithm:operation:](NSData *self, SEL a2, int a3, int a4)
{
  TSUStreamDataCompression *v5; // x19
  unsigned int v6; // w0
  OS_dispatch_data *v7; // x20
  void **v9; // [xsp+0h] [xbp-70h] BYREF
  __int64 v10; // [xsp+8h] [xbp-68h]
  __int64 (__fastcall *v11)(); // [xsp+10h] [xbp-60h]
  void *v12; // [xsp+18h] [xbp-58h]
  id v13; // [xsp+20h] [xbp-50h]
  __int64 *v14; // [xsp+28h] [xbp-48h]
  __int64 v15; // [xsp+30h] [xbp-40h] BYREF
  __int64 *v16; // [xsp+38h] [xbp-38h]
  __int64 v17; // [xsp+40h] [xbp-30h]
  char v18; // [xsp+48h] [xbp-28h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v15 = 0LL;
  v16 = &v15;
  v17 = 0x2020000000LL;
  v18 = 1;
  v9 = _NSConcreteStackBlock;
  v10 = 3254779904LL;
  v11 = sub_10015C0AC;
  v12 = &unk_1001DF268;
  v14 = &v15;
  v5 = objc_retain(
         -[TSUStreamDataCompression initWithAlgorithm:operation:](
           objc_alloc(&OBJC_CLASS___TSUStreamDataCompression),
           "initWithAlgorithm:operation:",
           *(_QWORD *)&a3,
           *(_QWORD *)&a4));
  v13 = v5;
  -[NSData enumerateByteRangesUsingBlock:](self, "enumerateByteRangesUsingBlock:", &v9);
  if ( *((_BYTE *)v16 + 24) )
  {
    v6 = -[TSUStreamCompression didFinishProcessing](v5, "didFinishProcessing", v9, v10, v11, v12);
    *((_BYTE *)v16 + 24) = v6;
    if ( v6 )
      v7 = objc_retainAutoreleasedReturnValue(-[TSUStreamDataCompression outputData](v5, "outputData"));
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
    *((_BYTE *)v16 + 24) = 0;
  }
  objc_release(v13);
  _Block_object_dispose(&v15, 8);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}