_$s22localspeechrecognition15InstrumentationC10selfLoggerAA17SelfLoggingHelperCvpfi
__int64 variable initialization expression of Instrumentation.selfLogger()
{
  __int64 v0; // x0
  __int64 v1; // x19

  v0 = type metadata accessor for SelfLoggingHelper(0LL);
  v1 = sub_100005520(v0);
  *(_QWORD *)(v1 + 16) = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_self(&OBJC_CLASS___AssistantSiriAnalytics), "sharedStream"));
  return v1;
}