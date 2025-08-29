__Z14_visitHexLinesP6NSDatabU13block_pointerFvP8NSStringE
void __fastcall _visitHexLines(void *a1, int a2, void *a3)
{
  id v5; // x19
  id v6; // x0
  const char *v7; // x10
  const char *v8; // x12
  const char *v9; // x13
  const char *v10; // x11
  id v11; // x20
  _QWORD *v12; // x22
  _QWORD v13[4]; // [xsp+8h] [xbp-138h] BYREF
  id v14; // [xsp+28h] [xbp-118h]
  __int64 *v15; // [xsp+30h] [xbp-110h]
  _QWORD v16[4]; // [xsp+38h] [xbp-108h] BYREF
  id v17; // [xsp+58h] [xbp-E8h]
  __int64 *v18; // [xsp+60h] [xbp-E0h]
  _QWORD *v19; // [xsp+68h] [xbp-D8h]
  const char *v20; // [xsp+70h] [xbp-D0h]
  const char *v21; // [xsp+78h] [xbp-C8h]
  const char *v22; // [xsp+80h] [xbp-C0h]
  const char *v23; // [xsp+88h] [xbp-B8h]
  _QWORD v24[3]; // [xsp+90h] [xbp-B0h] BYREF
  int v25; // [xsp+A8h] [xbp-98h]
  __int64 v26; // [xsp+B0h] [xbp-90h] BYREF
  __int64 *v27; // [xsp+B8h] [xbp-88h]
  __int64 v28; // [xsp+C0h] [xbp-80h]
  __int64 (__fastcall *v29)(); // [xsp+C8h] [xbp-78h]
  __int64 (__fastcall *v30)(); // [xsp+D0h] [xbp-70h]
  void *v31; // [xsp+D8h] [xbp-68h]
  __int64 v32; // [xsp+E0h] [xbp-60h]
  __int64 v33; // [xsp+E8h] [xbp-58h]
  int v34; // [xsp+F0h] [xbp-50h]

  v5 = objc_retain(a1);
  v6 = objc_retain(a3);
  v26 = 0LL;
  v27 = &v26;
  v28 = 0x4812000000LL;
  v29 = sub_10004FAA8;
  v30 = nullsub_7;
  v31 = &unk_10008B2F9;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0;
  v24[0] = 0LL;
  v24[1] = v24;
  v24[2] = 0x2020000000LL;
  v25 = 0;
  if ( a2 )
  {
    v7 = "/* ";
    v8 = ",";
    v9 = "0x";
    v10 = " */";
  }
  else
  {
    v10 = "";
    v9 = "";
    v8 = "";
    v7 = "";
  }
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_10004FAC0;
  v16[3] = &unk_10009F2A8;
  v20 = v9;
  v21 = v8;
  v18 = &v26;
  v19 = v24;
  v22 = v7;
  v23 = v10;
  v11 = objc_retain(v6);
  v17 = v11;
  v13[0] = _NSConcreteStackBlock;
  v13[1] = 3254779904LL;
  v13[2] = sub_10004FDD4;
  v13[3] = &unk_10009F2D8;
  v15 = &v26;
  v12 = objc_retain(objc_retainBlock(v16));
  v14 = v12;
  objc_msgSend(v5, "enumerateByteRangesUsingBlock:", v13);
  if ( (v27[6] & 0x80000000) == 0 )
    ((void (__fastcall *)(_QWORD *))v12[2])(v12);
  objc_release(v14);
  objc_release(v12);
  objc_release(v17);
  _Block_object_dispose(v24, 8);
  _Block_object_dispose(&v26, 8);
  objc_release(v11);
  objc_release(v5);
}