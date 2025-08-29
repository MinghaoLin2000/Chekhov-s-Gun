-[LSRConnection addSentenceToNgramCounts:completion:]
void __cdecl -[LSRConnection addSentenceToNgramCounts:completion:](LSRConnection *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  void (__fastcall **v7)(id, id); // x20
  os_log_s *v8; // x22
  id v9; // x21
  int v10; // [xsp+0h] [xbp-40h] BYREF
  const char *v11; // [xsp+4h] [xbp-3Ch]

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, id))objc_retain(a4);
  v8 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
  {
    v10 = 136315138;
    v11 = "-[LSRConnection addSentenceToNgramCounts:completion:]";
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_DEBUG,
      "%s Adding oovs from sentence",
      (uint8_t *)&v10,
      0xCu);
    if ( !v7 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( v7 )
  {
LABEL_3:
    v9 = objc_retainAutoreleasedReturnValue(
           -[LSRLanguageModel oovsFromSentenceAddedToNgramCounts:](
             self->_lsrLanguageModel,
             "oovsFromSentenceAddedToNgramCounts:",
             v6));
    v7[2](v7, v9);
    objc_release(v9);
  }
LABEL_4:
  objc_release(v7);
  objc_release(v6);
}