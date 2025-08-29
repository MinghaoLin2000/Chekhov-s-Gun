-[LSRConnection preloadRecognizerForLanguage:task:clientID:recognitionOverrides:modelOverrideURL:completion:]
void __cdecl -[LSRConnection preloadRecognizerForLanguage:task:clientID:recognitionOverrides:modelOverrideURL:completion:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8)
{
  void (__fastcall **v14)(id, _QWORD); // x19
  id v15; // x20
  id v16; // x1
  os_log_s *v17; // x21
  _BOOL4 v18; // w0
  id v19; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-60h] BYREF
  const char *v21; // [xsp+14h] [xbp-5Ch]
  __int16 v22; // [xsp+1Ch] [xbp-54h]
  id v23; // [xsp+1Eh] [xbp-52h]

  v14 = (void (__fastcall **)(id, _QWORD))objc_retain(a8);
  v19 = 0LL;
  LOBYTE(a6) = -[LSRConnection prepareRecognizerWithLanguage:recognitionOverrides:modelOverrideURL:anyConfiguration:task:clientID:error:](
                 self,
                 "prepareRecognizerWithLanguage:recognitionOverrides:modelOverrideURL:anyConfiguration:task:clientID:error:",
                 a3,
                 a6,
                 a7,
                 1LL,
                 a4,
                 a5,
                 &v19);
  v15 = objc_retain(v19);
  v16 = 0LL;
  if ( ((unsigned __int8)a6 & 1) == 0 )
  {
    v17 = (os_log_s *)SFLogConnection;
    v18 = os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR);
    v16 = v15;
    if ( v18 )
    {
      *(_DWORD *)buf = 136315394;
      v21 = "-[LSRConnection preloadRecognizerForLanguage:task:clientID:recognitionOverrides:modelOverrideURL:completion:]";
      v22 = 2112;
      v23 = v15;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v17,
        OS_LOG_TYPE_ERROR,
        "%s Failed to prepare recognizer in advance: %@",
        buf,
        0x16u);
      v16 = v15;
    }
  }
  ((void (__fastcall **)(id, id))v14)[2](v14, v16);
  objc_release(v15);
  objc_release(v14);
}