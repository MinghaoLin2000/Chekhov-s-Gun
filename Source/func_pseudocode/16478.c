_AUDeveloperSettingsAccessoryFusingTypeToString
const char *__fastcall AUDeveloperSettingsAccessoryFusingTypeToString(unsigned __int64 a1)
{
  if ( a1 > 3 )
    return "unrecognized";
  else
    return off_100031808[a1];
}