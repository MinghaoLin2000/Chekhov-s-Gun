-[_TtC13IngestService13IngestService saveWithEvent:completionHandler:]
void __cdecl -[IngestService saveWithEvent:completionHandler:](
        _TtC13IngestService13IngestService *self,
        SEL a2,
        NSData *a3,
        id a4)
{
  __int64 v7; // x8
  char *v8; // x21
  void *v9; // x22
  _QWORD *v10; // x23
  __int64 v11; // x0
  _QWORD *v12; // x22
  _QWORD *v13; // x23
  NSData *v14; // x0
  _TtC13IngestService13IngestService *v15; // x0
  __int64 v16; // x0
  __int64 v17; // [xsp+0h] [xbp-30h] BYREF

  sub_100004A10(&unk_10000C830, a2);
  __chkstk_darwin();
  v8 = (char *)&v17 - ((v7 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = _Block_copy(a4);
  v10 = (_QWORD *)swift_allocObject(&unk_100008500, 40LL, 7LL);
  v10[2] = a3;
  v10[3] = v9;
  v10[4] = self;
  v11 = sub_100006AC0(0LL);
  (*(void (__fastcall **)(char *, __int64, __int64, __int64))(*(_QWORD *)(v11 - 8) + 56LL))(v8, 1LL, 1LL, v11);
  v12 = (_QWORD *)swift_allocObject(&unk_100008528, 48LL, 7LL);
  v12[2] = 0LL;
  v12[3] = 0LL;
  v12[4] = &unk_10000C8A0;
  v12[5] = v10;
  v13 = (_QWORD *)swift_allocObject(&unk_100008550, 48LL, 7LL);
  v13[2] = 0LL;
  v13[3] = 0LL;
  v13[4] = &unk_10000C8A8;
  v13[5] = v12;
  v14 = objc_retain(a3);
  v15 = objc_retain(self);
  v16 = sub_100004F30(v8, &unk_10000C8B0, v13);
  swift_release(v16);
}