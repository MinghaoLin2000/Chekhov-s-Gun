-[_TtC22localspeechrecognition19EARSpeechRecognizer updateVoiceCommandContextWithPrefixText:postfixText:selectedText:disambiguationActive:cursorInVisibleText:favorCommandSuppression:abortCommandSuppression:undoEvent:]
void __cdecl -[EARSpeechRecognizer updateVoiceCommandContextWithPrefixText:postfixText:selectedText:disambiguationActive:cursorInVisibleText:favorCommandSuppression:abortCommandSuppression:undoEvent:](
        _TtC22localspeechrecognition19EARSpeechRecognizer *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8,
        id a9,
        id a10)
{
  _TtC22localspeechrecognition19EARSpeechRecognizer *v15; // x1
  _TtC22localspeechrecognition19EARSpeechRecognizer *v16; // x1
  _TtC22localspeechrecognition19EARSpeechRecognizer *v17; // x1
  id v18; // x25
  id v19; // x26
  id v20; // x27
  id v21; // x28
  id v22; // x23
  _TtC22localspeechrecognition19EARSpeechRecognizer *v23; // x0
  id v24; // x7
  _TtC22localspeechrecognition19EARSpeechRecognizer *v25; // x20
  SEL v26; // x1
  id v27; // x2
  id v28; // x3
  id v29; // x4
  id v30; // x5
  id v31; // x6
  id v32; // x7
  SEL v33; // x1
  id v34; // x2
  id v35; // x3
  id v36; // x4
  id v37; // x5
  id v38; // x6
  id v39; // x7
  const char *v40; // x1
  void *v41; // x2
  void *v42; // x3
  void *v43; // x4
  void *v44; // x5
  void *v45; // x6
  void *v46; // x7
  id v47; // [xsp+0h] [xbp-A0h]
  id v48; // [xsp+8h] [xbp-98h]
  __int64 v49; // [xsp+18h] [xbp-88h]
  __int64 v50; // [xsp+20h] [xbp-80h]
  _TtC22localspeechrecognition19EARSpeechRecognizer *v51; // [xsp+28h] [xbp-78h]
  __int64 v52; // [xsp+30h] [xbp-70h]
  _TtC22localspeechrecognition19EARSpeechRecognizer *v54; // [xsp+40h] [xbp-60h]
  _TtC22localspeechrecognition19EARSpeechRecognizer *v55; // [xsp+48h] [xbp-58h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  if ( a3 )
  {
    v52 = sub_1000411E0(a3);
    v55 = v15;
    if ( a4 )
      goto LABEL_3;
LABEL_6:
    v50 = 0LL;
    v54 = 0LL;
    if ( a5 )
      goto LABEL_4;
    goto LABEL_7;
  }
  v52 = 0LL;
  v55 = 0LL;
  if ( !a4 )
    goto LABEL_6;
LABEL_3:
  v50 = sub_1000411E0(a4);
  v54 = v16;
  if ( a5 )
  {
LABEL_4:
    v49 = sub_1000411E0(a5);
    v51 = v17;
    goto LABEL_8;
  }
LABEL_7:
  v49 = 0LL;
  v51 = 0LL;
LABEL_8:
  v18 = objc_retain(a6);
  v19 = objc_retain(a7);
  v20 = objc_retain(a8);
  v21 = objc_retain(a9);
  v22 = objc_retain(a10);
  v23 = objc_retain(self);
  v24 = a7;
  v25 = v23;
  sub_10001F960(v52, v55, v50, v54, v49, v51, a6, v24);
  objc_release(v18);
  objc_release(v19);
  objc_release(v20);
  objc_release(v21);
  objc_release(v22);
  objc_release(v25);
  swift_bridgeObjectRelease(v51, v26, v27, v28, v29, v30, v31, v32, a8, a9);
  swift_bridgeObjectRelease(v54, v33, v34, v35, v36, v37, v38, v39, v47, v48);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v55, v40, v41, v42, v43, v44, v45, v46, a9, a10);
}