-[_TtC39com_apple_AppStoreDaemon_StoreUIService21AlertPresentationTask presentWithCompletionHandler:]
void __cdecl -[AlertPresentationTask presentWithCompletionHandler:](
        _TtC39com_apple_AppStoreDaemon_StoreUIService21AlertPresentationTask *self,
        SEL a2,
        id a3)
{
  __int64 v5; // x8
  char *v6; // x20
  void *v7; // x21
  __int64 v8; // x22
  __int64 v9; // x0
  _QWORD *v10; // x21
  _QWORD *v11; // x22
  _TtC39com_apple_AppStoreDaemon_StoreUIService21AlertPresentationTask *v12; // x0
  __int64 v13; // x0
  __int64 v14; // [xsp+0h] [xbp-20h] BYREF

  sub_100005F00(&unk_1000151A0, a2);
  __chkstk_darwin();
  v6 = (char *)&v14 - ((v5 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = _Block_copy(a3);
  v8 = swift_allocObject(&unk_100010768, 32LL, 7LL);
  *(_QWORD *)(v8 + 16) = v7;
  *(_QWORD *)(v8 + 24) = self;
  v9 = sub_10000C490(0LL);
  (*(void (__fastcall **)(char *, __int64, __int64, __int64))(*(_QWORD *)(v9 - 8) + 56LL))(v6, 1LL, 1LL, v9);
  v10 = (_QWORD *)swift_allocObject(&unk_100010790, 48LL, 7LL);
  v10[2] = 0LL;
  v10[3] = 0LL;
  v10[4] = &unk_1000151B0;
  v10[5] = v8;
  v11 = (_QWORD *)swift_allocObject(&unk_1000107B8, 48LL, 7LL);
  v11[2] = 0LL;
  v11[3] = 0LL;
  v11[4] = &unk_1000151B8;
  v11[5] = v10;
  v12 = objc_retain(self);
  v13 = sub_10000850C(v6, &unk_1000151C0, v11);
  swift_release(v13);
}