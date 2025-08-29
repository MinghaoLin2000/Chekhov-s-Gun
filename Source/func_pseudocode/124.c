-[_TtC9SPIHelper9SPIHelper getMetadataFromShareFromSharingURL:containerSetupInfo:withReply:]
void __cdecl -[SPIHelper getMetadataFromShareFromSharingURL:containerSetupInfo:withReply:](
        _TtC9SPIHelper9SPIHelper *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  __int64 v9; // x19
  __int64 v10; // x25
  __int64 v11; // x8
  char *v12; // x21
  void *v13; // x22
  __int64 v14; // x23
  id v15; // x22
  _TtC9SPIHelper9SPIHelper *v16; // x24
  __int64 v17; // [xsp+0h] [xbp-40h] BYREF

  v9 = sub_1000A44B0(0LL);
  v10 = *(_QWORD *)(v9 - 8);
  __chkstk_darwin(v9);
  v12 = (char *)&v17 - ((v11 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = _Block_copy(a5);
  sub_1000A4470(a3);
  v14 = swift_allocObject(&unk_1000C3758, 24LL, 7LL);
  *(_QWORD *)(v14 + 16) = v13;
  v15 = objc_retain(a4);
  v16 = objc_retain(self);
  sub_1000747B4(v12, a4, sub_10009D458, v14, 0xD000000000000042LL, 0x80000001000AE7A0LL, &unk_1000C3780, &unk_1000CC080);
  swift_release(v14);
  objc_release(v16);
  objc_release(v15);
  (*(void (__fastcall **)(char *, __int64))(v10 + 8))(v12, v9);
}