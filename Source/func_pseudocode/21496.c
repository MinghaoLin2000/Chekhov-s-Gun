-[LSRConnection synchronousComputeEuclidEmbeddingsForSources:completion:]
void __cdecl -[LSRConnection synchronousComputeEuclidEmbeddingsForSources:completion:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  void (__fastcall **v7)(id, void *); // x20
  _EAREuclid *euclidInstance; // x0
  void *v9; // x21
  void *v10; // x22
  os_log_s *v11; // x21
  os_log_s *v12; // x22
  int v13; // [xsp+0h] [xbp-40h] BYREF
  const char *v14; // [xsp+4h] [xbp-3Ch]
  __int16 v15; // [xsp+Ch] [xbp-34h]
  void *v16; // [xsp+Eh] [xbp-32h]

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, void *))objc_retain(a4);
  euclidInstance = self->_euclidInstance;
  if ( euclidInstance )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[_EAREuclid computeEmbeddings:](euclidInstance, "computeEmbeddings:", v6));
    v10 = (void *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
    {
      v12 = objc_retain(v10);
      v13 = 136315394;
      v14 = "-[LSRConnection synchronousComputeEuclidEmbeddingsForSources:completion:]";
      v15 = 2048;
      v16 = objc_msgSend(v6, "count");
      _os_log_debug_impl(
        (void *)&_mh_execute_header,
        v12,
        OS_LOG_TYPE_DEBUG,
        "%s _EAREuclid.computeEmbeddings(sources:) replying with %lu requested embedding(s)",
        (uint8_t *)&v13,
        0x16u);
      objc_release(v12);
    }
    v7[2](v7, v9);
    objc_release(v9);
  }
  else
  {
    v11 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
    {
      v13 = 136315138;
      v14 = "-[LSRConnection synchronousComputeEuclidEmbeddingsForSources:completion:]";
      _os_log_debug_impl(
        (void *)&_mh_execute_header,
        v11,
        OS_LOG_TYPE_DEBUG,
        "%s No instance of _EAREuclid",
        (uint8_t *)&v13,
        0xCu);
    }
    v7[2](v7, 0LL);
  }
  objc_release(v7);
  objc_release(v6);
}