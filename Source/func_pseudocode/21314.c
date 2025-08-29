-[_TtC22localspeechrecognition12EARInterface makeLSRAssetsForLocale:taskName:clientID:modelOverrideURL:isSpelling:reply:]
void __cdecl -[EARInterface makeLSRAssetsForLocale:taskName:clientID:modelOverrideURL:isSpelling:reply:](
        _TtC22localspeechrecognition12EARInterface *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        bool a7,
        id a8)
{
  __int64 v14; // x8
  char *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x8
  char *v18; // x23
  void *v19; // x25
  __int64 v20; // x28
  __int64 v21; // x1
  __int64 v22; // x26
  __int64 v23; // x19
  __int64 v24; // x1
  __int64 v25; // x27
  __int64 v26; // x24
  __int64 v27; // x0
  _TtC22localspeechrecognition12EARInterface *v28; // x22
  __int64 v29; // [xsp+10h] [xbp-60h] BYREF
  _BOOL4 v30; // [xsp+1Ch] [xbp-54h]

  v30 = a7;
  sub_100004C54(&unk_1000641C0, a2);
  __chkstk_darwin();
  v15 = (char *)&v29 - ((v14 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v29 = sub_100040FE0(0LL);
  v16 = *(_QWORD *)(v29 - 8);
  __chkstk_darwin();
  v18 = (char *)&v29 - ((v17 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = _Block_copy(a8);
  sub_100040F50(a3);
  v20 = sub_1000411E0(a4);
  v22 = v21;
  v23 = sub_1000411E0(a5);
  v25 = v24;
  if ( a6 )
  {
    sub_100040E20(a6);
    v26 = 0LL;
  }
  else
  {
    v26 = 1LL;
  }
  v27 = sub_100040E70(0LL);
  sub_1000075A8(v15, v26, 1LL, v27);
  _Block_copy(v19);
  v28 = objc_retain(self);
  sub_1000101F8(v18, v20, v22, v23, v25, v15, v30, v28, v19);
  _Block_release(v19);
  objc_release(v28);
  swift_bridgeObjectRelease(v22);
  swift_bridgeObjectRelease(v25);
  sub_100005A38(v15, &unk_1000641C0);
  (*(void (__fastcall **)(char *, __int64))(v16 + 8))(v18, v29);
}