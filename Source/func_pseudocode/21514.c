-[LSRConnection addSentenceToNgramCounts:]
void __cdecl -[LSRConnection addSentenceToNgramCounts:](LSRConnection *self, SEL a2, id a3)
{
  id v4; // x19
  os_log_s *v5; // x21
  int v6; // [xsp+0h] [xbp-40h] BYREF
  const char *v7; // [xsp+4h] [xbp-3Ch]
  __int16 v8; // [xsp+Ch] [xbp-34h]
  id v9; // [xsp+Eh] [xbp-32h]

  v4 = objc_retain(a3);
  v5 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
  {
    v6 = 136315394;
    v7 = "-[LSRConnection addSentenceToNgramCounts:]";
    v8 = 2112;
    v9 = v4;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_DEBUG,
      "%s Adding sentence=%@",
      (uint8_t *)&v6,
      0x16u);
  }
  -[LSRLanguageModel addSentenceToNgramCounts:](self->_lsrLanguageModel, "addSentenceToNgramCounts:", v4);
  objc_release(v4);
}