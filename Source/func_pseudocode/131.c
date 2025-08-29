-[_TtC9SPIHelper9SPIHelper userNameAndEmail:containerSetupInfo:withReply:]
void __cdecl -[SPIHelper userNameAndEmail:containerSetupInfo:withReply:](
        _TtC9SPIHelper9SPIHelper *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  __int64 v9; // x0
  __int64 v10; // x8
  char *v11; // x19
  void *v12; // x22
  __int64 v13; // x3
  __int64 v14; // x3
  __int64 v15; // x23
  id v16; // x22
  _TtC9SPIHelper9SPIHelper *v17; // x21
  __int64 v18; // [xsp+0h] [xbp-30h] BYREF

  v9 = sub_1000081BC(&unk_1000CA400);
  __chkstk_darwin(v9 - 8);
  v11 = (char *)&v18 - ((v10 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = _Block_copy(a5);
  if ( a3 )
  {
    sub_1000A4470(a3);
    v13 = sub_1000A44B0(0LL);
    (*(void (__fastcall **)(char *, _QWORD, __int64, __int64))(*(_QWORD *)(v13 - 8) + 56LL))(v11, 0LL, 1LL, v13);
  }
  else
  {
    v14 = sub_1000A44B0(0LL);
    (*(void (__fastcall **)(char *, __int64, __int64, __int64))(*(_QWORD *)(v14 - 8) + 56LL))(v11, 1LL, 1LL, v14);
  }
  v15 = swift_allocObject(&unk_1000C33C0, 24LL, 7LL);
  *(_QWORD *)(v15 + 16) = v12;
  v16 = objc_retain(a4);
  v17 = objc_retain(self);
  sub_10009B7C8(v11, a4, sub_10009C6F8, v15);
  objc_release(v16);
  objc_release(v17);
  swift_release(v15);
  sub_10001D67C(v11, &unk_1000CA400);
}