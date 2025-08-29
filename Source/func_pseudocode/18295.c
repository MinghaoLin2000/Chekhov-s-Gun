-[AudioInfoHelperService validateComponent:parameters:reply:]
void __cdecl -[AudioInfoHelperService validateComponent:parameters:reply:](
        AudioInfoHelperService *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  __int64 v9; // x22
  id v10; // x21
  _QWORD v11[4]; // [xsp+8h] [xbp-78h] BYREF
  id v12; // [xsp+28h] [xbp-58h]
  __int128 v13; // [xsp+30h] [xbp-50h] BYREF
  int v14; // [xsp+40h] [xbp-40h]
  unsigned int v15; // [xsp+48h] [xbp-38h] BYREF
  __int128 v16; // [xsp+4Ch] [xbp-34h] BYREF
  int v17; // [xsp+5Ch] [xbp-24h]

  v7 = objc_retain(a4);
  v8 = objc_retain(a5);
  v15 = 0;
  sub_100002980(a3, &v16, &v15);
  v13 = v16;
  v14 = v17;
  v9 = v15;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_100002AB0;
  v11[3] = &unk_100004190;
  v10 = objc_retain(v8);
  v12 = v10;
  validateComponent(&v13, v9, v7, v11);
  objc_release(v12);
  objc_release(v10);
  objc_release(v7);
}