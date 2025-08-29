+[VideoConversionService _forceCrashAfterVideoConversionHangDetectedWithMarker]
void __cdecl __noreturn +[VideoConversionService _forceCrashAfterVideoConversionHangDetectedWithMarker](id a1, SEL a2)
{
  _os_crash("Forcing crash after detecting permanently stalled video conversion", a2);
  __break(1u);
}