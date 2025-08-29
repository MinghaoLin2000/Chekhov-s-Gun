-[_TtC13IngestService13IngestService fetchWithId:completionHandler:]
void __cdecl -[IngestService fetchWithId:completionHandler:](
        _TtC13IngestService13IngestService *self,
        SEL a2,
        signed __int64 a3,
        id a4)
{
  __int64 v7; // x8
  char *v8; // x20
  void *v9; // x21
  _QWORD *v10; // x23
  __int64 v11; // x0
  _QWORD *v12; // x21
  _QWORD *v13; // x22
  _TtC13IngestService13IngestService *v14; // x0
  __int64 v15; // x0
  __int64 v16; // [xsp+0h] [xbp-30h] BYREF

  sub_100004A10(&unk_10000C830, a2);
  __chkstk_darwin();
  v8 = (char *)&v16 - ((v7 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = _Block_copy(a4);
  v10 = (_QWORD *)swift_allocObject(&unk_100008488, 40LL, 7LL);
  v10[2] = a3;
  v10[3] = v9;
  v10[4] = self;
  v11 = sub_100006AC0(0LL);
  (*(void (__fastcall **)(char *, __int64, __int64, __int64))(*(_QWORD *)(v11 - 8) + 56LL))(v8, 1LL, 1LL, v11);
  v12 = (_QWORD *)swift_allocObject(&unk_1000084B0, 48LL, 7LL);
  v12[2] = 0LL;
  v12[3] = 0LL;
  v12[4] = &unk_10000C880;
  v12[5] = v10;
  v13 = (_QWORD *)swift_allocObject(&unk_1000084D8, 48LL, 7LL);
  v13[2] = 0LL;
  v13[3] = 0LL;
  v13[4] = &unk_10000C888;
  v13[5] = v12;
  v14 = objc_retain(self);
  v15 = sub_100004F30(v8, &unk_10000C890, v13);
  swift_release(v15);
}