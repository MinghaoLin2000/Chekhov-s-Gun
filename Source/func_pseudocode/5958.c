-[_TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService logEngagementFor:with:invocationType:featureRequirements:with:]
void __cdecl -[SiriSuggestionsBookkeepingService logEngagementFor:with:invocationType:featureRequirements:with:](
        _TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  __int64 v12; // x0
  __int64 v13; // x8
  char *v14; // x20
  void *v15; // x21
  id v16; // x27
  id v17; // x28
  id v18; // x19
  id v19; // x26
  _TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService *v20; // x22
  __int64 v21; // x23
  __int64 v22; // x1
  __int64 v23; // x24
  __int64 v24; // x25
  __int64 v25; // x1
  __int64 v26; // x27
  __int64 v27; // x19
  __int64 v28; // x1
  __int64 v29; // x28
  __int64 v30; // [xsp+10h] [xbp-70h] BYREF
  _TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService *v31; // [xsp+18h] [xbp-68h]
  __int64 v32; // [xsp+20h] [xbp-60h]
  __int64 v33; // [xsp+28h] [xbp-58h]

  v31 = self;
  v12 = sub_10000D6E8(0LL, a2);
  v32 = *(_QWORD *)(v12 - 8);
  v33 = v12;
  __chkstk_darwin(v12);
  v14 = (char *)&v30 - ((v13 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v15 = _Block_copy(a7);
  v16 = objc_retain(a3);
  v17 = objc_retain(a4);
  v18 = objc_retain(a5);
  v19 = objc_retain(a6);
  v20 = objc_retain(v31);
  v21 = sub_10000D6C8(a3);
  v23 = v22;
  objc_release(v16);
  sub_10000D6D8(v17);
  objc_release(v17);
  v24 = sub_10000D6C8(v18);
  v26 = v25;
  objc_release(v18);
  v27 = sub_10000D6C8(v19);
  v29 = v28;
  objc_release(v19);
  _Block_copy(v15);
  sub_1000093CC(v21, v23, v14, v24, v26, v27, v29, v20, v15);
  _Block_release(v15);
  sub_10000C210(v27, v29);
  sub_10000C210(v24, v26);
  sub_10000C210(v21, v23);
  objc_release(v20);
  (*(void (__fastcall **)(char *, __int64))(v32 + 8))(v14, v33);
}