-[_TtC13IngestService13IngestService init]
_TtC13IngestService13IngestService *__cdecl -[IngestService init](_TtC13IngestService13IngestService *self, SEL a2)
{
  __int64 v3; // x21
  __int64 v4; // x26
  __int64 v5; // x8
  char *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x8
  char *v9; // x22
  __int64 v10; // x23
  __int64 v11; // x27
  __int64 v12; // x8
  char *v13; // x24
  __int64 v14; // x28
  _TtC13IngestService13IngestService *v15; // x21
  __int64 v16; // x0
  objc_class *v17; // x0
  objc_super v19; // [xsp+0h] [xbp-60h] BYREF

  v3 = sub_100006940(0LL, a2);
  v4 = *(_QWORD *)(v3 - 8);
  __chkstk_darwin();
  v6 = (char *)&v19 - ((v5 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  sub_100004A10(&unk_10000C828, v7);
  __chkstk_darwin();
  v9 = (char *)&v19 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = sub_100006980(0LL);
  v11 = *(_QWORD *)(v10 - 8);
  __chkstk_darwin();
  v13 = (char *)&v19 - ((v12 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = OBJC_IVAR____TtC13IngestService13IngestService_storage;
  sub_100006A70(0LL);
  (*(void (__fastcall **)(char *, __int64, __int64, __int64))(v11 + 56))(v9, 1LL, 1LL, v10);
  (*(void (__fastcall **)(char *, _QWORD, __int64))(v4 + 104))(
    v6,
    enum case for URL.DirectoryHint.inferFromPath(_:),
    v3);
  v15 = objc_retain(self);
  sub_100006970(0xD000000000000012LL, 0x8000000100007370LL, v6, v9);
  *(Class *)((char *)&self->super.isa + v14) = (Class)sub_100006A60(v13);
  objc_release(v15);
  v17 = (objc_class *)type metadata accessor for IngestService(v16);
  v19.receiver = v15;
  v19.super_class = v17;
  return -[IngestService init](&v19, "init");
}