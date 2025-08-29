-[_TtC9SPIHelper9SPIHelper mailContentFromSharingURL:share:fileURL:appName:appIconData:withReply:]
void __cdecl -[SPIHelper mailContentFromSharingURL:share:fileURL:appName:appIconData:withReply:](
        _TtC9SPIHelper9SPIHelper *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8)
{
  __int64 v14; // x0
  __int64 v15; // x8
  char *v16; // x19
  __int64 v17; // x20
  __int64 v18; // x27
  __int64 v19; // x8
  char *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x0
  __int64 v23; // x20
  __int64 v24; // x1
  __int64 v25; // x25
  id v26; // x24
  id v27; // x21
  id v28; // x28
  _TtC9SPIHelper9SPIHelper *v29; // x23
  __int64 v30; // x26
  __int64 v31; // x1
  __int64 v32; // x21
  __int64 v33; // x28
  __int64 v34; // [xsp+10h] [xbp-70h] BYREF
  void *v35; // [xsp+18h] [xbp-68h]
  __int64 v36; // [xsp+20h] [xbp-60h]
  _TtC9SPIHelper9SPIHelper *v37; // [xsp+28h] [xbp-58h]

  v37 = self;
  v14 = sub_1000081BC(&unk_1000CA400);
  __chkstk_darwin(v14 - 8);
  v16 = (char *)&v34 - ((v15 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = sub_1000A44B0(0LL);
  v18 = *(_QWORD *)(v17 - 8);
  __chkstk_darwin(v17);
  v20 = (char *)&v34 - ((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v35 = _Block_copy(a8);
  sub_1000A4470(a3);
  if ( a5 )
  {
    sub_1000A4470(a5);
    v21 = 0LL;
  }
  else
  {
    v21 = 1LL;
  }
  (*(void (__fastcall **)(char *, __int64, __int64, __int64))(v18 + 56))(v16, v21, 1LL, v17);
  v22 = sub_1000A49E0(a6);
  v36 = v17;
  v23 = v22;
  v25 = v24;
  v26 = objc_retain(a4);
  v27 = a7;
  v28 = objc_retain(a7);
  v29 = objc_retain(v37);
  v30 = sub_1000A44D0(v27);
  v32 = v31;
  objc_release(v28);
  v33 = swift_allocObject(&unk_1000C37F8, 24LL, 7LL);
  *(_QWORD *)(v33 + 16) = v35;
  sub_100072B8C(v20, v26, v16, v23, v25, v30, v32, sub_10009D5E4, v33);
  swift_release(v33);
  sub_100008554(v30, v32);
  swift_bridgeObjectRelease(v25);
  objc_release(v29);
  objc_release(v26);
  sub_10001D67C(v16, &unk_1000CA400);
  (*(void (__fastcall **)(char *, __int64))(v18 + 8))(v20, v36);
}