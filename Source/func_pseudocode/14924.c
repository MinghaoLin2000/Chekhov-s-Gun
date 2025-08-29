-[HeuristicInterpreter ping:]
void __cdecl -[HeuristicInterpreter ping:](HeuristicInterpreter *self, SEL a2, id a3)
{
  void (__fastcall **v3)(id, _QWORD); // x20
  os_log_s *v4; // x21
  os_signpost_id_t v5; // x19
  os_log_s *v6; // x0
  os_log_s *v7; // x21
  os_log_s *v8; // x21
  os_log_s *v9; // x0
  os_log_s *v10; // x20
  uint8_t v11[16]; // [xsp+0h] [xbp-50h] BYREF
  uint8_t v12[16]; // [xsp+10h] [xbp-40h] BYREF
  uint8_t buf[16]; // [xsp+20h] [xbp-30h] BYREF

  v3 = (void (__fastcall **)(id, _QWORD))objc_retain(a3);
  v4 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100005040());
  v5 = os_signpost_id_generate(v4);
  objc_release(v4);
  v6 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100005040());
  v7 = v6;
  if ( v5 - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled(v6) )
  {
    *(_WORD *)buf = 0;
    _os_signpost_emit_with_name_impl(
      (void *)&_mh_execute_header,
      v7,
      OS_SIGNPOST_INTERVAL_BEGIN,
      v5,
      "ping",
      " enableTelemetry=YES ",
      buf,
      2u);
  }
  objc_release(v7);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC());
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v12 = 0;
    _os_log_impl((void *)&_mh_execute_header, v8, OS_LOG_TYPE_DEFAULT, "Pinged", v12, 2u);
  }
  objc_release(v8);
  v3[2](v3, 0LL);
  objc_release(v3);
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100005040());
  v10 = v9;
  if ( v5 - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled(v9) )
  {
    *(_WORD *)v11 = 0;
    _os_signpost_emit_with_name_impl(
      (void *)&_mh_execute_header,
      v10,
      OS_SIGNPOST_INTERVAL_END,
      v5,
      "ping",
      " enableTelemetry=YES ",
      v11,
      2u);
  }
  objc_release(v10);
}