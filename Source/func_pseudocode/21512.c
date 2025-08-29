-[LSRConnection oovWordsAndFrequenciesWithCompletion:]
void __cdecl -[LSRConnection oovWordsAndFrequenciesWithCompletion:](LSRConnection *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, id); // x19
  os_log_s *v5; // x21
  id v6; // x20
  int v7; // [xsp+0h] [xbp-40h] BYREF
  const char *v8; // [xsp+4h] [xbp-3Ch]

  v4 = (void (__fastcall **)(id, id))objc_retain(a3);
  v5 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
  {
    v7 = 136315138;
    v8 = "-[LSRConnection oovWordsAndFrequenciesWithCompletion:]";
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_DEBUG,
      "%s oovs words and frequencies",
      (uint8_t *)&v7,
      0xCu);
    if ( !v4 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( v4 )
  {
LABEL_3:
    v6 = objc_retainAutoreleasedReturnValue(
           -[LSRLanguageModel oovWordsAndFrequenciesInNgramCount](
             self->_lsrLanguageModel,
             "oovWordsAndFrequenciesInNgramCount"));
    v4[2](v4, v6);
    objc_release(v6);
  }
LABEL_4:
  objc_release(v4);
}