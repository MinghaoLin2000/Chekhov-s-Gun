_AUDeveloperSettingsURLTypeToString
const char *__fastcall AUDeveloperSettingsURLTypeToString(unsigned __int64 a1)
{
  if ( a1 > 6 )
    return "unrecognized";
  else
    return off_100031828[a1];
}